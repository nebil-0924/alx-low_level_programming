#include "main.h"
/**
 * more_numbers - print numbers to14 
 *
 * Return: returns nothing
 */
void more_numbers(void)
{
	int number1, number2;
	for (number1 = 1; number1 <= 10; number++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			_putchar(number2);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
