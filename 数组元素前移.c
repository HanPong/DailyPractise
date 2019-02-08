#include<stdio.h>
void main()
{
	int a[],i,n,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	a[0]=t;
	for(i=0;i<n;i++)
	a[i]=a[i+1];
	a[i-1]=t;
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
}
