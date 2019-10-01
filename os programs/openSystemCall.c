#include<stdio.h>
#include<fcntl.h>
int main(){
char buffer[50];
int fileDescriptor,size;
write(1,"Enter data" , 10);
size=read(0,buffer,50);
fileDescriptor=open("file1.txt",O_CREAT | O_RDWR, 0777);
write(fileDescriptor,buffer,size);
}
