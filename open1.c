#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
   int fd;
   fd=open("File1.txt",O_RDONLY|O_CREAT);
  if(fd==-1)
{
   printf("File is not create there is some error");
}
}

