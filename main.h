#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


typedef struct format
{
	char *ds;
	int (*k)();
}match;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list k);
int print_string(va_list k);
int _strlen(char *s);
int _strlen_c(const char *string);
int print_percentage(void);
int print_int(va_list args);
int print_d(va_list args);
int convert_to_bin(va_list bin);
int unsigned_int(va_list args);
int oct(va_list octal);
int hex(va_list hexal);
int _hex(va_list hex);
int sunny(va_list king);
int more_hex(unsigned int more);
int _pointer(va_list point);
int another_hex(unsigned long int val);
int reverse(va_list rev);
int rot13(va_list rot);



#endif
