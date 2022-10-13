#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure dog
 * @name: atribute pointer to char name's dog
 * @age: atribute float age's dog
 * @owner: atribute pointer to char dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dogi(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
