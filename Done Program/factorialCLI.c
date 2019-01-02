#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int fact, temp;
	fact = atoi(argv[1]);
	temp=fact;
	int res = 1;
	if(fact==1)
	{
		return 1;
	}
	while(temp--)
	{
		if(temp!=0)
			res*=temp;
	}
	printf("%d\n", res );
	return 0;
}