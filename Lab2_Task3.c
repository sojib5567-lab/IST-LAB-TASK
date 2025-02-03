#include<stdio.h>
int main(){
int l,w;
float area,perimeter;
printf("Enter Your length & width:");
scanf("%d %d",&l,&w);
printf("Area is %d",l*w);
printf("\nperimeter %d",2*(l+w));
return 0;
}