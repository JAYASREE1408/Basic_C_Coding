// Reverse words without space 
// ip = program book
// op = koobmargorp
#include <stdio.h>
#include<string.h>
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
    char s[50]=strcpy(str);
    for(int j=length-1;j>=0;j--){
        if(str[j]==' '){
            continue;
        }
        printf("%c",str[j]);
    }
    
    
}
