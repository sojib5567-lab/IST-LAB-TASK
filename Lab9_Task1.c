// find out vowel and consonent
#include<stdio.h>
int main(){
    char ch; printf("Enter:");
    scanf("%c",&ch);
    if (ch =='A'|| ch=='a'|| ch=='E'|| ch=='e'|| ch=='I'|| ch=='i'|| ch=='O'||ch=='o'|| ch=='U'|| ch=='u')
    {
       printf("It is vowel");
    }
    else{
           printf("It is a consonent");
    }
    return 0;
}

