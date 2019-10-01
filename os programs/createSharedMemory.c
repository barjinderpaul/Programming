//Write into shared memory 

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/shm.h>
int main(){
int shmid;
char buffer[50];
void *shared_memory;
shmid=shmget((key_t)2345,1000,0066|IPC_CREAT);
printf("Shared memory id = %d \n ", shmid);
shared_memory=shmat(shmid,NULL,0);
printf("Process attached at %X \n",(int)shared_memory);
printf("Enter the data to write \n");
read(0,buffer,50);
printf("You wrote = %s\n",shared_memory);
}
