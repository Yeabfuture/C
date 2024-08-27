#include <stdio.h>
#include <ctype.h>
#include <string.h>  // Include string.h for strcmp

void sound(char animal[]) {
    // Convert the animal string to lowercase
    for (int i = 0; animal[i]; i++) {
        animal[i] = tolower(animal[i]);
    }

    // Check the animal name and print the corresponding sound
    if (strcmp(animal, "dog") == 0) {
        printf("The selected animal is %s and it says Woof\n", animal);
    }
    else if (strcmp(animal, "cat") == 0) {
        printf("The selected animal is %s and it says Meow\n", animal);
    }
    else {
        printf("It's not a valid animal.\n");
    }
}

int main(void) {
    char animal[50];  // Ensure the array size is sufficient for input
    printf("Add the animal you want to know the voice of: ");
    scanf("%49s", animal);  // Use a width specifier to prevent buffer overflow
    sound(animal);
    return 0;
}
