#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){

	int fd;
	char buffer[50];
	fd = open("copyFrom.txt",O_RDWR|O_CREAT,00777);	
	write(1,"Enter data",50);
	int bytesRead = read(0,buffer,50);	
	write(fd,buffer,bytesRead);
	close(fd);
		
	char block[1024];
	int fd2;
	int nread;
	fd = open("copyFrom.txt",O_RDONLY);
	fd2 = open("copyTo.txt",O_WRONLY|O_CREAT,00777);
	while( (nread = read(fd,block,sizeof(block))) > 0 )
		write(fd2,block,nread);

	
}

/*

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

*/

