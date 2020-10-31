#include <stdio.h>
#include <stdlib.h>
/**
*main- prints columns of alphabet
*Return: 0 always (success)
*/
int main (void)
{
int i = 0;
char a = 'A';

for (i = 0; i <= 9; i++)
{
for (a = 'A'; a < 'J'; a++)
{
printf("%d%c   ", i,a);
}
putchar('\n');
}

int j,k = 0;
for (j = 0; j <= 9; j++) 
{
for (k = 0; k <= 9; k++)
{

}
putchar('\n');
}
return(0); 
}

