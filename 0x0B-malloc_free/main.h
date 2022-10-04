#ifndef _MAIN_H_
#define	_MAIN_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_alphabets - prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lowercase
 * if character is lowercase it returns 1
 * else 0 is returned.
 * @c: the character to check
 *
 * Return: 1 (Success), return 0 (Failure)
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic characters
 * and returns 1 if the character is lowercase
 * and uppercase and returns 0 if it's otherwise.
 * @c: character to check
 *
 * Return: 1 (Success), return 0 (Failure)
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a n
 * @n: number to check.
 *
 * Return: 1 (if sign is positive),
 * returns 0 (if n is 0),
 * returns -1 (if sign is negative)
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value
 * of an integer
 * @int: an integer
 *
 * Return: Absolute value of number
 */
int _abs(int);

/**
 * print_last_digit - prints the last digit
 * a number
 * @long: type of integer
 * @int: type of arguement
 *
 * Return: the value of the last digit
 */
int print_last_digit(long int);


/**
 * jack_bauer - prints every minute of the day
 * from 00:00 to 23:59.
 */
void jack_bauer(void);


/**
 * times_table - print multiplication table
 *
 * Return: Always 0
 */

void times_table(void);

/**
 * add - adds two integer and displays the result
 * @int: integer arguements to be added.
 *
 * Return: value of addition.
 */
int add(int, int);

/**
 * print_to_98 - prints all numbers from n to 98.
 * @n: number to start from.
 *
 * Return: Always 0
 */
void print_to_98(int n);

/**
 * _isupper - checks if the input
 * is an uppercase character
 * @c: character to check
 *
 * Return: returns 1 if uppercase
 * returns 0 otherwise.
 */
int _isupper(int c);

/**
 * _isdigit - checks if the input
 * is a digit or not
 * @c: character to check
 *
 * Return: returns 1 if digit
 * returns 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: first integer to multiply
 * @b: second integer to multiply
 *
 * Return: value of product.
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers
 * from 0 to 9
 *
 * Return: Always 0 (success)
 */
void print_numbers(void);

/**
 * print_numbers - prints numbers
 * from 0 to 9 excluding 2 and 4
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void);

/**
 * more_numbers - print numbers from
 * 0 to 14 ten times.
 *
 * Return: 0 (success)
 */
void more_numbers(void);

/**
 * print_line - prints a line using '_'
 * @n: number of time '_' is printed.
 *
 * Return: Always 0.
 */
void print_line(int n);

/**
 * print_diagonal - prints
 * a diagonal line using '\'
 * @n: number of time '\' is printed.
 *
 * Return: Always 0.
 */
void print_diagonal(int n);

/**
 * print_square - prints a
 * square of a size.
 * @size: size of square to print.
 *
 * Return: Always 0.
 */
void print_square(int size);

/**
 * print_triangle - prints a
 * triangle of a size.
 * @size: size of square to print.
 *
 * Return: Always 0.
 */
void print_triangle(int size);

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

/**
 * cap_string - capitalizes all words in string
 * @s: string or array to change to capitalize
 *
 * Return: capitalized string.
 */
char *cap_string(char *s);

/**
 * leet - encodes a string into numbers
 * @s: string or array to change to encode
 *
 * Return: encoded string.
 */
char *leet(char *s);

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

/**
 * print_chessboard - prints the chessboard.
 * @a: array to print.
 *
 * Return: void.
 */
void print_chessboard(char(*a)[8]);

/**
 * _atoi (char *s) - converts a
 * string to an integer
 * @s: string to convert
 *
 * Return: integer value.
 */
int _atoi(char *s);

/**
 * create_array - create an array of size "size"
 * and initializes to with char c.
 * @size: size of the array.
 * @c: character to initialize the array with.
 *
 * Return: pointer to the array
 * and NULL if it fails.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - duplicates a string
 * to an allocated memory location.
 * @str: pointer to a string.
 *
 * Return: pointer to the location of 
 * the duplicate string, NULL on failure.
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two
 * strings.
 * @s1: string to add to.
 * @s2: string to add to s1.
 *
 * Return: the memory address
 * of concatenated string.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - allocates memory
 * for a 2D array and initializes it to 0.
 * @width: width of the grid.
 * @height: height of grid.
 *
 * Return: null on failure and
 * null if width or height 0 or less
 * than 0.
 */
int **alloc_grid(int width, int height);




#endif /* _MAIN_H_ */
