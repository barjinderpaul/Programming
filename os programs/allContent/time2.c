#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main(){

time_t time1,time2;
(void)time(&time1);
sleep(2);
(void)time(&time2);
printf("diff= %f\n",difftime(time1,time2));
}
