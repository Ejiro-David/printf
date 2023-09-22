#include "main.h"

/**
 * @format: format to be followed for character string
 * Return: lenght of output string
 */

int _printf(const char *format, ...);
int _printf(const char *format, ...);
{
	char buffer[1024];
	int chara_print = 0;
	int buffer_index, i;
	va_list list_of_args;
	char flags[3];

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


			flags[3] = '\0';

			while (*format == '+' || *format == ' ' || *format == '#')
			{
				if (*format == '+')
					flags[0] = '+';
				else if (*format == ' ')
					flags[1] = ' ';
				else if (*format == '#')
					flags[2] = '#';

				format++;
			}


			if (*format == '%')
			{
				format++;
				if (*format == '%')
				{
					buffer[buffer_index++] = '%';
				}
				else
				{
					buffer[buffer_index++] = '%';
					buffer[buffer_index++] = *format;
				}
			}
			else if (*format == 'c')
			{
				char c = va_arg(list_of_args, int);

				buffer[buffer_index++] = c;
				chara_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
				{
					buffer[buffer_index++] = str[str_len];
					str_len++;
				}
				chara_print += str_len;
			}
			else if (*format == 'd')
			{
				int num = va_arg(list_of_args, int);
				char num_str[15];
				int len = _itoa(num_str, num);

				for (i = 0; i < len; i++)
				{
					buffer[buffer_index++] = num_str[i];
					chara_print += len;
				}
			}
			else if (*format == 'i')
			{
				int num = va_arg(list_of_args, int);
				char num_str[15];
				int len = _itoa(num_str, num);

				for (i = 0; i < len; i++)
				{
					buffer[buffer_index++] = num_str[i];
					chara_print += len;
				}
			}
			else if (*format == 'b')
			{
				unsigned int num = va_arg(list_of_args, unsigned int);
				char binary_str[33];
				int len = _utoa(binary_str, num, 2);

				for (i = 0; i < len; i++)
					buffer[buffer_index++] = binary_str[i];

				chara_print += len;
			}
			else if (*format == 'u')
			{
				unsigned int num = va_arg(list_of_args, unsigned int);
				char num_str[15];
				int len = _utoa(num_str, num, 10);
				int i;

				for (i = 0; i < len; i++)
					buffer[buffer_index++] = num_str[i];

				chara_print += len;
			}
			else if (*format == 'o')
			{
				unsigned int num = va_arg(list_of_args, unsigned int);
				char num_str[15];
				int len = _utoa(num_str, num, 8);

				for (i = 0; i < len; i++)
					buffer[buffer_index++] = num_str[i];

				chara_print += len;
			}
			else if (*format == 'x')
			{
				unsigned int num = va_arg(list_of_args, unsigned int);
				char num_str[15];
				int len = _utoa(num_str, num, 16);

				for (i = 0; i < len; i++)
					buffer[buffer_index++] = num_str[i];

				chara_print += len;
			}
			else if (*format == 'X')
			{
				unsigned int num = va_arg(list_of_args, unsigned int);
				char num_str[15];
				int len = _utoa(num_str, num, 16);

				for (i = 0; i < len; i++)
				{
					if (num_str[i] >= 'a' && num_str[i] <= 'f')
					{
						num_str[i] = num_str[i] - 32;
					}

					buffer[buffer_index++] = num_str[i];
				}
				chara_print += len;
			}
			else if (*format == 'p')
			{
				int len;
				void *ptr = va_arg(list_of_args, void *);
				unsigned long address = (unsigned long)ptr;
				char hex_address[18];

				sprintf(hex_address, "0x%lx", address);
				len = strlen(hex_address);

				for (i = 0; i < len; i++)
				{
					buffer[buffer_index++] = hex_address[i];
					if (buffer_index >= 1023)
					{
						write(1, buffer, buffer_index);
						chara_print += buffer_index;
						buffer_index = 0;
					}
				}
			}

			for (i = 0; i < 3; i++)
			{
				if (flags[i] != '\0')
					buffer[buffer_index++] = flags[i];
			}

		}
		format++;
	}
	if (buffer_index > 0)
	{
		write(1, buffer, buffer_index);
		chara_print += buffer_index;
		buffer_index = 0;
	}
	va_end(list_of_args);

	return (chara_print);
}
