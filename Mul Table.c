// 4.Get a number and display its Multiplication table
#include<stdio.h>
int main(){
	int n,i,res;
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		res=i*n;
		printf("%d * %d = %d\n",i,n,res);
	}
