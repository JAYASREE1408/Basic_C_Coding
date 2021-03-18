//Reverse word 
// ex: ip = program book
// op = koob margorp
#include <stdio.h>

int main()
{
    char str[50];
    int length=0;
    scanf("%[^\n]",str);
    int i=0;
    while(str[i]!='\0'){
        length++;
        i++;
    }
    for(int j=length-1;j>=0;j--){
        printf("%c",str[j]);
    }
    
    
}
