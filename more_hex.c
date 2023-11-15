#include "main.h"

/**
 * more_hex - coverts to hex
 * @more: value to be converted
 * Return: x
 */

int more_hex(unsigned int more)
{
	int sunny;
	int x = 0;
	unsigned int mabuya = more;
	int *ngwenya;

	while (more / 16 != 0)
	{
		more = more / 16;
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
