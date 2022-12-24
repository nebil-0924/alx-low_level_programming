#include "main.h"
/**
 * _islower - entry point
 *
 * @c: c is lower character
 *
 *  Return: 1 if lower
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
