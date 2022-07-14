#include "main.h"
/**
* _printf - printf clone
* @format: format to be printed
* Return: return pointer to index
*/
int _printf(const char *format, ...)
{
	int count;
	va_list v;
	format_t options[] = {
		{"c", put_char},
		{"s", put_string},
		{"%", put_percent},
		{"d", put_decimal},
		{"i", put_decimal},
		{NULL, NULL}
	};

	if (!format)
	{
		return (-1);
	}

	va_start(v, format);
	count = formatter(format, options, v);
	va_end(v);


	return (count);
}
