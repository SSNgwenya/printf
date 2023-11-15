#include "main.h"

/**
 * oct - converts to octal
 * @octal: parameter
 * Return: x
 */


int oct(va_list octal)
{
	int sunny;
	int x = 0;
	unsigned int n = va_arg(octal, unsigned int);
	unsigned int mabuya = n;
	int *ngwenya;

	while (n / 8 != 0)
	{
		n = n / 8;
		x++;
	}
	x++;
	ngwenya = malloc(sizeof(int) * x);

	for (sunny = 0; sunny < x; sunny++)
	{
		ngwenya[sunny] = mabuya % 8;
		mabuya = mabuya / 8;
	}
	for (sunny = x - 1; sunny >= 0; sunny--)
		_putchar(ngwenya[sunny] + '0');
	free(ngwenya);
	return (x);
}
