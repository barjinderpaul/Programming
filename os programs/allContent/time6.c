#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
time_t time_value;
(void)time(&time_value);
printf("Date in asctime = %s\n",asctime(&time_value));
printf("Date in ctime = %s\n",ctime(&time_value));
exit(0);
}
