#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>	
int main(){
char buffer[100];
int fd=open("/home/benny/Desktop/sampleFile.txt",O_CREAT|O_RDWR,00700);
write(1,"enter data" ,10);
int size;
size=read(0,buffer,100);
write(fd,buffer,size);	
printf("\n");
int fd2=open("/home/benny/Desktop/sample1.txt",O_CREAT|O_RDWR,00700);
write(1,"Reading from file" ,17);
write(1,"last 10 \n" ,7);
lseek(fd,-10,SEEK_END);
read(fd,buffer,10);
puts(buffer);
write(fd2,buffer,10);
write(1,"first 10 \n",8);
lseek(fd,0,SEEK_SET);
read(fd,buffer,10);
puts(buffer);
write(fd2,buffer,10);
printf("\n");
printf("Data from sample1.txt \n");
lseek(fd2,0,SEEK_SET);
read(fd2,buffer,20);
puts(buffer); 

}
