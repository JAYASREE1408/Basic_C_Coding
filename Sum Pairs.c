// 6.Get a number 'sum' and array as input from tha user and find the number of pairs of integers in the array whose sum is equal to 'sum'.
// Sample input : arr[] = {1, 5, 7, -1}, sum = 6 Output : 2 Pairs with sum 6 are (1, 5) and (7, -1)
#include <stdio.h>
#include<stdlib.h>
int main(){
	int n,sum,i,j,count=0;
	scanf("%d %d",&n,&sum);
	int *a;
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==sum){
				printf("The pair is %d and %d\n",a[i],a[j]);
				count++;
			}
		}
	}
	printf("The count is %d\n",count);
}
