#include "main.h"

/**
 * format_X - Handle the 's' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 * Return: Buffer index
*/

int format_X(char *buffer, int buffer_index, va_list list_of_args)
{
	unsigned int num = va_arg(list_of_args, unsigned int);
	char num_str[15];
	int len = _utoa(num_str, num, 16);

	for (int i = 0; i < len; i++)
	{
		if (num_str[i] >= 'a' && num_str[i] <= 'f')
		{
			num_str[i] = num_str[i] - 32;
		}
		buffer[buffer_index++] = num_str[i];
	}
	return (buffer_index);
}

