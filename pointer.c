#include "main.h"

/**
 * _pointer - printes pointer
 * @point: value
 * Return: int
 */

int _pointer(va_list point)
{
	void *p;
	char *s = "(nil)";
	int i;
	long int z;
	int a;

	p = va_arg(point, void *):
		if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	z = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	a = another_hex(z);

	return (a + 2);
}
