#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"

int
sys_fork(void)
{
  return fork();
}



int
sys_exit(void)
{
  exit();
  return 0;  // not reached
}

int
sys_wait(void)
{
  return wait();
}

int
sys_kill(void)
{
  int pid;

  if(argint(0, &pid) < 0)
    return -1;
  return kill(pid);
}

int
sys_getpid(void)
{
  return proc->pid;
}

<<<<<<< HEAD
int sys_wait2(void)
{
  int *wtime;
  int *rtime;
  
  if(argptr(0, (char**)&wtime, sizeof(int)) < 0){
    return -1;}

  if(argptr(1, (char**)&rtime, sizeof(int)) < 0){
    return -1;}

  return wait2(wtime,rtime);
=======
int
sys_getPerformanceData(void)
{
  return proc->getPerformanceData;
>>>>>>> fe37ccd5fa72df5b636d8975c75f9d2cc109db49
}

int
sys_nice(void)
{
<<<<<<< HEAD
  return nice();
=======
  return proc->nice;
>>>>>>> fe37ccd5fa72df5b636d8975c75f9d2cc109db49
}


int
sys_getppid(void)
{
if (proc->parent == 0)
	return (0);
	return proc->parent->pid;
}

int
sys_sbrk(void)
{
  int addr;
  int n;

  if(argint(0, &n) < 0)
    return -1;
  addr = proc->sz;
  if(growproc(n) < 0)
    return -1;
  return addr;
}

int
sys_sleep(void)
{
  int n;
  uint ticks0;

  if(argint(0, &n) < 0)
    return -1;
  acquire(&tickslock);
  ticks0 = ticks;
  while(ticks - ticks0 < n){
    if(proc->killed){
      release(&tickslock);
      return -1;
    }
    sleep(&ticks, &tickslock);
  }
  release(&tickslock);
  return 0;
}

// return how many clock tick interrupts have occurred
// since start.
int
sys_uptime(void)
{
  uint xticks;

  acquire(&tickslock);
  xticks = ticks;
  release(&tickslock);
  return xticks;
}
