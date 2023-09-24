#include "main.h"

int format_u(char *buffer, int buffer_index, va_list list_of_args)
{
	unsigned int num = va_arg(list_of_args, unsigned int);
	char num_str[15];
	int len = _utoa(num_str, num, 10);

	for (int i = 0; i < len; i++)
	{
		buffer[buffer_index++] = num_str[i];
	}
	return buffer_index;
}

