#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - it is a structure that stores dogs info
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */
typedef struct dog
{

char *name[20];
float age;
char *owner[20];

};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
