// fnid out odd even using switch:
#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d", &x);
    int num = x % 2;
    switch (num)
    {
    case 0:
        printf("even");
        break;
    case 1:
        printf("odd");
        break;
    }
    return 0;
}