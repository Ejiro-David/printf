#include "main.h"

/**
 * format_s - Handle the 's' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 * Return: Buffer index
 */

int format_s(char *buffer, int buffer_index, va_list list_of_args)
{
char *str = va_arg(list_of_args, char *);
int str_len = 0;

while (str[str_len] != '\0')
{
buffer[buffer_index++] = str[str_len];
str_len++;
}
return (buffer_index);
}
