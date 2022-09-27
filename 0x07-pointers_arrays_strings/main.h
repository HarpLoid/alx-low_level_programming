#ifndef MAIN_H
#define	MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _strlen - finds the length of a string
 * @s: pointer to character string
 *
 * Return: value of length of string.
 */
int _strlen(char *s);

/**
 * _memset - fills memory with a constant byte
 * @s: array to fill
 * @b: constant to fill the array
 * @n: number of byte to fill the array
 *
 * Return: the array of the memory.
 */
char *_memset(char *s, char b, unsigned int n);

#endif /* _MAIN_H_ */
