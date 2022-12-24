#include "main.h"

/**
 *_abs - entry point
 *
 * @n: n is an integer
 *
 * Return: integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
		_putchar(n);
		return (0);
}
