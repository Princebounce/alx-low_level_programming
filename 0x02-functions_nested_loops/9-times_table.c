#include "main.h"

/**
 * times_table - prints table frol 0 - 9
 *
 */

void times_table(void)
{
int num, mul, prd;

	for (num = 0; num <=9; num++)
	{
	_putchar ('0');

	for (mul = 0; mul <= 9; mul++)
	{
		_putchar (',');
		_putchar (' ');

	prd = num * mul;

	if (prd <= 9)
		_putchar (' ');
	else
	{
		_putchar ((prd / 10) + '0');
		_putchar ((prd % 10) + '0');
	}

	}
		_putchar ('\n');
	}
}
