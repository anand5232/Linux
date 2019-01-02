#include<stdio.h>
#include<fcntl.h>
int main()
{
   int fd;
    fd=creat("file1.txt",O_RDONLY|O_WRONLY);
    printf("%d",fd);
  return 0;
}
