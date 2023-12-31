#include "main.h"

/**
 * format_p - Handle the 's' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 * Return: Buffer index
 */

int format_p(char *buffer, int buffer_index, va_list list_of_args)
{
int len, i;
void *ptr = va_arg(list_of_args, void *);
unsigned long address = (unsigned long)ptr;
char hex_address[18];

sprintf(hex_address, "0x%lx", address);
len = strlen(hex_address);

for (i = 0; i < len; i++)
{
buffer[buffer_index++] = hex_address[i];
}
return (buffer_index);
}
