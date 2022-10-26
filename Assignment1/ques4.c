// WAP to find the area of the circle.
#include<stdio.h>
int main()
{
    int r;
    float area, pi=3.14;
    printf("Enter the radius of circle\n");
    scanf("%d",&r);
    area=pi*r*r;
    printf("Area of circle is %.2f having the radius %d.",area,r);
    return 0;
}