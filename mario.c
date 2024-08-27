#include <stdio.h>

int main()
{
    // Making the jumping question marks
    for(int i = 0; i < 4; i++)
    {       
            printf("? ");     
    }

    printf("\n");

    int n;

    printf("Whats the size of the brick: ");
    scanf("%d" , &n);
    
    // Making the bricks
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
