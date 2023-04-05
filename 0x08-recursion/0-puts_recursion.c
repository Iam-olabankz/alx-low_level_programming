#include <string.h>
#include "main.h"

/**
 * _puts_recursion - print a string rcursively
 * @s: pointer to the string to be printed
 *
 * Created by: Samson olayemi Elijah
 * cc: 5th April, 2023.
 */

void _puts_recursion(char *s)
{
	if (strlen(s) < 1)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
