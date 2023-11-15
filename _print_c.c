#include "main.h"

/**
 * print_char - prints a character
 * @: argument
 * Return: 1
 */


int print_char(va_list k)
{
	char string;

	string = va_arg(k, int);
	_putchar(string);
	return (1);
}
