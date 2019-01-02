#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>


   int main()
{
     File *fp;
     char c;
     char a[6]="anandj";
     int len=strlen(a);
    fp=fopen("File1.txt","w+");

   for(int i=0;i<=len;i++)
{
     fputc(a[i],fp);
 }
  fclose(fp);
  fp=open("File1.txt","r+");


  for(int i=0;i<len/2;i++)
{
    c=fgetc(fp);
    printf("%c",c);
}

fclose(fp);
return 0;
}
  


   
    
