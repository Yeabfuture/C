#include <stdio.h>
#include <stdbool.h>
#

void marioblock(int numblocks);

int main()
{
    int numofblocks;
    printf("Whats the size of the brick: ");
    scanf("%d" , &numofblocks);
    
    marioblock(numofblocks);

    return 0;
}

void marioblock(int numblocks)
{   
    // Making the bricks
    for(int i=0; i<numblocks; i++)
    {
        for(int k=0; k<numblocks-i; k++)
        {
            printf(" ");
        }

        for(int j=0; j<i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
