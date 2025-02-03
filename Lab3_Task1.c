#include<stdio.h>
int main(){
int inputdays,year,month,day;
printf("Enter days number:");
scanf("%d",&inputdays);
year=(inputdays/365);
day=(inputdays%365);
month=(day/30);
printf("Year %d Month %d Day %d",year,month,day);
return 0;
}