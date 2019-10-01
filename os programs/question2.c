#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<stdlib.h>
int main(){
char buffer;
int fd= open("input.txt",O_RDWR|O_CREAT,00700);
while(1){
buffer=getchar();
if(buffer=='q' || buffer == 'Q'){
printf("you quit");
exit(1);
}
else{
write(fd,buffer,strlen(buffer));
}
}



