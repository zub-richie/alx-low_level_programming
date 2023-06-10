#include <stdio.h>
#include "main.h"

/**
 *  main - Outputs the name of the program
 *
 *   @argc - The number of command line arguments
 *    @argv - An array containing the program command line arguments
 *
 *     Return: Always return 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
