#include<stdio.h>
void main()
{
	int i,n,x,max,min,maxi=1,mini=1;
	printf("please input n:\n");
	scanf("%d",&n);
	printf("please input x:\n");
	scanf("%d",&x);
	max=x;
	min=x;
	for(i=2;i<=n;i++)
	{
		scanf("%d",&x);
		if(x>max){max=x;maxi=i;}
		if(x<min){min=x;mini=i;}
	}
		printf("max=%d;maxi=%d\n",max,maxi);
		printf("min=%d;mini=%d\n",min,mini);

}
