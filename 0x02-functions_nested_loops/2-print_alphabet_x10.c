#include "main.h"

/**
 * print_alphabet_x10 - Alphabets in lowercase x10
 *
 * Retunr : 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	char x;
	int a = 0;

	while (a++ < 10)

	{
		
		for (x = 'a'; x <= 'z'; x++)

		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
