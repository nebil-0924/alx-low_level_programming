#include "main.h"

/**
 * print_alphabet - entry point
 *
 * print_alphabet - print the alpha
 *
 * return always(0) success
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)

		_putchar(la);
		_putchar('\n');
}
