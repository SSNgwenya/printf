#include "main.h"


/**
 * print_string - prints a string
 * @k: argument
 * Return: length of string
 */


int print_string(va_list k)
{
	int x;
	char *string;
	int length;

	str = va_arg(k, char *);
	if (str = NULL)
	{
		string = "(null)";
		length = _strlen(string);
		for (x = 0; x < length; x++)
			_putchar(string[x]);
		return (length);
	}
	else
	{
		length = _strlen(string);
		for (x = 0; x < length; x++)
			_putchar(string[x]);
		return (length)
	}
}
