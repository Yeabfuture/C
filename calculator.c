// The task is to create a calculator which adds, subtract, multiply, divide and calculate a percentage of a number

#include <stdio.h>

float addition(float number_1, float number_2);
float subtraction(float number_1, float number_2);
float multiplication(float number_1, float number_2);
float division(float number_1, float number_2);
float percentage(float number_1);

int main()
{
    float number_1, number_2, result;
    int choice;

    do
    {
        // Displaying the choices they have
        printf("write '1' for Addition \n");
        printf("write '2' for Subtraction \n");
        printf("write '3' for Multiplication \n");
        printf("write '4' for Division \n");
        printf("write '5' for Percentage \n");
        printf("write '0' for to exit \n");

        printf("Choose the operation you want to have: ");

        // accepting user choice
        scanf("%i", &choice);

        switch(choice)
        {
            case 1:
            printf("Please write the first number: ");
            scanf("%f", &number_1);
            printf("Please write the second number: ");
            scanf("%f", &number_2);
            result = addition(number_1,number_2);
            printf("Your result is %f \n", result);

            break;

            case 2:
            printf("Please write the first number: ");
            scanf("%f", &number_1);
            printf("Please write the second number: ");
            scanf("%f", &number_2);
            result = subtraction(number_1,number_2);
            printf("Your result is %f \n", result);

            break;

            case 3:
            printf("Please write the first number: ");
            scanf("%f", &number_1);
            printf("Please write the second number: ");
            scanf("%f", &number_2);
            result = multiplication(number_1,number_2);
            printf("Your result is %f \n", result);

            break;

            case 4:
            printf("Please write the first number: ");
            scanf("%f", &number_1);
            printf("Please write the second number: ");
            scanf("%f", &number_2);
            result = division(number_1,number_2);
            printf("Your result is %f \n", result);

            break;

            case 5:
            printf("Please write the first number: ");
            scanf("%f", &number_1);
            result = percentage(number_1);
            printf("Your result is %f \n", result);
     
        }
    } while(choice != 0);

}

float addition(float number_1, float number_2)
{
    float result = number_1 + number_2;
    return result;
}

float subtraction(float number_1, float number_2)
{
    float result = number_1 - number_2;
    return result;
}

float multiplication(float number_1, float number_2)
{
    float result = number_1 * number_2;
    return result; 
}

float division(float number_1, float number_2)
{
    if(number_2 !=0)
    {
        float result = number_1/number_2;  
        return result;         
    }
    else
    {
        printf("Denomnator can't be zero");
    }  
}

float percentage(float number_1)
{
    float result = number_1/100;
    return result;
}


