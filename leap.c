#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year :");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("\nleap year");
    }
    else
    {
        printf("\nNot Leap year");
    }
}