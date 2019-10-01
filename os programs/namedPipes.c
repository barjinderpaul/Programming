//Ques: To create named pipes;
#include<stdio.h>
#include<unistd.h>
int main(){
mkfifo("fifo",0777);
printf("Named pipe createad:)");
}

//Type " ls -l " in terminal to see the output of the file
// The file will be named as fifo and alongside its permissions in the extreme left, a " p " will be written indicating that it is a pipe;

