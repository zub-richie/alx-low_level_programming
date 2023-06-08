#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - This function count the number of string
 *
 * @s : The string that'll be counted
 *
 * Return: Print the total number of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}
