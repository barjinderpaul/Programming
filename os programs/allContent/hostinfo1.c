#include<sys/utsname.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
char name[256];
struct utsname uts;
if( gethostname(name,256)!=0 || uname(&uts)<0 )
	{
	fprintf(stderr,"Unable to get host info\n");
	exit(1);
	}
printf("host name = %s\n",name);
printf("system is %s on hardware %s\n",uts.sysname,uts.machine);
printf("nodename = %s\n",uts.nodename);
printf("version %s %s\n",uts.release,uts.version);
}
