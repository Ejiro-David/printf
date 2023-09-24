#include "main.h"

/**
 * format_b - Handle the 's' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 * Return: Buffer index
*/

int format_b(char *buffer, int buffer_index, va_list list_of_args)
{
	unsigned int num = va_arg(list_of_args, unsigned int);
	char binary_str[33];
	int len = _utoa(binary_str, num, 2);

	for (int i = 0; i < len; i++)
	{
		buffer[buffer_index++] = binary_str[i];
	}
	return (buffer_index);
}

