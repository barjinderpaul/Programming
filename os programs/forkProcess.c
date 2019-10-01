#include<stdio.h>
#include<sys/types.h>
int main(){
pid_t p;
p=fork();
printf("Child created \n");
switch(p){
	case -1 : printf("Child not created , error \n");
		  break;
	case 0 : printf(" c0 Child created with id %d \n",getpid());
		 printf(" c0 Parent's id %d \n",getppid());
		 break;
	default : printf(" de Parent process id = %d \n",getppid());
		  printf("de Child process id = %d \n",getpid());
 		  break;

}
}
