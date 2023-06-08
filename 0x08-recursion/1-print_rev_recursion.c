#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - calling function
 *
 * @s : this is the character
 *
 * Return: Print 0 if sucessful.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
