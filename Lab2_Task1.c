#include<stdio.h>
#include<math.h>
int main() {
int a,b,c;
float s,area;
printf("Enter three sides of triangle:");
scanf("%d %d %d",&a ,&b ,&c);
printf("\nPerimeter:%d",a+b+c);
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\n area of triangle:%.2f",area);
return 0;
}