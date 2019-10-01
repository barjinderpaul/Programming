#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
int main(){
int fd,fd2,bread,nread;
fd = open("copyFrom.txt",O_RDONLY);
lseek(fd,2,SEEK_SET);
char buffer[50];
bread = read(fd,buffer,50);
close(fd);
fd2 = open("copyTo2.txt",O_WRONLY|O_CREAT,00777);
write(fd2,buffer,sizeof(buffer));
close(fd2);

}
