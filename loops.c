#include <stdio.h>

int main(void) 
{
    // for loop

    for(int i=0; i<3; i ++) 
    {
        printf("Meow from the for loop\n");
    }

    // while loop

    int counter = 3;

    while(counter > 0)
    {
        printf("Meow while loop\n");
        counter--;
    }

    do while loop

    int counter =3;
    do 
    {
        printf("Meow from do while loop \n");
        counter--;
    } while(counter >0);

    return 0;
}