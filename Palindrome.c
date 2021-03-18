//1. Program to check whether the number is palindrome or not
#include <stdio.h>

int main()
{
    int n,i,rem,res=0;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        res=(res*10)+rem;
        n=n/10;
    }
    if(n==res){
        printf("It is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }
}
