#include "main.h"

/**
 * format_d_i - Handle the 's' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 * Return: Buffer index
 */

int format_d_i(char *buffer, int buffer_index, va_list list_of_args) {
  int num = va_arg(list_of_args, int);
  char num_str[15];
  int len = _itoa(num_str, num);

  for (int i = 0; i < len; i++) {
    buffer[buffer_index++] = num_str[i];
  }
<<<<<<< HEAD
  return buffer_index;
=======
  return (buffer_index);
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
}
