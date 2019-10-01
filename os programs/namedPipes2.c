//Ques:  WACP to write into named Pipes;
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int r;
r=open("fifo", O_WRONLY);
write(r,"wriiten",7);
printf("Process finished with id = %d \n", getpid());
}
