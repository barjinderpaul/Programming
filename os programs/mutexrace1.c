//Ques : prevent race with mutex lock;
#include<pthread.h>
#include<stdio.h>
void *func();
void *func2();
int sv=1;
pthread_mutex_lock l;
int main(){
pthread_t a,b;
pthread_mutex_init(&l,NULL);
pthread_create(a,NULL,func,NULL);
pthread_create(b,NULL,func2,NULL);
pthread_join(a,NULL);
pthread_join(b,NULL);
printf("Value of sv = %d \n" , sv);
}
void *func(){
int x;
pthread_mutex_lock(&l);
x=sv;
x++;
sleep(1); //Sleep will not work due to lock
sv=x;
printf("Value of func1 x: %d \n",x); 
pthread_mutex_unlock(&l);
}
void *func2(){
int y;
pthread_mutex_lock(&l);
y=sv;
y--;
sleep(1); //Sleep will not work due to lock
sv=y;
printf("Value of func2 y: %d \n",y ); 
}
