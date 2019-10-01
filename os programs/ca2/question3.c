#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
char check; //later use in program to detect where option to add or subtract
int opt;
while((opt = getopt(argc, argv, "sd")) != -1) { //while (opt!= -1);
switch(opt) {
case 's':
	check='s';
	
	break;
case 'd':
	check='d';
	
	break;

case '?':
	printf("unknown option: %c\n",optopt);  //Invalid option case 
	break;
	}
}
int action=0;
for(int i=1; optind < argc; optind++)  
{		if(i==1)
	action=action+atoi (argv[optind]);
	if((check=='s') && (action!=atoi (argv[optind]))){ //checking for option 's' and then by atoi converting to integer and adding both numbers
		action=action+(int)atoi (argv[optind]);
		
	}
	if((check=='d') && (action!=atoi (argv[optind]))){ //checking for option 's' and then by atoi converting to integer and adding both numbers
		action=action-(int)atoi (argv[optind]);
		
	}

	i++;  //continue in loop;
}	
printf("%d",action); //printing the answer;
exit(0);
}

