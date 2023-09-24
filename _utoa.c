#include "main.h"

/**
 * _utoa - converts int in specified base to string
 * @str: pointer to string converted
 * @num: number to be converted
 * @base: base of num.
 * Return: lenght ot number
 */

int _utoa(char *str, unsigned int num, int base)
{
	int i = 0, start, end;

	if (num == 0)
	{
		str[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			int digit = num % base;

			if (digit < 10)
			{
				str[i++] = digit + '0';
			}
			else
			{
				str[i++] = digit - 10 + 'A';            }
			num /= base;
		}
	}

	str[i] = '\0';

	start = 0;
	end = i - 1;
	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}

	return (i);
}
