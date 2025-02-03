#include<stdio.h>
int main(){
int radius;
float pi=3.1416;
printf("Enter your radius:");
scanf("%d",&radius);
printf("Area is %.2f",pi*radius*radius);
printf("\nCircumference is %.2f",2*pi*radius);
return 0;
}