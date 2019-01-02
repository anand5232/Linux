#include <unistd.h>
#include <fcntl.h>
 
int main()
{
    int filedesc = open("testfile.txt", O_WRONLY | O_APPEND);
    if(filedesc < 0)
        return 1;
 
    if(write(filedesc,"This will be output to testfile.txt\n", 36) != 36)
    {
        write(2,"There was an error writing to testfile.txt\n");    // strictly not an error, it is allowable for fewer characters than requested to be written.
        return 1;
    }
 
    return 0;
}

