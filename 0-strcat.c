#include <stdio.h>

char *_strcat(char *dest, char *src) {
    char *original_dest = dest; // Store the original destination pointer

    // Move the dest pointer to the end of the current content
    while (*dest != '\0') {
        dest++;
    }

    // Copy the source string to the end of dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add a terminating null byte
    *dest = '\0';

    return original_dest;
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    
    printf("Before concatenation:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    _strcat(str1, str2); // Concatenate str2 to str1
    
    printf("\nAfter concatenation:\n");
    printf("str1: %s\n", str1);
    
    return 0;
}
