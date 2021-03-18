//Program to find largest among 3 numbers using ternary operator.
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int res=a>b?((a>c)?a:c):((b>c)?b:c);
    printf("The largest number is %d",res);
    
}
