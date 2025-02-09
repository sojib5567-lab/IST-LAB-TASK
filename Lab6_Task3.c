#include<stdio.h>
int main(){
int x,y;
char op;
printf("Enter two number and operator type:");
scanf("%d %d %c",&x,&y,&op);
switch (op)
{
case '+' :
    printf("Sum=%d",x+y);

    break;
    case '-' :
    printf("Sub=%d",x-y);
    
    break;
    case '*' :
    printf("Mul=%d",x*y);
    
    break;
}
return 0;
}