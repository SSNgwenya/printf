#include "main.h"
/**
 * sunny - prints string
 * @king: value
 * Return: number of char printed
 */

int sunny(va_list king)
{
	int i;
	int length = 0;
	int num;
	char *phakathi;

	phakathi = va_arg(king, char *);
	if (phakathi == NULL)
		phakathi = "(null)";
	for (i = 0; phakathi[i] != '\0'; i++)
	{
		if (phakathi[i] < 32 || phakathi[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			num = phakathi[i];
			if (num < 16)
			{
				_putchar('\0');
				length++;
			}
			length = length + more_hex(num);
		}
		else
		{
			_putchar(phakathi[i]);
			length++;
		}
	}
	return (length);
}

