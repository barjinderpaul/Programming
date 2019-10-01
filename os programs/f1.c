#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main(){
  pid_t pid;
  printf("this is the pid id %d\n",getpid());
  int first=fork();
  wait();
  if(first==0){
    printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());
    int second=fork();
    wait();

    if(second==0){
      printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());
    }
    else{
      int third=fork();
      if(third==0)
        printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());
    }
  }
  return 0;
}
