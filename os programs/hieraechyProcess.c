//Question = P1 parent. p2 and p3 it's child

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main(){
int i;
for(i=0;i<2;i++){
	if(fork()==0){
		printf("child: %d . parent: %d\n",getpid(),getppid());
exit(0);		      }
		}
for(i=0;i<2;i++){
wait(NULL);
		}

}
