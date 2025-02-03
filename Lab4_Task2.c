#include<stdio.h>
int main() {
float salary,increment,total_salry;
printf("Enter your salary:");
scanf("%f",&salary);
if (salary>=50000 && salary<=100000){
  increment=(salary*0.15);
}
else if (salary>=8000 && salary<50000)
{
     increment=(salary*0.1);
}
else{
    printf("Variable invalid");
}
total_salry=(increment+salary);
printf("\nincrement:%.2f total_salary:%.2f",increment,total_salry);
return 0;
}