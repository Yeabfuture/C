#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char value;

    printf(" Do you agree on the terms and conditions? Y or N? ");
    scanf("%c", &value);
    char lower_value = tolower(value);

    if(lower_value == 'y')
    {
        printf("Thanks for agreeing!");
    }
    else if(lower_value == 'n')
    {
        printf("Opps! get out from my software.");
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
