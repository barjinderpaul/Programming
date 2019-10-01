#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main(){
int fd,fd2,bread,nread;
char buffer[50];
fd = open("copyFrom.txt",O_RDWR|O_CREAT,00777);
write(1,"enter data",10);
bread = read(0,buffer,50);
write(fd,buffer,bread);
close(fd);

char block[1024];
fd2 = open("copyTo.txt",O_WRONLY|O_CREAT,00777);
fd = open("copyFrom.txt",O_RDONLY);

while( (nread = read(fd,block,sizeof(block)))>0){
	write(fd2,block,nread);
	}
close(fd);
close(fd2);
}
