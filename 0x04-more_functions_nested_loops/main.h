#ifndef _MAIN_H_
#define	_MAIN_H_

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

#endif /* _MAIN_H_ */
