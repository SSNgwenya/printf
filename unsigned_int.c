#include "main.h"

/**
 * unsigned_int - prints integer
 * @args: argument
 * Return: i
 */

int unsigned_int(va_list args)
{
	unsigned int b = va_arg(args, unsigned int);
	int n;
	int l = b % 10;
	int d;
	int ty = 1;
	int i = 1;

	b = b / 10;
	n = b;

	if (l < 0)
	{
		_putchar('-');
		n = -n;
		b = -b;
		l = -l;
		i++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			ty = ty * 10;
			n = n / 10;
		}
		n = b;
		while (ty > 0)
		{
			d = n / ty;
			_putchar(d  + '0');
			n = n - (d * ty);
			ty = ty / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (i);
}
