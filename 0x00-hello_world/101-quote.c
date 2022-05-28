#include<unistd.h>

int main (void) {


char s[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write (STDOUT_FILENO, s, sizeof(s));
write(STDOUT_FILENO, '\n', 1);
return (1);
}
