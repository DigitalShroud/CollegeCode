/*This program is designed to prompt the user for a number between 1 to 7 where 1 represents Sunday, 2 Monday etc and then display the day to standard output.
DigitalShroud 10/10/2017*/
#include <stdio.h>

int main()
{
    int day;
    
    printf("Enter a number to display it as a day: ");
    fflush(stdout);
    scanf("%d", &day);
    
    while(day < 1 || day > 7)
    {
        printf("Please enter a value between 1 to 7: ");
        fflush(stdout);
        scanf("%d", &day);
    }
    
    if(day == 1) {
        printf("Sunday");
    }
    if(day == 2) {
        printf("Monday");
    }
    if(day == 3) {
        printf("Tuesday");
    }
    if(day == 4) {
        printf("Wednesday");
    }
    if(day == 5) {
        printf("Thursday");
    }
    if(day == 6) {
        printf("Friday");
    }
    if(day == 7) {
        printf("Saturday");
    }
    
    return 0;
}
    
