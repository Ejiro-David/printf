#include "main.h"

int _printf(const char *format, ...)
{
	int chara_print = 0;
	va_list list_of_args;

	if (format == NULL);
		return -1;

	va_start(list_of_args, format);

	while (*format)  
	{
		if (*format != "%") // if format is not % sign
		{
			write(1, format, 1); Write the char to the standard output
			chara_print++;
		}
		else // If format is a % sign
		{
			format++; // Bypass "%" - Check the next character
			if (*format == '\0')
				break;

			if (*format == '%') // This solves %%
			{
				// Manage '%%' (double '%')
				write(1, format, 1);
				chara_print++;
			}
			else if (*format == 'c')
			{
				// Manage '%c' (character)
				char c = va_arg(list_of_args, int); //
				write(1, &c, 1);
				chara_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list_of_args, char*);
				int str_len = 0;

				// Calculate the length of a string
				while (str[str_len] != '\0')
					str_len++;
				
				// Write the strinf to the standard output
				write(1, str, str_len);
				chara_print += str_len;
			}
		}
		format++;
	}
	va_end(list_of_args);

	return chara_print;
}

