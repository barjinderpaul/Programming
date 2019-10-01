#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<pwd.h>
int main(){
struct passwd *pw;
uid_t uid;
gid_t gid;
uid = getuid();
gid = getgid();
printf("User login %s\n",getlogin());
printf("uid = %d and gid = %d \n",uid,gid);
pw = getpwuid(uid);
printf("uid passwd entry = name-%s uid-%d gid-%d dir-%s shell-%s\n",pw->pw_name,pw->pw_uid,pw->pw_gid,pw->pw_dir,pw->pw_shell);

pw = getpwnam("root");
printf("getpwnam of root\n");
printf("Root passwd entry = name-%s uid-%d gid-%d dir-%s shell-%s\n",pw->pw_name,pw->pw_uid,pw->pw_gid,pw->pw_dir,pw->pw_shell);
}
