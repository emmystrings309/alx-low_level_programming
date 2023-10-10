# 0x0E Structures and Typedef

This repository contains C programs that demonstrate the use of structures and typedef. Each task is associated with a specific C header file and corresponding C source file that defines functions and structures to achieve specific functionalities.

## Files

### dog.h

Header file that defines a new type `struct dog` and prototypes functions associated with dogs.

```c
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
```

### 0-main.c

A C program that demonstrates the use of the `struct dog` type.

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### 1-init_dog.c

A C source file that contains the implementation of the `init_dog` function.

```c
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
```

### 2-print_dog.c

A C source file that contains the implementation of the `print_dog` function.

```c
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", d->name ? d->name : "(nil)");
        printf("Age: %.6f\n", d->age);
        printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
    }
}
```

### 3-main.c

A C program that demonstrates the use of the `dog_t` type.

```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### 4-new_dog.c

A C source file that contains the implementation of the `new_dog` function.

```c
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * 
 * Return: Pointer to the newly created dog, or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    name_copy = strdup(name);
    owner_copy = strdup(owner);
    if (name_copy == NULL || owner_copy == NULL)
    {
        free(name_copy);
        free(owner_copy);
        free(new_dog);
        return (NULL);
    }

    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
```

### 5-free_dog.c

A C source file that contains the implementation of the `free_dog` function.

```c
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog to free
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
```

## Compilation

The programs can be compiled using the following gcc options:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file.c> -o <output>
```

Note: Each task has a corresponding `main.c` file that can be used to test the associated header file and source files. However, these `main.c` files are not required for submission.

## Author

This repository is maintained by emmy. Please feel free to contact me with any questions or concerns.
