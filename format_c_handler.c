#include "main.h"

/**
* format_c - Handles format c
* @buffer: stores the results
* @buffer_index: position
* @list_of_args: list of arguments
* Return: buffer_index
*/

int format_c(char *buffer, int buffer_index, va_list list_of_args)
{
	char c = va_arg(list_of_args, int);

	buffer[buffer_index++] = c;
	return (buffer_index);
}
