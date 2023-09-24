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
<<<<<<< HEAD
=======

>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
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
<<<<<<< HEAD
=======

>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}

<<<<<<< HEAD
	return i;
=======
	return (i);
>>>>>>> a4dcb7282e97817d7d03f386996ba3732e19367f
}
