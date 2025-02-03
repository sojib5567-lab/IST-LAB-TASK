#include<stdio.h>
int main(){
int a1,a2,a3,minimum;
printf("Enter three ages:");
scanf("%d %d %d",&a1,&a2,&a3);
if (a1<a2)
{
    if (a1<a3)
    {
        minimum=a1;
    }
    else{
        minimum=a3;
    }
}
else{
    if (a2<a3)
    {
     minimum=a2;
    }
    else{
        minimum=a3;
    }
}
printf("Minium age:%d",minimum);

return 0;
}