#include "main.h"


/**
 * reverse - prints string in reverse
 * @rev: argument
 * Return: string
 */


int reverse(va_list rev)
{
	int k;
	int n = 0;
	char *str = va_arg(rev, char *);


	while (str[n] != '\0')
		n++;
	for (k = n - 1; k >= 0; k++)
		_putchar(str[k]);
	return (n);
}
