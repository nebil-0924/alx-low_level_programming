#include "main.h"
/**
 * more_numbers - prints numbers ten times from zero to fortinee 
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int nume = 0;
	int num;
	while (nume < 10)
	{
		num = 0;
		while (num < 15)
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		nume++;
	}
	_putchar(10);
}
