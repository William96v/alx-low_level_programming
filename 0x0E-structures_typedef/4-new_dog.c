int main() {
    dog_t *myDog = new_dog("Fido", 5.5, "John Doe");

    if (myDog == NULL) {
        printf("Failed to create a new dog.\n");
        return 1;
    }

    printf("Name: %s, Age: %.1f, Owner: %s\n", myDog->name, myDog->age, myDog->owner);

    // Don't forget to free the memory when you're done with the dog
    free(myDog->name);
    free(myDog->owner);
    free(myDog);

    return 0;
}

