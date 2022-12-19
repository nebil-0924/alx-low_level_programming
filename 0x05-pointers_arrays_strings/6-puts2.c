#include "main.h"
/**
 * puts2 - print alternating chars of string
 *
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	char ch;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			ch = str[i];
			_putchar(ch);
		}
	}

	_putchar('\n');
}
