#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){ //argc = argument count, argv = 2d char array;
// int main(int argc, char **argv){} //works same;
//int main(int argc, char argv[][]){} //also works same;
int arg; //same as int i;
for(arg = 0 ; arg<argc ; arg++){
	if( argv[arg][0] == '-' )
	{
		printf("Option = %c \n",argv[arg][1]);
		if(argv[arg][1] == 'n')
			printf("name = %s \n",argv[arg]+2);		
		else if(argv[arg][1] == 'a')
			printf("age = %s \n",argv[arg]+2);
	}
	else

		printf("argument %d : %s \n",arg,argv[arg]);
	}
exit(0);

}

