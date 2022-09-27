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

/**
 * _memcpy - copies a number of bytes
 * from one memory area of to another
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of byte to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - finds a character in
 * a string.
 * @s: string to search.
 * @c: character to locate.
 *
 * Return: string from character c.
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix
 * substring.
 * @s: string to search.
 * @accept: string of characters to check.
 *
 * Return: string from character c.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searchs a string for
 * any of a set of bytes.
 * @s: string to search.
 * @accept: string of characters to check.
 *
 * Return: string from character.
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring in
 * another string.
 * @haystack: string to search.
 * @needle: string to check for.
 *
 * Return: string from character.
 */
char *_strstr(char *haystack, char *needle);

#endif /* _MAIN_H_ */
