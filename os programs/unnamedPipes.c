//Ques: to send msg from parent to child process using unnamed pipes;
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
int main(){
char buffer[50];
int fd[2],n;
pipe(fd); //Unnamed Pipe created;
pid_t p = fork();
if(p>0){
    //Parent Process;
    	close (fd[0]); //Closes read part ( fd[0]);
	printf("Parent is sending message\n");
	write(fd[1],"HelloWorld",10);
	wait(NULL);	
	}
if(p==0){
	close(fd[1]); //closes the writing part fd[1];
	n=read(fd[0],buffer,20);
	write(1,buffer,n);
	}
}

