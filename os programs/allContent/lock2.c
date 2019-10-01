#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>

int main(){

int fd;
int tries = 10;
while(tries--){
	fd = open("lock2.txt",O_RDWR|O_CREAT|O_EXCL,0444);
	if(fd == -1){
		printf("%d lock already present \n ",getpid());
		sleep(1);
		}	
	else{
		printf("%d I have exclusive access \n",getpid());
		sleep(1);
		close(fd);
		unlink("lock2.txt");
		sleep(1);
		}
	}
exit(EXIT_SUCCESS);
}
