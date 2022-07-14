#include <unistd.h>

/**
 *  _putchar - Takes in char c and outputs to stdout
 *  @c: Character c to output to stdout
 *
 *  Return: Always 0 (Success)
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
