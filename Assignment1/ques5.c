// WAP to calculate the length of the string using print function.
#include<stdio.h>

int main()
{
    char str[1000];
    int i;
    printf("Enter the String:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';++i);
    printf("Length of string = %d",i);
    return 0;
}