#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main(){
int fd= open("dateTime.txt",O_RDWR|O_CREAT,0777);

struct tm *timeptr,timestruct; //structure of time
time_t the_time; //variable of time_t datatype;
char buf[256];  //character buffer of size 256;
timeptr= localtime(&the_time);  
strftime(buf,256,"%a %d-%b-%Y, %I:%S %p",timeptr); //%a for short day name, %d for date, %b for short month name, %y for year  %p for am
write(fd,buf,strlen(buf)); //write in file descriptor of the file , strlen calculates the length of the buffer ;
printf("Date and TIme = %s",buf); //prints the date and time from buffer;

} 
