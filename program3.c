#include<stdio.h>
#include<conio.h>

int input(int *,int *);
int sum(int ,int );
int display(int);

int main()
{

   int a,b,c;
   int *s,*p;
   s=&a;
   p=&b;
   input(s,p);
   c=sum(a,b);
   display(c);
   return 0;

}


int input(int *s,int *p)
{
   int a,b;
   cout<<"Enter Any two Number ";
   cin>>a>>b;
     *s=a;
     *p=b;
}
   
  
   
int sum(int a,int b)
{
   int c;
  c=a+b;
  return c;

}

int display(int a)
{
   cout<<"Result =";
   cout<<a;

}
  

  
   
   








