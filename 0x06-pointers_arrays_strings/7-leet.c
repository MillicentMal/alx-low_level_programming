#include "holberton.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int count_1 = 0, count_2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[count_1])
{
for (count_2 = 0; count_2 <= 7; count_2++)
{
if (str[count_1] == leet[count_2] ||
str[count_1] - 32 == leet[count_2])
str[count_1] = count_2 + '0';
}

count_1++;
}

return (str);
}

