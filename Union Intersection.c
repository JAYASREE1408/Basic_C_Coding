
#include<stdio.h>
int main(){
	int i,j,n1,n2,k=0,l=0;;
	printf("Enter size of two arrays:");
	scanf("%d %d",&n1,&n2);
	int a[n1],b[n2],u[n1+n2],in[n1+n2];
	printf("Enter elements of array1:");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter elements of array2:");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	i=0,j=0;
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			u[k++]=a[i];
			i++;
		}
		else if(a[i]>b[j]){
			u[k++]=b[j];
			j++;
		}
		else{
			u[k++]=b[j];
			in[l++]=a[i];
			i++;
			j++;
		}
	}
	while(i<n1){
		u[k++]=a[i];
		i++;
	}
	while(j<n2){
		u[k++]=b[j];
		j++;
	}
	printf("The union is: \n");
	for(i=0;i<k;i++){
		printf("%d ",u[i]);
	}
	printf("\nThe Intersection is: \n");
	for(i=0;i<l;i++){
		printf("%d ",in[i]);
	}
}
