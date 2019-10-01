#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main(){
struct tm *tm_ptr,timestruct;
time_t the_time;
char buff[256];
(void)time(&the_time);
tm_ptr = localtime(&the_time);
strftime(buff,256,"%A %d %B, %I:%S %p",tm_ptr);
printf("strftime gives %s \n",buff);
}
