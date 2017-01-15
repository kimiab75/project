#include "types.h"
#include "user.h"

int main (void){
int ChildPid = fork ();
if (ChildPid < 0)
	printf (1, "Fork has faild. %d\n" , ChildPid);
else if (ChildPid> 0 ){
	printf (1, "I am the parent and my ID is %d & my child ID is %d\n" , getpid(), ChildPid);
	wait();
}
else {
	printf (1, "I am the child and my ID is %d & my parent ID is %d\n" , getpid(), getppid());
}
exit();
}
