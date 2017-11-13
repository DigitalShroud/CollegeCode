/*This program is designed to read a single numeral from the keyboard and display its value as a word.
DigitalShroud 10/10/2017*/

#include <stdio.h>

int main()
{
    int num1;
    
    printf("Enter a number to display as a word: ");
    fflush(stdout);
    scanf("%d", &num1);
    
    while(num1 > 9)
    {
        printf("Please enter a single numeral (0 - 9): ");
        fflush(stdout);
        scanf("%d", &num1);
    }
    
    if(num1 == 0) 
    {
        printf("Zero");
    }
        
    if(num1 == 1) 
    {
        printf("One");
    }
    
    if(num1 == 2) 
    {
        printf("Two");
    }
        
    if(num1 == 3) 
    {
        printf("Three");
    }
        
    if(num1 == 4) 
    {
        printf("Four");
    }
    
    if(num1 == 5) 
    {
        printf("Five");
    }
        
    if(num1 == 6) 
    {
        printf("Six");
    }

    if(num1 == 7) 
    {
        printf("Seven");
    }
    
    if(num1 == 8) 
    {
        printf("Eight");
    }
    
    if(num1 == 9) 
    {
        printf("Nine");
    }
    
    return 0;
}
  
  
        
    
