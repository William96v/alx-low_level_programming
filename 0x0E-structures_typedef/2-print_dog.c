#include <stdio.h>

struct dog {
    char *name;
    int age;
    char *breed;
};

void print_dog(struct dog *d) {
    if (d == NULL) {
        return;
    }

    printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
    printf("Age: %d\n", d->age);
    printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
}

int main() {
    // Example usage
    struct dog my_dog = {"Fido", 5, "Labrador"};
    struct dog *ptr_dog = &my_dog;
    print_dog(ptr_dog);

    return 0;
}

