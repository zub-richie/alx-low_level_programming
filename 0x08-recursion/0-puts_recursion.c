#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - calling function
 * @s : String
 * Return: Print the string.
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	if (*s != '\0')
	{
		_putchar (*s);
		*(s++);
		_puts_recursion(s);
	}

}
