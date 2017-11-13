/*This program is designed to ask the user for two integers and check if the first integer is evenly divisible by the second.
DigitalShroud 10/10/2017*/
    
#include <stdio.h>

int main ()
{   
    int num1;
    int num2;
    
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    printf("Enter another integer: ");
    fflush(stdout);
    scanf("%d", &num2);
    
    //If the modulus of num2 / num1 == 0, it is evenly divisible.
    if(num2 / num1 % 2 == 0)
    {
        printf("%d is evenly divisible by %d.", num1, num2);
    }
    else
    {
        printf("%d is not evenly divisible by %d.", num1, num2);
    }
    
    return 0;
}
        