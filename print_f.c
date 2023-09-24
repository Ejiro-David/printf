#include "main.h"

int _printf(const char *format, ...)
{
	char buffer[1024];
	int chara_print = 0;
	int buffer_index;
	va_list list_of_args;
	
	if (format == NULL)
	{
		return (-1);
	}

	va_start(list_of_args, format);

	buffer_index = 0;
    while (*format)
    {

        if (buffer_index >= 1023)
        {
            write(1, buffer, buffer_index);
            chara_print += buffer_index;
            buffer_index = 0;
        }

        if (*format != '%')
        {
            buffer[buffer_index++] = *format;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;

	    while (*format == '+' || *format == ' ' || *format == '#')
                        {
				 switch (*format)
    {
        case '+':
            handle_plus_flag(buffer, &buffer_index, list_of_args);
            break;

        case ' ':
            handle_space_flag(buffer, &buffer_index, list_of_args);
            break;

        case '#':
            handle_hash_flag(buffer, &buffer_index, list_of_args);
            break;
    }

    format++;
                        }

            if (*format == '%')
            {
                buffer[buffer_index++] = *format;
                chara_print++;
            }
	    else
{
    switch (*format)
    {
        case 'c':
            chara_print += format_c(buffer, buffer_index, list_of_args);
            break;

        case 's':
            chara_print += format_s(buffer, buffer_index, list_of_args);
            break;

        case 'd':
        case 'i':
            chara_print += format_d_i(buffer, buffer_index, list_of_args);
            break;

        case 'b':
            chara_print += format_b(buffer, buffer_index, list_of_args);
            break;

        case 'u':
            chara_print += format_u(buffer, buffer_index, list_of_args);
            break;

        case 'o':
            chara_print += format_o(buffer, buffer_index, list_of_args);
            break;

        case 'x':
            chara_print += format_x(buffer, buffer_index, list_of_args);
            break;

        case 'X':
            chara_print += format_X(buffer, buffer_index, list_of_args);
            break;

        case 'p':
            chara_print += format_p(buffer, buffer_index, list_of_args);
            break;

        default:
            break;
    }
}



        }
        format++;
    }


    return chara_print;
}

