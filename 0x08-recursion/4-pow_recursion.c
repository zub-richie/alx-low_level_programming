#include <stdio.h>
#include <main.h>

/**
 *_pow_recursion - This a power function
 *
 * @x : The base
 *
 * @y : The power function
 *
 * Return: 1 if greater than 0 but -1 if lesser than 0
 */


int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
