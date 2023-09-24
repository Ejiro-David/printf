#include "main.h"

int format_d_i(char *buffer, int buffer_index, va_list list_of_args)
{
	int num = va_arg(list_of_args, int);
	char num_str[15];
	int len = _itoa(num_str, num);

	for (int i = 0; i < len; i++)
	{
		buffer[buffer_index++] = num_str[i];
	}
	return buffer_index;
}

