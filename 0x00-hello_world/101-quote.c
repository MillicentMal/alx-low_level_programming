#include<unistd.h>

/**
 *main- Entry point
 *
 *Return: Always 1(failure)
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDOUT_FILENO, s, sizeof(s));
return (1);
}
