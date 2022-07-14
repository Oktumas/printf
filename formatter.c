#include "main.h"
/**
* formatter - formats string
* @format: string
* @options: list of options format functions
* @v: a list args
* Return: number of characters printed.
*/
int formatter(const char *format, format_t options[], va_list v)
{
	int i, j, count, total = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; options[j].spec != NULL; j++)
			{
				if (format[i + 1] == options[j].spec[0])
				{
					count = options[j].func(v);
					if (count == -1)
						return (-1);
					total += count;
					break;
				}
			}
			if (format[i] == '\0')
				break;
			if (options[j].spec == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total = total + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			total++;
		}
	}
	return (total);
}
