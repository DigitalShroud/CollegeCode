/*This program is designed to ask the user to enter a number between 1 - 5 and display all the numbers between 1 - 20 that are evenly disible by the number
DigitalShroud 17/10/2017*/
    
    #include <stdio.h>
    
    int main()
    {
        int counter;
        int num;
        
        num = 0;
        counter = 1;
        
        printf("Enter a number between 1-5: \n");
        fflush(stdout);
        scanf("%d", &num);
        
        while(num < 1 || num > 5)
        {
            printf("Please enter a number between 1 and 5: ");
            fflush(stdout);
            scanf("%d", &num);
        }
        
        while(counter < 21)
        {
            if(counter % num == 0)
            {
                printf("%d is divisble by %d\n", counter, num);
            }
            counter++;
        }
        
        return 0;
   }