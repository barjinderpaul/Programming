#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
int main(){
  pid_t pid;
  printf("This is pid %d\n",getpid());
  int first=fork();
  wait();

  if(first==0){
    printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());
    int third=fork();
    wait();
    if (third==0) {
      printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());

    }
  }
  else{
    int second=fork();
    if(second==0){
      printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());
      int four=fork();
      wait();
      if (four==0) {
        printf("this is the pid %d and parent ppid %d\n",getpid(),getppid());

      }
      }
      }
      return 0;

  }
