#include "main.h"
/**
 *print_most_numbers - function that print all numbers from zero to nine except two and four
 *
 *Return: returns nothing
*/
void print_most_numbers(void)
{
	int num = 48;
	for (num = 48; num < 58; num++)
	{
		if ((num != 50) && (num != 52))
			_putchar(num);
	}
	_putchar(10);
}
