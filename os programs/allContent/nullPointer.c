#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){

char *some_memory = (char *)0; //Stored NULL in some_memory;
printf("A read to NULL %s \n",some_memory); //Checking what is stored in some_memory

/*
Here, when we do read, it reads/prints as (null). But, also in some systems, it is possible
that it could directly print segmentation fault just when we are assinging null to some_memory.
*/

sprintf(some_memory,"A write to NULL\n"); //wrting in some_memory
printf("%s \n",some_memory);
exit(EXIT_SUCCESS);

}
