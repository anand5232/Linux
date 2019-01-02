#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int fd,n;
	srand(time(0));
	fd = open("temp.txt",O_CREAT|O_RDWR,0777);
	char *buff[1001];
	for(int i=0;i<1000;i++){
		char buff2[10];
		int x = rand();
		sprintf(buff2, "%d", x);
		write(fd,buff2, 1);
	}
	close(fd);
	return 0;
}