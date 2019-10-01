#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(){
FILE *rd;
char buffer[50];
rd=open("ls","r");
fread(buffer,1,50,rd);
printf("%s\n",buffer);
pclose(rd);
}
