#include "main.h"

/**
 * handle_plus_flag - Handle the '+' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 */
void handle_plus_flag(char *buffer, int *buffer_index, va_list list_of_args) {
  char sign = va_arg(list_of_args, int);

<<<<<<< HEAD
  if (sign >= 0) {
=======
  if (sign >= 0) {
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
    buffer[(*buffer_index)++] = '+';
  }
}

/**
 * handle_plus_flag - Handle the '-' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 */
void handle_minus_flag(char *buffer, int *buffer_index, va_list list_of_args) {
  char sign = va_arg(list_of_args, int);

<<<<<<< HEAD
  if (sign >= 0) {
    buffer[(*buffer_index)++] = '-';
  }
=======
  if (sign >= 0)
    buffer[(*buffer_index)++] = '-';
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
}

/**
 * handle_space_flag - Handle the ' ' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 */
void handle_space_flag(char *buffer, int *buffer_index, va_list list_of_args) {
  char sign = va_arg(list_of_args, int);

<<<<<<< HEAD
  if (sign >= 0) {
=======
  if (sign >= 0) {
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
    buffer[(*buffer_index)++] = ' ';
  }
}

/**
 * handle_hash_flag - Handle the '#' flag
 * @buffer: Buffer to store the formatted string
 * @buffer_index: Current index in the buffer
 * @list_of_args: Arguments list
 */
void handle_hash_flag(char *buffer, int *buffer_index, va_list list_of_args) {
<<<<<<< HEAD
  // Assuming this flag is used with an integer argument for demonstration
  // purposes.
=======
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
  int value = va_arg(list_of_args, int);
  char temp_buffer[20];

  sprintf(temp_buffer, "0x%X", value);

  int temp_index = 0;
<<<<<<< HEAD
  while (temp_buffer[temp_index] != '\0') {
=======

  while (temp_buffer[temp_index] != '\0') {
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
    buffer[(*buffer_index)++] = temp_buffer[temp_index++];
  }
}
