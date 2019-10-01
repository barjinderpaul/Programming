//Question : To show race conditions between threads by //increamentin the value and decrementing the value of the /shared //////variable 
#include<pthread.h>
#include<stdio.h>
void *func1();
void *func2();
int sharedVariable=1;

int main(){
pthread_t a,b;
pthread_create(&a,NULL,func1,NULL);
pthread_create(&b,NULL,func2,NULL);
pthread_join(a,NULL);
pthread_join(b,NULL);
printf("Value of the shared variable = %d \n" ,sharedVariable);
}
void *func1(){
int x;
x=sharedVariable;
x++;
sleep(1);
sharedVariable=x;
printf("Value of function 1 x : %d \n " ,x);
}
void *func2(){
int y;
y=sharedVariable;
y--;
sleep(1);
sharedVariable=y;
printf("Value of the function2 : %d \n" ,y);


}
