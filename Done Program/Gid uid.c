#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
printf("This process is%d\n",getpid());
printf("The real User ID is%d\n",getuid());
printf("The effective user ID is%d\n",geteuid());
return 0;
}

