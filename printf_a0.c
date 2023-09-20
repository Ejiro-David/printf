#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _itoa - converts int to string
 * @str: pointer to string converted
 * @num: number to be converted
 * Return: lenght ot number
 */

int _itoa(char *str, int num);
int _itoa(char *str, int num){
	int i = 0, start, end, temp;

    if (num == 0)
    {
	    str[i++] = '0';
    }
    else
    {
	    if (num < 0)
	    {
		    str[i++] = '-';
		    num = -num;
	    }
	    temp = num;
	    while(temp != 0)
	    {
		    int digit = temp % 10;
		    str[i++] = digit + '0';
		    temp /= 10;
	   }
	    start = (str[0] == '-') ? 1 : 0;
	    end = i - 1;

	    while (start < end)
	    {
		    char temp = str[start];
		    str[start] = str[end];
		    str[end] = temp;
		    start++;
		    end--;
	    }
    }
    str[i] = '\0';
    return i;
}

/**
 * _printf - prints formated string to standard output
 * @format: format to follow.
 * Return: lenght of output string
 */

int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int chara_print = 0;
	va_list list_of_args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list_of_args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chara_print++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				chara_print++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_of_args, int);

				write(1, &c, 1);
				chara_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				chara_print += str_len;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(list_of_args, int);
				char num_str[15];
				int len = _itoa(num_str, num);

				write(1, num_str, len);
				chara_print += len;
			}
		}
		format++;
	}
	va_end(list_of_args);

	return (chara_print);
}

