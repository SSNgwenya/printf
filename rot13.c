#include "main.h"

/**
 * rot13 - convert to rot13
 * @rot: argument
 * Return: c
 */

int rot13(va_list rot)
{
	int a, b, c = 0;
	int x = 0;
	char d[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char o[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	char *str = va_arg(rot, char*);

	if (str == NULL)
		str =  "(null)";
	for (a = 0; str[a]; a++)
	{
		x = 0;
		for (b = 0; d[b] && !x; b++)
		{
			if (str[a] == d[b])
			{
				_putchar(o[b]);
				c++;
				x = 1;
			}
		}
		if (!x)
		{
			_putchar(str[a]);
			c++;
		}
	}
	return (c);
}
