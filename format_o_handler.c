#include "main.h"

/**
 * format_o - format specifier for o
 * @buffer: buffer storage
 * @buffer_index: buffer_index
 * @list_of_args: list of arguments
 * Return: buffer_index
 */

int format_o(char *buffer, int buffer_index, va_list list_of_args) {
  unsigned int num = va_arg(list_of_args, unsigned int);
  char num_str[15];
  int len = _utoa(num_str, num, 8);

  for (int i = 0; i < len; i++) {
    buffer[buffer_index++] = num_str[i];
  }
<<<<<<< HEAD
  return buffer_index;
=======
  return (buffer_index);
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
}
