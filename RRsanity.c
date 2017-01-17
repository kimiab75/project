#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){

int n = 3;
int i;
int j;
int child_pid[3];
int wtime;
int rtime;
//int tt;

for ( i =0 ; i < n ; i++){
	child_pid[i] = fork();
	if (child_pid[i]== 0){
		for (j=0 ; j<10 ; j++){
		printf (1, "child %d prints for the %d time", getpid(), j);

	}
exit();
}


	wait2(&wtime,&rtime);
	//tt = wtime + rtime;
	printf(1, "wtime = %d rtime = %d tt = %d", wtime, rtime, wtime + rtime);



}
return 0;
}

