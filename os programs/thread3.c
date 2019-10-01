//Ques : Thread with 1 argument
#include<pthread.h>
#include<stdio.h>

void *display(void *arg)
{
printf("Message to be displayed %s\n",arg);
}
int main(){
char message[]="Hello world";
pthread_t a;
pthread_create(&a,NULL,display,message);
pthread_join(a,NULL);
}

