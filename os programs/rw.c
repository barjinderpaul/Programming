#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
sem_t mutex, wrt;
int data = 0, rcount = 0;
// semaphore mutex is used to ensure mutual
//exclusion when readcnt is updated
// semaphore wrt is used by both readers and
//writers
// mutex (m)= reader, write block(w)= writer
//read count is used to maintain the number of
void *reader(void *arg)
{
int f;
f = ((int)arg);
sem_wait(&mutex);
// acquires locks
rcount = rcount + 1;
if(rcount==1)
sem_wait(&wrt);
// acquires locks
sem_post(&mutex);
// releases the lock
printf("Data read by the reader%d is %d\n",f,data);
// perform
sleep(1);sem_wait(&mutex);
rcount = rcount - 1;
if(rcount==0)
sem_post(&wrt);
sem_post(&mutex);
//acquires lock
// releases lock
// releases lock
}
void *writer(void *arg)
{
int f;
f = ((int) arg);
sem_wait(&wrt);
//acquires lock
data++;
printf("Data writen by the writer%d is %d\n",f,data); // 
sleep(1);
sem_post(&wrt);
// releases lock
}
main()
{
int i;
pthread_t rtid[5], wtid[5];
sem_init(&mutex,0,1);
sem_init(&wrt,0,1);
for(i=0;i<=2;i++)
{
pthread_create(&wtid[i],NULL,writer,i);
pthread_create(&rtid[i],NULL,reader,i);
}
for(i=0;i<=2;i++)
{
pthread_join(wtid[i],NULL);
pthread_join(rtid[i],NULL);
}
}
