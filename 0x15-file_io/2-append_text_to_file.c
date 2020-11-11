#include "holberton.h"

/**
 *append_text_to_file - Appends text at the end of a file.
 *@filename: Name of the file.
 *@text_content: NULL terminated string to add at the end of the file.
 *
 *Return: On success 1.
 *        On failure -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd_write, fd_open, length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[length])
length++;
}
fd_open = open(filename, O_WRONLY | O_APPEND);
fd_write = write(fd_open, text_content, length);

if (fd_open == -1 || f_w == -1)
return (-1);

close(fd_open);

return (1);
}

