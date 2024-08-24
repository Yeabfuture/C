#include <stdio.h>

int main(void) 
{
    // Accepting and returning the value
    // char name[50];
    // int age;

    // printf("What's your name? ");
    // scanf("%s", name);  

    // printf("Hello, %s! How old are you? ", name);  
    // scanf("%d", &age);  

    // printf("Nice to meet you, %s. You are %d years old.\n", name, age);  


    // conditionals

    int x, y;

    printf("Enter the value of x: ");
    scanf("%i", &x);
    printf("Enter the value of y: ");
    scanf("%i", &y);

    if(x<y)
    {
        printf("%i Is greater than %i",x,y);

    }
    
    return 0;
}
