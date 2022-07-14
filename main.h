#ifndef PRINTFILE_H
#define PRINTFILE_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct format - struct
 * @options: Pointer to char
 * @func: Pointer to function to call
 */
typedef struct format
{
	char *spec;
	int (*func)();
} format_t;
int _printf(const char *format, ...);
int formatter(const char *format, format_t options[], va_list v);
int put_string(va_list v);
int put_char(va_list v);
int _putchar(char c);
int put_decimal(va_list v);
int put_percent(__attribute__((unused))va_list v);
#endif
