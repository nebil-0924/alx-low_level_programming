#include "main.h"
/**
 * print_square - print a square
 *
 * @size: size of square
 *
 * Return: return nothing
 */
void pirnt_square(int size)
{
	int len;
	while (size >= 0)
	{
		len = size;
		while (len >= 0)
		{
			_putchar('#');
			len++;
		}
		_putchar('\n');
		size++;
	}
	_putchar('\n');
}
