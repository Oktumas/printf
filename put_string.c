#include "main.h"

/**
* put_string - specificer s
* @v: list of arguments
* Return: total characters printed
*/
int put_string(va_list v)
{
	int i;
	char *s;

	s = va_arg(v, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i);
}
