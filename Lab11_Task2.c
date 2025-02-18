//find max and min value of an array
#include <stdio.h>
int main()

{

    int n, i,min,max;
    printf("Size=");
    scanf("%d", &n);
    int ar[n];
    printf("Element=");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
max=ar[0];
min=ar[0];
printf("output: \n");
for ( i = 0; i < n; i++)
{
    if (ar[i]>max)
    {
max=ar[i];
    }
    else if (ar[i] < min )
    {
        min=ar[i];
    }
    
}
printf("Max=%d\n",max);
printf("Min=%d\n",min);
    
    return 0;
}
