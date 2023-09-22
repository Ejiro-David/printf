
#include "main.h"

/**
 * _itoa - converts int to string
 * @str: pointer to string converted
 * @num: number to be converted
 * Return: lenght ot number
 */

int _itoa(char *str, int num)
{
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
                while (temp != 0)
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
        return (i);
}
