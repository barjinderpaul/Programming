#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
char buf[100];
int fd=open("dupfile.txt",O_CREAT|O_RDWR,0777);
int dup(int fd);
write(dup,buf,"hello");
}
