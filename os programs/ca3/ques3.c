#include<stdio.h>
#include<fcntl.h>

int main(){

struct flock region1;
struct flock region2;

FILE *fp1, *fp2;
char ch;
fp1 = fopen("passwd.txt","r");
fp2 = fopen("mypasswd.txt","w");
while(1){
ch = fgetc(fp1);
if(ch == EOF){
break;
}
else{
putc(ch,fp2);
}
}
region1.l_type = F_RDLCK;
region1.l_whence = SEEK_SET;
region1.l_start=0;
region1.l_len=20;
region2.l_type = F_RDLCK;
region2.l_whence = SEEK_SET;
region2.l_start=0;
region2.l_len=20;
fclose(fp1);
fclose(fp2);
int res = fcntl(fp1,F_SETLK,&region1);
if(res==-1){
printf("Unable to lock");
}
else{
printf("Locked");
}
 res = fcntl(fp2,F_SETLK,&region2);
if(res==-1){
printf("Unable to lock"); }
else{
printf("Region locked");
}
}

