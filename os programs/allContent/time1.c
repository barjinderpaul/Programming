#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main(){
int i;
time_t the_time;
for(i=0;i<10;i++){
(void)time(&the_time); // the_time= time((time_t *)0);
printf("time = %ld\n",the_time);
sleep(2);
}
}
