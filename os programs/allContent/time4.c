#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
int main(){
struct tm *tm_ptr;
time_t the_time;
(void)time(&the_time);
tm_ptr=localtime(&the_time);
printf("Raw time = %ld\n",the_time);
printf("Gm time gives\n");
printf("date = %02d/%02d/%02d \n",tm_ptr->tm_year+1900,tm_ptr->tm_mon+1,tm_ptr->tm_mday);
printf("Time = %02d:%02d:%02d \n",tm_ptr->tm_hour,tm_ptr->tm_min,tm_ptr->tm_sec);
exit(0);
}
