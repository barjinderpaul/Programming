#include<syslog.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
int logmask;
openlog("logmask",LOG_PID|LOG_CONS,LOG_USER);
syslog(LOG_INFO,"Informative messag, pid = %d\n",getpid());
syslog(LOG_DEBUG,"Debug lock \n");
logmask = setlogmask(LOG_UPTO(LOG_NOTICE));
syslog(LOG_DEBUG,"it wont work\n");
exit(0);
}
