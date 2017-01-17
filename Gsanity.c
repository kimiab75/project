#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){

int child_pid;
int i;

printf (1, "Father pid is &d \n" , getpid());

sleep (100);

child_pid = fork();

for (i=0; i < 50 ; i++ ){

  if(child_pid == 0){
    printf (1, "process %d is printing for the %d time.\n" ,getpid() , i);
  }
  
  else if(child_pid > 0){
    printf (1, "process %d is printing for the %d time.\n" ,getpid() , i);
  }
  
  else{
    printf (1,"fork faild");
  
  }
exit();
}
return 0;
}

