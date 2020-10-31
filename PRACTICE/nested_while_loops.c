#include <stdio.h>
#include <stdlib.h>
int main ()
{
int x = 0;
char a;
 while (x <= 9)
{
char a ='A';
while (a < 'J')
{
printf("%d%c\t",x,a);
a++;
}
putchar('\n');
x++;
}
return(0);
}

