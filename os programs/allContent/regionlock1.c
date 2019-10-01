#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<errno.h>
int main(){
int fd; //file descriptor
char *byte_to_write="A";
struct flock region1;//flock structures
struct flock region2; //flock strucutures
int res,errornumber;

fd = open("lockRegionTest.txt",O_RDWR|O_CREAT,0666);
/*
here we did not use, O_EXCL because we are not setting
the lock on the file but on the regions in the file.
*/
if(fd==-1)
	{
	errornumber = errno;
	printf("failed to open %d\n",errno); 	
	exit(EXIT_FAILURE);	
	}

//WRITING DATA INTO THE FILE:	
int byte_count;
for(byte_count=0;byte_count<100;byte_count++)
	write(fd,byte_to_write,1);
//data wrtiiten in file.

//setting up regions:
region1.l_type = F_RDLCK; //read(shared) lock on region1;
region1.l_whence = SEEK_SET;
region1.l_start = 10;
region1.l_len = 20;	//lock will be set from 10-30

region2.l_type=F_WRLCK;	//write lock
region2.l_whence = SEEK_SET;
region2.l_start = 40;
region2.l_len = 10;	//lock will be set from 40 to 50.

//locking the regions in the file :
printf("Process %d locking the file \n",getpid());
res = fcntl(fd,F_SETLK,&region1); //lock for region 1;
if(res==-1)
	fprintf(stderr,"Failed to lock region 1\n");
res = fcntl(fd,F_SETLK,&region2); //lock for region2;
if(res==-1)
	fprintf(stderr,"Failed to lock region 1\n");

sleep(60); //for next programs;
close(fd);
exit(EXIT_SUCCESS);

}
