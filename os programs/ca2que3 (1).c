#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
char check; //used to know which argument is enterd ,initilize to that value
int opt;
while((opt = getopt(argc, argv, "sd")) != -1) {
switch(opt) {
case 's':
	check='s';
	printf("option: SUM");
	break;
case 'd':
	check='d';
	printf("option: difference ");
	break;

case '?':
	printf("unknown option: %c\n",optopt);
	break;
	}
}
int action=0;
for(int i=1; optind < argc; optind++)
{	printf("argument: %s\n",argv[optind]);
	if(i==1)
	action=action+atoi (argv[optind]);
	if((check=='s') && (action!=atoi (argv[optind]))){
		action=action+(int)atoi (argv[optind]);
		
	}
	if((check=='d')&& (action!=argv[optind])){
	action=action-(int)atoi (argv[optind]);
	}
//printf("%d",action);
	i++;
}	
printf("%d",action);
exit(0);
}