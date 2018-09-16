#include<stdio.h>
void main()
{
	int i,t,l;
	int m=2,n=1;
    float sum=0;
	for(i=0;i<20;i++)
	{
		t=m/n;
		l=m+n;
		n=m;
		m=l;
		sum=sum+t;
	}
	printf("%4f",sum);
}
