#ifndef _ALXSE_H_
#define	_ALXSE_H_

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
 * @int: an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int);

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

#endif
