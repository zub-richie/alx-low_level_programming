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
		putchar ('\n');
		return;
	}
	if (*s != '\0')
	{
		putchar (*s);
		*(s++);
		_puts_recursion(s);
	}

}
