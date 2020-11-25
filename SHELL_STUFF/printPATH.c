#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

extern char **environ;
int count = 0;
while (environ[count] != NULL)
{
printf("[%s] :: ", environ[count]);
    count++;
}
printf("test\n");

const char* s = getenv("PATH");
printf("PATH :%s\n",(s!=NULL)? s : "getenv returned NULL");
printf("end test\n");
}



