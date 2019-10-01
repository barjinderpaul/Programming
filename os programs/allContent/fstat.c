#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
struct stat1{
	dev_t st_dev;
	ino_t st_ino;
};

int main(){
	struct stat1 s1;
	stat("copyFrom.txt",&s1);
	printf("Device id = %ud\n",s1.st_dev);
	printf("Inode no = %ud\n",s1.st_ino);
}
