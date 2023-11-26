//Program to find leap year:
#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("Leap year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }
    else
    {
        if(year%4==0)
        {
           printf("Leap year");
        }
        else
        {
            printf("Not Leap Year");
        }
    }

    return 0;
}
