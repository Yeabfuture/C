#include <stdio.h>

int main(void)
{
    int x, y;

    printf("What's the value of x: ");
    scanf("%i", &x); 

    printf("What's the value of y: ");
    scanf("%i", &y);  

    if (x < y) 
    {
        printf("X is less than Y\n");
    }
    else if (x > y) 
    {
        printf("X is greater than Y\n");
    }
    else if (x == y) 
    {
        printf("X is equal to Y\n");
    }
    else 
    {
        printf("Your input is invalid\n");
    }
    
    return 0;
}
