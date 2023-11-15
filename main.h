#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1


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




#endif
