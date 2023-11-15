#include"main.h"

/**
 * another_hex - coverts to hex
 * @val: value to be converted
 * Return: x
 */

int another_hex(unsigned long int val)
{
        long int sunny;
        long int x = 0;
        unsigned long int mabuya = n;
        long int *ngwenya;

        while (n / 16 != 0)
        {
                n = n / 16;
                x++;
        }
        x++;
        ngwenya = malloc(sizeof(long int) * x);
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
                        ngwenya[sunny] = ngwenya[sunny] + 7;
                _putchar(ngwenya[sunny] + '0');
        }
        free(ngwenya);
        return (x);
}
