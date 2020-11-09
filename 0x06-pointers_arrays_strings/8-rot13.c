#include "holberton.h"

/**
* rot13 - Encodes a string using rot13.
* @str: The string to be encoded.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
int count_1 = 0, count_2;
char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		       'G', 'H', 'I', 'J', 'K', 'L',
		       'M', 'N', 'O', 'P', 'Q', 'R',
		       'S', 'T', 'U', 'V', 'W', 'X',
		       'Y', 'Z', 'a', 'b', 'c', 'd',
		       'e', 'f', 'g', 'h', 'i', 'j',
		       'k', 'l', 'm', 'n', 'o', 'p',
		       'q', 'r', 's', 't', 'u', 'v',
		       'w', 'x', 'y', 'z'};
char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
		       'T', 'U', 'V', 'W', 'X', 'Y',
		       'Z', 'A', 'B', 'C', 'D', 'E',
		       'F', 'G', 'H', 'I', 'J', 'K',
		       'L', 'M', 'n', 'o', 'p', 'q',
		       'r', 's', 't', 'u', 'v', 'w',
		       'x', 'y', 'z', 'a', 'b', 'c',
		       'd', 'e', 'f', 'g', 'h', 'i',
		       'j', 'k', 'l', 'm'};

while (str[count_1])
{
for (count_2 = 0; count_2 < 52; count_2++)
{
if (str[count_1] == alphabet[count_2])
{
str[count_1] = rot13key[count_2];
break;
}
}

count_1++;
}

return (str);
}
