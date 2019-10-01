#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

void show_lock_info(struct flock *regionTest);
int main(){
int fd,res;
struct flock regionTest;
fd = open("lockRegionTest.txt",O_RDWR|O_CREAT,0666);
if(!fd){
	fprintf(stderr,"Unable to open ");
	exit(EXIT_FAILURE);	
	}
//if file accessed;
int start;
for(int start=0;start<99;start+=5){
	regionTest.l_type = F_WRLCK;
	regionTest.l_whence = SEEK_SET;
	regionTest.l_start = start;
	regionTest.l_len = 5;
	regionTest.l_pid = -1;

	printf(" Testing G_WRLCK on region starting from %d to %d\n",start,start+5);
	
	res = fcntl(fd,F_GETLK,&regionTest);
	if(res==-1)
		{fprintf(stderr,"GETLOCK failed \n");
		exit(EXIT_FAILURE);
		}
	if(regionTest.l_pid!=-1){
	printf("Lock would fail, F_GETLK returned\n");
	show_lock_info(&regionTest);
	}
	
	else{
		printf(" F_WRLCK lock would succeed\n");
		}

	//Testing for RDLCK;

	regionTest.l_type = F_RDLCK;
	regionTest.l_whence = SEEK_SET;
	regionTest.l_start = start;
	regionTest.l_len = 5;
	regionTest.l_pid = -1;

	printf(" Testing F_RDLCK on region starting from %d to %d\n",start,start+5);
	
	res = fcntl(fd,F_GETLK,&regionTest);
	if(res==-1)
		{fprintf(stderr,"GETLOCK failed \n");
		exit(EXIT_FAILURE);
		}
	if(regionTest.l_pid!=-1){
	printf("Lock would fail, F_GETLK returned\n");
	show_lock_info(&regionTest);
	}
	
	else{
		printf(" F_RDLCK lock would succeed\n");
		}
}
close(fd);
exit(EXIT_SUCCESS);
}

void show_lock_info(struct flock *regionTest){
printf(" type = %ld\n",regionTest->l_type);
printf(" Whence = l%d\n",regionTest->l_whence);
printf(" start = %ld\n",regionTest->l_start);
printf(" len = %ld\n",regionTest->l_len);
printf(" pid = %ld\n",regionTest->l_pid);

}
