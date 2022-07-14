#include "main.h"
/**
* put_decimal- function that returns an int for decimal valist
* @v: variable length argument list
* Return: int size
*/
int put_decimal(va_list v)
{
	unsigned int number;
	int i, div, size;

	size = 0;
	div = 1;
	i = va_arg(v, int);

	if (i < 0)
	{
		number = i * -1;
		size += _putchar('-');
	}
	else
	{
		number = i;
	}

	for (; number / div > 9;)
	{
		div *= 10;
	}

	for (; div != 0;)
	{
		size += _putchar('0' + (number / div));
		number %= div;
		div /= 10;
	}

	return (size);
}
