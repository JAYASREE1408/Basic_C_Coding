// 2.Add the digits of a number and display.
#include<stdio.h>
int main(){
	long int n,count=0,rem=0,sum=0;
	scanf("%ld",&n);
	while(n>0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		count++;
	}
	printf("No. of digits are: %ld\n",count);
	printf("The sum is: %ld\n",sum);
}

