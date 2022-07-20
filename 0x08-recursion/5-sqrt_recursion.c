#include "main.h"

/**
 * find_sqrt - Finds the square root of two numbers
 *
 * @x: The number
 * @y: The number to test for the square root of @a
 *
 * Return: square root
 */

int find_sqrt(int x, int y)
{
	if (y * y > x)
		return (-1);

	else if (y * y == x)
		return (y);

	else
		return (find_sqrt(x, y + 1));

		return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to return the square root of
 *
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
	return (0);
	return (find_sqrt(n, 1));
}
