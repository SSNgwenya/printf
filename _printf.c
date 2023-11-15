#include "main.h"

void print_buffer(char buffer[], int *b)

/**
 * _printf - function for printing
 * @format: format.
 * Return: characters that are printed.
 */


int _printf(const char *format, ...)
{
	int x;
	int prt = 0;
	int p_characters = 0;
	int flags;
	int width;
	int precision;
	int size;
	int print_buffer;
	int b = 0;
	va_list l;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(l, format);

	for (x = 0; format && format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			buffer[b++] = format[x];
			if (b == BUFF_SIZE)
				print_buffer(buffer, &b);
			/* write(1, &format[i], 1);*/
			p_characters++;
		}
		else
		{
			print_buffer(buffer, &b);
			flags = get_flags(format, &x);
			width = get_width(format, &x, l);
			precision = get_precision(format, &x, l);
			size = get_size(format, &x);
			++x;
			prt = handle_print(format, &x, l, buffer,
				flags, width, precision, size);
			if (prt == -1)
				return (-1);
			p_characters += prt;
		}
	}

	print_buffer(buffer, &b);

	va_end(l);

	return (p_characters);
}

/**
 * print_buffer - prints whats in the buffer if it exist
 * @buffer: array of characters
 * @b: index to add next character, represents the length.
 */
void print_buffer(char buffer[], int *b)
{
	if (*b > 0)
		write(1, &buffer[0], *b);
	|*b = 0;
}
