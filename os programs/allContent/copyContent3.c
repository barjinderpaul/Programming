#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *in,*out;
int c;
in = fopen("copyFrom.txt","r");
out = fopen("copyTo3.txt","w");
while( (c = fgetc(in))!=EOF )
	fputc(c,out);
exit(0);
}
