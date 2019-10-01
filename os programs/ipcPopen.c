#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(){
FILE *rd;
char buffer[50];
sprintf(buffer,"Namesss first");
rd=popen("wc -c","w"); //wc -c is the process which counts the 				number of characters ; w means pipe is 				opened in writing mode;
fwrite(buffer,sizeof(char),strlen(buffer),rd); //writes data into 							  pipe
pclose(rd);

}
