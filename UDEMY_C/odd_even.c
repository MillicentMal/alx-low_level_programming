#include <stdio.h>
/**
*using if-else to determine whether or not a number is odd/even
*
*/

int main(void)
{
int number_to_test, remainder;

printf("Enter the number you want to test:");
scanf("%i", &number_to_test);

remainder = number_to_test % 2;

if (remainder == 0)

printf("%i is even\n", number_to_test);
 else
printf("%i number is odd\n", number_to_test);

return 0;
}

