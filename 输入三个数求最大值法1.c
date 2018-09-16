#include<stdio.h>
void main()
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)/*如果a大于b，调换位置，就是将较大的数字向后移动*/
	{
		t=a;
		a=b;
		b=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	printf("%d",c);
}
