//Ques : Thread with 1 argument to cal factorial
#include<pthread.h>
#include<stdio.h>

void *fact(void *arg)
{
printf(" Number entered : %d\n",arg);
int i,ans=1;
for (i=1;i<=arg;i++){
ans= ans*i;
}
printf("%d\n",ans);
}
int main(){
int i=5;
pthread_t a;
pthread_create(&a,NULL,fact, i);
pthread_join(a,NULL);
}

