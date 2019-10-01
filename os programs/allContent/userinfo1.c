#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
uid_t uid;
gid_t gid;
uid = getuid();
gid = getgid();
char *login;
login = getlogin();
printf("uid = %d and gid = %d \n",uid,gid);
printf("login name = %s\n",login);	
}
