#include<stdio.h>
#include<conio.h>
int main()
{
   int fd;
 char *c;
  fd=open("file.txt",O_RDONLY|O_CREAT);
  if(fd<0)
{
   printf(" there is some error ");
}
  int sz;
   sz=read(fd,c,10);
}
  
   
