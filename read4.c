#include<stdio.h>
#include<fcntl.h>
int main()
{
   int fd1,fd2;
   fd1=open("file1.txt",O_RDONLY|O_CREAT);
   fd2=open("file2.txt",O_RDONLY|O_CREAT);
   read(fd1,&c,1);
   read(fd2,&c,1);
  printf("%c",c);
}
