// WAP to take time as an input in below given format and convert the time format and display the result as given below.User input data format- "HH:MM".
#include<stdio.h>

int main()
{
    int hour,min;
    printf("Enter the time in HH:MM format\n");
    scanf("%d:%d",&hour,&min);
    printf("%d Hour and %d Minute",hour,min);
    return 0;
}