#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - stucture named
 * dog
 * @name: name of dog
 * @age: ages of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * init_dog - initializes a variable
 * of type struct dog
 * @d: point to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints the values
 * elements of dog
 * @d: pointer to variable of 
 * type dog.
 *
 * Return: void
 */
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * new_dog - creates a new dog variable
 * @name: name of new dog
 * @age: age of new dog
 * @owner:owner of new dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees memory allocated
 * for a dog variable
 * @d: pointer to dog variable
 *
 * Return: void
 */
void free_dog(dog_t *d);





#endif /*_DOG_H_*/
