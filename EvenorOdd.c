/*This program is designed to ask the user to enter an integer between 1 and 100 and check whether it is even or odd
DigitalShroud 10/10/2017*/

#include <stdio.h>

int main ()
{
    int num1;
    
    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    while(num1 < 1 || num1 > 100)
    {
        printf("Please enter a valid integer (1 - 100): ");
        fflush(stdout);
        scanf("%d", &num1);
    }
    
    if(num1 % 2 == 0) 
    {
        printf("%d is even.", num1);
    }
    else 
    {
        printf("%d is odd.", num1);
    }
    
    return 0;
}
        
    
    
            