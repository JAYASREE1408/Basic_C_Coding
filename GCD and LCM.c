#include<stdio.h>
int main(){
	int a,b,i,j,gcd;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	int lcm=a*b/gcd;
	printf("The GCD is: %d\n",gcd);
	printf("The LCM is: %d\n",lcm);
}
