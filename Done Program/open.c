#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
   int fd=open("a.txt",O_WRONLY|O_APPEND);
    if(fd<0)
{
  return 1;
}
   
write(fd,"this",4);
return 0;
}
