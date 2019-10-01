#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>


int main(){

char *some_memory = (char *)malloc(1024);
if(some_memory!=NULL){

	printf("memory allocated \n");
	free(some_memory);		
	printf("memory freed by free \n");
	exit(EXIT_SUCCESS);
	}
else
	printf("failed to allocate memory \n");
exit(EXIT_FAILURE);

}
