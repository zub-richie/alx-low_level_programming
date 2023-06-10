#include <unistd.h>
#include <stdio.h>
#include "main.h"

/** 
 * _putchar - A character function 
 * @c: The character to print 
 * 
 * Return: Always return 1 on sucess, 0 on error
 */ 
int _putchar(char c) 
{ 
	return (write(1, &c, 1)); 
} 
