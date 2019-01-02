/*Wap in C to 
Read and Display a direcotry Content
XYZ

  DIR *DP;
Dp=opendir("XYZ");
readdir(Dp);


   client{
     ino_t d_ino;
    char d_name;
}
*/



#include<stdio.h>
#include<sys/types.h>
#include<dirent.h>
int main()
{
DIR *Dp;


struct dirent *dir1;
   Dp=opendir("anand");
   dir1=readdir(Dp);

/* dirent{
  ino_t d_ino;
  char d_name;
}*/

return 0;
}
