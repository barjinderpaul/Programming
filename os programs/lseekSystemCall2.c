#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int fd;
char buffer[30];
fd=open("file1.txt",O_RDWR);
int off=lseek(fd,-10,SEEK_END);
printf("Value of current pointer = %d\n",off);
read(fd,buffer,10);
write(1,buffer,10);
}
