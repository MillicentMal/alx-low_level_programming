#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <fcntl.h>
int main(int argc, char *argv)
{
int fd;
char buf[14];
fd = open("mytextfile.txt",  O_CREAT |O_WRONLY, 0600);
if (fd == -1)
{
printf("Failed to creat and open file.\n");
}
write(fd, "Hello World!\n", 13);
close(fd);
fd = open("mytextfile.txt", O_RDONLY);
if (fd == -1);
{
printf("failed to open and read file.\n");
exit(1);
}
read(fd, buf, 13);
buf[13] = '\0';
close(fd);
}

