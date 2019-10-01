#include<syslog.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *f;
f = fopen("not_here","r"); //file does not exist;
if(!f)
	syslog(LOG_ERR|LOG_USER,"oopsie - %m\n");
exit(0);
}


