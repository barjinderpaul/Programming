#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
int fd;
char buffer[30];
fd=open("file1.txt",O_RDWR);
read(fd,buffer,10);
write(1,buffer,10);
printf("\n");
int off=lseek(fd,5,SEEK_SET);
printf("Value of current pointer = %d\n",off);
read(fd,buffer,5);
write(1,buffer,5);
}
