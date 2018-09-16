#include<stdio.h>
void main()
{
	int a[10];
	int i,m,sum=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",a[i]);
	}
	if(a[i]<0)
	{
		printf("%d",a[i]);
		sum=sum+a[i];
	}
	printf("%d",sum);
}