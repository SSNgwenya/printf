#include "main.h"

/**
 * hex - convert to hexal
 * @hexal: value to be converted
 * Return: x
 */


int hex(va_list hexal)
{
        int sunny;
        int x = 0;
        unsigned int n = va_arg(hexal, unsigned int);
        unsigned int mabuya = n;
	int *ngwenya;

        while (n / 16 != 0)
        {
                n = n / 16;
                x++;
        }
        x++;
        ngwenya = malloc(sizeof(int) * x);
        if (ngwenya == NULL)
                return (NULL);
        for (sunny = 0; sunny < x; sunny++)
        {
                ngwenya[sunny] = mabuya % 16;
                mabuya = mabuya / 16;
        }
        for (sunny = x - 1; sunny >= 0; sunny--)
	{
		if (ngwenya[sunny] > 9)
			ngwenya[sunny] = ngwenya[sunny] + 39;
		_putchar(ngwenya[sunny] + '0');
	}
	free(ngwenya);
	return (x);
}
