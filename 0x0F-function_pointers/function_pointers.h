#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_name - print a name.
 * @name: name to print.
 * @f: pointer to "f" function.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - execute a function
 * given as a parameter on elements of
 * an array.
 * @array: array to iterate.
 * @size: size of array.
 * @action: fuction to execute on array
 * elements.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer.
 * @array: array to iterate.
 * @size: size of array.
 * @cmp: fuction to compare array
 * elements.
 *
 * Return: index of first element
 * that does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int));



#endif /*_FUNCTION_POINTERS_H_*/
