//Ques : To implement more than 2 args using threads i.e., via struct;

#include<pthread.h>
#include<stdio.h>
struct arg_struct{
int arg1;
int arg2;
};
void *arguments( void *arguments){
struct arg_struct *args=arguments;
printf("%d \n ", args->arg1);
printf("%d \n ", args->arg2);
}
int main(){
pthread_t t;
struct arg_struct args;
args.arg1=5;
args.arg2=7;
pthread_create(&t,NULL,arguments,&args);
pthread_join(t,NULL);
}
