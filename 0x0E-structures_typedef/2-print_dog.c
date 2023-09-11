#include <stdio.h>

/**
* struct dog - Represents a dog with a name, age, and breed
* @name: The name of the dog
* @age: The age of the dog
* @breed: The breed of the dog
*/
struct dog {
char *name;
int age;
char *breed;
};

/**
* print_dog - Prints the details of a dog
* @d: A pointer to the dog struct
*
* If an element of d is NULL, print (nil) instead of this element.
* (if name is NULL, print Name: (nil))
* If d is NULL, print nothing.
*/
void print_dog(struct dog *d) {
if (d == NULL) {
return;
}

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}

