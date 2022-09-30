#include "main.h"

int mul(int num1, int num2);

/**
 * main - multiples to numbers.
 * @argc: size of argv[]
 * @argv: array of arguments
 *
 * Return: 0 on success and 1 on Error
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = mul(atoi(argv[1]), atoi(argv[2]));
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

/**
 * mul - multiples two numbers.
 * @num1: first number to multiply
 * @num2: second number to multiply
 *
 * Return: Product of num1 and num2
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}
