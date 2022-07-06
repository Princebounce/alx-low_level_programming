#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @x: integer
 *
 * Return: last digit
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar (x + '0');
	return (x);
}
