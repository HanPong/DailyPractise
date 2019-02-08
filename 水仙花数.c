#include<stdio.h>
int a,b,m;
int sxhs(int);
void main()
{
	int i;
	for(i=100;i<1000;i++)
	{
	   m=sxhs(i);
	   if (m==1)
	   printf("%d\n",i);
	   }
}
int sxhs(int a)
{
	int b,c,d;
	b=a%10;
	c=(a/10)%10;
	d=a/100;
	if(a==b*b*b+c*c*c+d*d*d)
		return 1;
	else 
		return 0;
}