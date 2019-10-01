#include<stdio.h>
#include<stdlib.h>
extern char **environ; 
int main(){
char **env = environ; 
while(*env){    //while *env is true and is not false;
printf("%s\n",*env);  //print the environment variable;
env++; 	//increment the value of env to display next environment variable;
}	
exit(0);
}

