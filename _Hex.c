#include "main.h"

/**
 * _hex - coverts to hex
 * @hex: value to be converted
 * Return: x
 */

int _hex(va_list hex)
{
	int sunny;
	int x = 0;
	unsigned int n = va_arg(hex, unsigned int);
	unsigned int mabuya = n;
	int *ngwenya;

	while (n / 16 != 0)
	{
		n = n / 16;
		x++;
	}
	x++;
	ngwenya = malloc(sizeof(int) * x);

	for (sunny = 0; sunny < x; sunny++)
	{
		ngwenya[sunny] = mabuya % 16;
		mabuya = mabuya / 16;
	}
	for (sunny = x - 1; sunny >= 0; sunny--)
	{
		if (ngwenya[sunny] > 9)
			ngwenya[sunny] = ngwenya[sunny] + 7;
		_putchar(ngwenya[sunny] + '0');
	}
	free(ngwenya);
	return (x);
}
