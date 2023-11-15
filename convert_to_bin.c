#include "main.h"

/**
 * convert_to_bin - converts to binary
 * @bin: argument
 * Return: integer
 */


int convert_to_bin(va_list bin)
{
	int f = 0;
	int z = 0;
	int sunny;
	int sthandwa = 1;
	int mntimande;
	unsigned int mabuya = va_arg(bin, unsigned int);
	unsigned int bambolunye;

	for (sunny = 0; sunny < 32; sunny++)
	{
		bambolunye = ((sthandwa << (32 - sunny)) & mabuya);
		if (bambolunye >> (31 - sunny))
			f = 1;
		if (f)
		{
			mntimande = bambolunye >> (31 - sunny);
			_putchar(mntimande + 48);
			z++;
		}
	}
	if (z == 0)
	{
		z++;
		_putchar('0')	;
	}
	return (z);
}
