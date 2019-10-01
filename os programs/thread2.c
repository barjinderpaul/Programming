//Ques : 1st thread adds and 2nd threads multiply
#include<pthread.h>
#include<stdio.h>
void *add(void *arg)
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
c=a+b;
printf("sum = %d\n",c);
}
void *mul(void *arg)
{
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
c=a*b;
printf("Mul = %d\n",c);
}

int main(){
pthread_t a,m;
pthread_create(&a,NULL,add,NULL);
pthread_create(&m,NULL,mul,NULL);
pthread_join(a,NULL);
pthread_join(m,NULL);
printf("Thread executed");
}

