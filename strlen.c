#include "main.h"

/**
 * _strlen - gives us the length of the string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * _strlen_c - strleng function for constant character pointers to string
 * @string: pointer
 * Return: 1
 */

int _strlen_c(const char *string)
{
	int y;

	for (y = 0; string[y] != 0; y++)
		;
	return (1);
}
