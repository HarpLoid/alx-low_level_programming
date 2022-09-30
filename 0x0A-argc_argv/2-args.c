#include "main.h"
/**
 * main - prints all arguments
 * passed.
 * @argc: size of argv[]
 * @argv: array of arguments
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	int i; /* i is the index of the array *argv[] */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
