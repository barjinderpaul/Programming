//Ques : create a simple thread
#include<pthread.h>
#include<stdio.h>
void *display(void *arg)
{
printf("In the display function");
}
int main(){
pthread_t a;
pthread_create(&a,NULL,display,NULL);
printf("Thread created");
pthread_join(a,NULL);
printf("Thread executed");
}

