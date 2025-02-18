// count odd aneven elwment 0f a input

#include <stdio.h>
int main()
{

    int n, i, odd, even;
    printf("Size=");
    scanf("%d", &n);
    int ar[n];
    printf("Element=");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    odd = 0;
    even = 0;
    printf("output: \n");
    for (i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            even++;
         
        }
        else
        {

            odd++;
        }

    }
    printf("Even=%d\n", even);
    printf("Odd=%d\n", odd);

    return 0;

}
