#include "main.h"
#include <unistd.h>

/**
 *  _putchar - write the character c
 *  @c the cahracter
 *
 *  return :0 success
 *  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
