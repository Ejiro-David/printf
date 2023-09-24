#include "main.h"

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
