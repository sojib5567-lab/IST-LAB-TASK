#include <stdio.h>
int main()
{
    int n, i;
    printf("Size=");
    scanf("%d", &n);
    int ar[n];
    printf("Element=");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}
