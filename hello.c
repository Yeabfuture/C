#include <stdio.h>

int main(void) 
{
    char name[50];
    int age;

    printf("What's your name? ");
    scanf("%s", name);  

    printf("Hello, %s! How old are you? ", name);  
    scanf("%d", &age);  

    printf("Nice to meet you, %s. You are %d years old.\n", name, age);  
    
    return 0;
}
