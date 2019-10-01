//Read from shared memory
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/shm.h>
int main(){
int shmid;
void *shared_memory;
shmid=shmget((key_t)2345,1000,0066);
printf("shmid = %d \n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("Process attached at = %X \n",(int)shared_memory);
printf("data written in shared memory is: %s\n",shared_memory);
}
