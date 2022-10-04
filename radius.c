#include<stdio.h>
 
int main()
{
    int radius=9000;      //  Allocate memory and assign a value
    const float PI=3.14;
    float area,ci;

    area = PI * radius * radius;
    printf("\n Area of a Circle : %f ",area);
 
    ci = 2 * PI * radius;
    printf("\n Circumference of a Circle is : %f ",ci);
 
    return(0);
}