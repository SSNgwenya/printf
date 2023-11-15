#include "main.h"

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_d(va_list args)
{
	int a = va_arg(args, int);
	int k;
	int l = a % 10;
	int d;
	int ty = 1;
	int x = 1;

	a = a / 10;
	k = a;

	if (l < 0)
	{
		_putchar('-');
		k = -k;
		a = -a;
		l = -l;
		x++;
	}
	if (k > 0)
	{
		while (k / 10 != 0)
		{
			ty = ty * 10;
			k = k / 10;
		}
		k = a;
		while (ty > 0)
		{
			d = k / ty;
			_putchar(d  + '0');
			k = k - (d * ty);
			ty = ty / 10;
			x++;
		}
	}
	_putchar(l + '0');
	return (x);
}
#include "main.h"

/**
 * print_int - prints integer
 * @args: argument to be printed
 * Return: number of characters to be printed
 */

int print_int(va_list args)
{
	int b = va_arg(args, int);
	int n;
	int l = n % 10;
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
