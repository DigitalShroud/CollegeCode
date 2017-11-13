/*This program is designed to calculate the volume and surface area of a cuboid
DigitalShroud 17/10/2017*/

#include <stdio.h>

int main()
{
    int height = 10; 
    float length = 11.5;
    float width = 2.5;
    
    float volume = length * width * height;
    float surface_area = 2 * length * height + 2 * width * height + 2 * length * width;
    
    printf("Volume = %f", volume);
    printf("Surface Area = %f", surface_area);
    
    return 0;
    
}
    
    