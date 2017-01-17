// Test that fork fails gracefully.
// Tiny executable so that the limit can be filling the proc table.

#include "types.h"
#include "stat.h"
#include "user.h"

#define N  1000
/*
void
printf(int fd, char *s, ...)
{
  write(fd, s, strlen(s));
}
*/

void
foo()
{
  int i;
  for (i=0;i<100;i++)
     printf(2, "wait test %d\n",i);
  sleep(20);
  for (i=0;i<100;i++)
     printf(2, "wait test %d\n",i);

}

void
waittest(void)
{
  int wTime;
  int rTime;
  int pid;
  printf(1, "wait test\n");


    pid = fork();
    if(pid == 0)
    {
      foo();
      exit();      
    }
<<<<<<< HEAD
    wait2(&wTime,&rTime);
=======
    getPerformanceData(&wTime,&rTime);
>>>>>>> fe37ccd5fa72df5b636d8975c75f9d2cc109db49
     printf(1, "hi \n");
    printf(1, "wTime: %d rTime: %d \n",wTime,rTime);

}
int
main(void)
{
  waittest();
  exit();
}
