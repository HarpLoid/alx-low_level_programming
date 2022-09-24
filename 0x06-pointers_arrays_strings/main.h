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
 * _strcat - concatenates two strings
 * @dest: destination of concatenated string.
 * @src: string to concatenate with destination string.
 *
 * Return: concatenated string.
 */
char *_strcat(char *dest, char *src);


/**
 * _strncat - concatenates two strings to the
 * nth character
 * @dest: destination of concatenated string.
 * @src: string to concatenate with destination string.
 * @n: the nth character to append.
 *
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies the string in
 * src to dest to the nth character.
 * @src: string to copy.
 * @dest: string to be copied to.
 * @n: number of characters to copy
 *
 * Return: the string in dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * and checks if they are equal.
 * @s1: first string to compare.
 * @s2: string to compare.
 *
 * Return: 0 when strings are equal
 * negative or positive when unequal.
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content
 * of an array
 * @a: array to reverse it's content.
 * @n: number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes the characters
 * in lowercase to uppercase
 * @s: string or array to change to uppercase
 *
 * Return: uppercased string.
 */
char *string_toupper(char *s);


#endif /* _MAIN_H_ */
