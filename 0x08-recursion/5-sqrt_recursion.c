#include "main.h"

/**
 * helper - Finds the square root of two numbers
 *
 * @x: number
 * @y: root of @x
 *
 * Return: square root
 */

int helper(int x, int y)
{
if (y * y > x)
	return (-1);

else if (y * y == x)
	return (y);

else
	return (helper(x, y + 1));

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
	return (helper(n, 1));
}
