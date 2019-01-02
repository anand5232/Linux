#include<stdio.h>
#include<stdlib.h>
int main()
{
   char a[1000];
   File *fp;
   fp=fopen("anand.txt","w+");
    if(fp==NULL)
   {
      printf("error to open the file ");
      exit(0);
    }
    printf(" Enter a sentence ");
    gets(a);
    fprintf(fp,"%s",a);
    fclose(fp);
    return 0;
}
