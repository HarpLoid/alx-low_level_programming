#include "main.h"
/**
 * main - prints number for arguments
 * passed.
 * @argc: size of argv[]
 * @argv: array of arguments
 *
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	(void)**argv;

	printf("%d\n", (argc - 1));

	return (0);
}
