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
 * reset_to_98 - resets variable n to 98
 * @n: a pointer to the integer to reset
 *
 * Return: Alway 0 (success)
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of the arguments.
 * @a: pointer of integer to swap.
 * @b: pointer of integer to swap.
 *
 * Return: Always 0 (success)
 */
void swap_int(int *a, int *b);

/**
 * _strlen - finds the length of a string
 * @s: pointer to character string
 *
 * Return: value of length of string.
 */
int _strlen(char *s);

/**
 * _puts - prints a string followed by 
 * a new line.
 * @str: String to print.
 *
 * Return: Always 0.
 */
void _puts(char *str);

/**
 * print_rev - prints a string in 
 * reverse followed by a new line.
 * @s: String to print.
 *
 * Return: Always 0.
 */
void print_rev(char *s);

/**
 * rev_string - prints a string in 
 * reverse followed by a new line.
 * @s: String to print.
 *
 * Return: Always 0.
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character
 * of a string starting with the
 * first character followed by a new line.
 * @str: String to print.
 *
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string
 * starting from the
 * second half followed by a new line.
 * @str: String to print.
 *
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - prints n elements
 * of an array of integers.
 * @a: array to print.
 * @n: number of elements in the array.
 *
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string in
 * src to dest.
 * @src: string to copy.
 * @dest: string to be copied to.
 *
 * Return: the string in dest
 */
char *_strcpy(char *dest, char *src);

#endif /* _MAIN_H_ */
