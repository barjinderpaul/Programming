#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
void* producer(void *arg); //producer function
void* consumer(void *arg); //consumer function
char buff[20]; // common buffer size is 20
sem_t full,empty; // semaphores count no of full and

int main()
{
pthread_t pid,cid;
sem_init(&empty,0,1); // Create the empty semaphore and initialize to 1
sem_init(&full,0,0); // Create the full semaphore and initialize to 0
pthread_create(&pid,NULL,producer,NULL);
pthread_create(&cid,NULL,consumer,NULL);
pthread_join(pid,NULL);
pthread_join(cid,NULL);
}void* producer(void*arg)
{
int run=1;
while (run)
{
sem_wait(&empty);
// acquires empty lock
printf("\nEnter Mes to be add into buffer:");
scanf("%s",buff);
if(strcmp(buff,"end",3)==0)
run=0;
sem_post(&full);
//release the full
}
return NULL;
}
void* consumer(void *arg)
{
int run=1;
while(run)
{
sem_wait(&full);
// acquire full lock
printf("\nConsumed item is %s\n",buff);if(strcmp(buff,"end",3)==0)
run=0;
sem_post(&empty);
}
return NULL;
}
