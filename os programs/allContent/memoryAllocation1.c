#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define MB (1024*1024)

int main(){

char *some_memory;
int megabyte = MB;
int exitCode = EXIT_FAILURE;

//Allocating memory;
some_memory = (char *)malloc(megabyte);
if(some_memory!=NULL){
	sprintf(some_memory,"Hello memory is allocated\n"); //String stored in some_memory;
	printf("%s",some_memory);
	exitCode = EXIT_SUCCESS;	
	}
exit(exitCode);

}
