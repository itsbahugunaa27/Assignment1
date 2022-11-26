#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter the radius of the circle");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of the circle is %.3f having the radius %.3f",area,r);
    return 0;
}
