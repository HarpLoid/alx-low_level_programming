#include "main.h"
#include <stdio.h>

/**
 * main - prints it's name
 * @argc: size of argv[]
 * @argv: array of terminal commands
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
