#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
struct tm *tmptr;
struct 
time_t t;
 (void )time (&t);
tmptr = gmtime(&t);
printf("raw time %ld\n", t);
printf("gm time : \n");
printf("date: %02d/%02d/%02d\n ",tmptr->tm_year, tmptr->tm_mon+1, tmptr->tm_mday);
printf("time: %02d/%02d/%02d\n",tmptr->tm_hour, tmptr->tm_min, tmptr->tm_sec);
printf("\n ctime : %s",ctime(&t));

 
}
