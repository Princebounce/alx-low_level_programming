#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercse 10times
 *
 * Return : 0 (Success)
 */

void print_alphabet_x10(void)
{
	char x;
	int a = 0;

	while (a < 10)
	{

	 for (x = 'a'; x <= 'z'; x++)

	{
		_putchar(x);

	}
	_putchar('\n');

	a++;
	}

}
