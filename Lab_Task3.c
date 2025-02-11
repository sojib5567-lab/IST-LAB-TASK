// C program to check wether a character is an Alphabet or not
#include<stdio.h>

int main(){
char ch;
scanf("%c",&ch);
if(isalpha(ch))
    {
    printf("Alphabet");

}
else{
    printf("Not Alphabet");
}
return 0;
}

