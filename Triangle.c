/*This program is designed to ask the user to input 3 numbers to see if they form a valid triangle.
DigitalShroud 10/10/2017*/

#include <stdio.h>

int main ()
{
    int side1;
    int side2;
    int side3;
    
    printf("Enter a side: ");
    fflush(stdout);
    scanf("%d", &side1);
    
    printf("Enter another side: ");
    fflush(stdout);
    scanf("%d", &side2);
    
    printf("Enter one final side: ");
    fflush(stdout);
    scanf("%d", &side3);
    
    //If the sum of both both sides is greater than the third, it will make a valid triangle
    if(side1 + side2 > side3) 
    {
        printf("\nThis will form a valid triangle.");
    }
    else if(side1 + side2 < side3) 
    {
        printf("\nThis will not form a valid triangle.");
    }
    
    return 0;
}
    