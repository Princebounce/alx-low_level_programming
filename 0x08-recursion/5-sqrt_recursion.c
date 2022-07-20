#include "main.h"

int find_sqrt(int x, int y);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of n
 * x: The number to find the square root of
 * y: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int x, int y)
{
if ((y * y) == x)
	return (y);

if ((y * y) != x)
	return (-1);

	return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
int y = 0;

if (n < 0)
	return (-1);

if (n == 1)
	return (1);

	return (find_sqrt(n, y));
}
