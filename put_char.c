#include "main.h"

/**
* put_char - specificer s
* @v: list of arguments
* Return: total characters
*/
int put_char(va_list v)
{
	_putchar(va_arg(v, int));
	return (1);
}
