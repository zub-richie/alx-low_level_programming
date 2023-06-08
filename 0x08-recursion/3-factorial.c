#include <stdio.h>
#include "main.h"

/**
 * factorial - Factorial function in c
 *
 * @n : The string that'll be counted
 *
 * Return: 1 if greater than 0 but -1 if lesser than 0
 */


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
