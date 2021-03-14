#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m],c[10];
	int i,j,temp;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		c[i]=a[i];
	}
	for (int i = 0; i < m; i++)
	{
		c[n+i]=b[i];
	}
	for(i=0;i<n+m;i++){
		for(j=i+1;j<n+m;j++){
			if(c[i]<c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	for (int i = 0; i < n+m; ++i)
	{
		printf("%d ",c[i]);
	}
	

}
