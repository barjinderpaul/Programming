#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t c=fork();
if(c>0)
{
sleep(10);
printf("parent");
}
else
{
exit(0);
}
}
