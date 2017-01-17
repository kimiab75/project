#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){

int child_pid;
int i,j;

printf (1, "Father pid is %d \n" , getpid());

sleep (100);

child_pid = fork();

//for (i=0; i < 50 ; i++ ){

  if(child_pid == 0){
for (i=0; i < 50 ; i++ )
    printf (1, "process %d is printing for the %d time.\n" ,getpid() , i);
exit();
  }
  
  else if(child_pid > 0){
for (j=0; j < 50 ; j++ )
    printf (1, "process %d is printing for the %d time.\n" ,getpid() , j);
  }
  
  else{
    printf (1,"fork faild");
  
  //}
//exit();
}
return 0;
}

