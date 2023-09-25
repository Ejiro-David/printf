#include "main.h"

/**
 * format_x - Handle the 's' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 * Return: Buffer index
 */

int format_x(char *buffer, int buffer_index, va_list list_of_args)
{
unsigned int num = va_arg(list_of_args, unsigned int);
char num_str[15];
int i;
int len = _utoa(num_str, num, 16);

for (i = 0; i < len; i++)
{
buffer[buffer_index++] = tolower(num_str[i]);
}
return (buffer_index);
}
