#include<stdio.h>
#include<time.h>
Int main()
{
time_t seconds;
seconds=time((time_t *)0);
printf(“hours since January 1,1970=%ld\n”,seconds/3600);
return 0;
}
