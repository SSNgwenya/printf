#include "main.h"


/**
 * _printf - acts like printf
 * @format: identifier to search for
 * Return: integer
 */


int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", print_char}, {"%s", print_string},
		{"%%", print_percentage}, {"%d", print_d},
		{"%i", print_int}, {"%r", reverse}, {"%R", rot13},
		{"%b", convert_to_bin}, {"%u", unsigned_int},
		{"%o", oct}, {"%x", hex}, {"%X", _hex},
		{"%S", more_hex}, {"%p", _pointer}};

	va_list mabuya;
	int x = 0;
	int length = 0;
	int e;

	va_start(mabuya, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:

	while (format[x] == '\0')
	{
		e = 13;
		while (e >= 0)
		{
			if (m[e].ds[0] == format[x] && m[e].ds[1] == format[x + 1])
			{
				length = length + m[e].k(mabuya);
				x = x + 2;
				goto Here;
			}
			e--;
		}
		_putchar(format[x]);
		x++;
		length++;
	}
	va_end(mabuya);
	return (length);
}
