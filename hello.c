#include <stdio.h>

int main(void) 
{
    // char name[30];
    // printf("hello, world \n");

    // printf("What is your name? ");
    // scanf("%s", name);
    // printf("Hello %s", name);

    // char first_name[30];
    // char last_name[30];
    // int age;
    // char phone_number[11];

    // printf("Whats your first name? ");
    // scanf("%s", first_name);
    // printf("Whats your last name? ");
    // scanf("%s", last_name);
    // printf("How old are you? ");
    // scanf("%i", &age);
    // printf("Tell me your number: ");
    // scanf("%s", phone_number);

    // printf(" Your contact information is: \n First name %s Second name %s Age %i phone number %s", first_name, last_name, age, phone_number);
    

    for(int i=0; i<5; i++)
    {
        for(int j=i; j>0; j--)
        {
            printf("  *");
            
        }
        printf("\n");
        
    }
    return 0;
}
