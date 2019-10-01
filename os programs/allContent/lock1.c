#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>	//for open system call
#include<errno.h> 	//for getting the error no
int main(){
int fd;	
int errnumber;
fd = open("lock1.txt",O_RDWR|O_CREAT|O_EXCL,0444);
if(fd == -1){
	errnumber = errno; //errno from errno.h
	printf("Open failed with error no %d\n",errnumber);	
	}
else{
	printf("Open succeeded\n");
	}
exit(EXIT_SUCCESS);
}
