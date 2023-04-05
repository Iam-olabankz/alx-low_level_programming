#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to string to be printed
 *
 * Created by: Samson Olayemi Elijah
 * cc: 5th April, 2023.
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
