//Ques : To read from the named pipes;
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main(){
int res,n;
char buffer[50];
res=open("fifo",O_RDONLY);
n=read(res,buffer,50);
printf("Total chars read = %d \n",n);
printf("Materak read : %s \n",buffer);
printf("Process finished with id : %d\n",getpid());

}

//We compiled the in which we wrote in fifo file as:
// fcc -o 2 namedPipes2.c

//We compiled this file as : 
// gcc -o 3 namedPipes3.c

//we then typed this command : 
// ./2 & ./3 
// to see the combined output for both the files;


