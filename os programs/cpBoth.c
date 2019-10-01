#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main(){
int i,j;
if(fork()==0)
{
for(i=0;i<10;i++)
{
printf("%d\n",i);
sleep(1);
}
}
if(fork()==1){
for(i=20;i<30;i++)
{
printf("%d\n",i);
}
}
if(fork()==-1){
printf("error\n");
}
wait(NULL);
printf("common");
}
