//Question = P1 parent. p2 and p3 it's child

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main(){
int i;
for(i=0;i<2;i++){
	if(fork()==0){
		if(i==0){
		printf("child p1: %d . parent P: %d\n",getpid(),getppid()); 
	}
	if(i==1){
	  	printf("child p2 %d . parent P: %d\n",getpid(),getppid());
	}			
}

exit(0);
	      }
		}	
for(i=0;i<2;i++){
wait(NULL);
		}

}
