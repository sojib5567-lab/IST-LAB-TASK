#include <stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year");
    }
    else if (year % 400 == 0)
    {
        printf("%d is a leap year");
    }
    else
    {
        printf("%d is not leap year");
    }
    return 0;
}
