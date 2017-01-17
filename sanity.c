#include "types.h"
#include "stat.h"
#include "user.h"


int main(void){

int child_pid[30];
int i;
int cid[30];
int j;
int w;

for (i=0; i < 30 ; i++ ){
  child_pid[i] = fork();
  cid[i] = getpid();
  
  if (cid[i] % 3 == 0){
    nice();
  }
  
  else if (cid[i] % 3 == 1){
    for (j=0 ; j <2 ; j++){
      nice();
    }
  }
  
  if (child_pid[i] != 0){ //lazem nis in shart chon alan tooye halghe yi hastim k hame farzandan
    
  for (w=0 ; w< 500 ; w++){
    printf (1, "pid is %d \n" ,getpid());
  }
  exit();
  }

}
return 0;
}
