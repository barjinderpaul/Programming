#include<stdio.h>
#include<sys/types.h>
int main(){
printf("Current process id = %d \n",getpid());
pid_t q;
q=fork();
printf("Child created with id %d",getpid());
}
