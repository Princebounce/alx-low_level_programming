#include "main.h"

/**
 * findroot - Finds the square root of two numbers
 *
 * @x: number
 * @y: root of @x
 *
 * Return: square root
 */

int findroot(int x, int y)
{
if (y * y > x)
	return (-1);

else if (y * y == x)
	return (y);

else
	return (findroot(x, y + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to return the square root of
 *
 * Return: square root of @n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
	return (0);
	return (findroot(n, 1));
}
