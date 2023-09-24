#include "main.h"

/**
 * format_c - Handles format c
 * @buffer: stores the results
 * @buffer_index: position
 * @list_of_args: list of arguments
 * Return: buffer_index
 */

int format_c(char *buffer, int buffer_index, va_list list_of_args) {
  char c = va_arg(list_of_args, int);
<<<<<<< HEAD
  buffer[buffer_index++] = c;
  return buffer_index;
}
=======
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f

buffer[buffer_index++] = c;
return (buffer_index);
}
