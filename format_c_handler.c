#include "main.h"

int format_c(char *buffer, int buffer_index, va_list list_of_args)
{
    char c = va_arg(list_of_args, int);
    buffer[buffer_index++] = c;
    return buffer_index;
}

