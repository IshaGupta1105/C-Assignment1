// WAP to take date as an input in below given format and convert the data format and display the result as given below.User input data format- "DD/MM/YYYY"(27/11/2022)
#include<stdio.h>

int main()
{
    int day,month,year;
    printf("Enter the date in DD/MM/YYYY format\n");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day = %d , Month = %d ,Year = %d",day,month,year);
    return 0;
}