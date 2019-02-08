#include<stdio.h>
int a,b,c;
int gys(int a,int b);
int gbs(int a,int b);
void main()
{
	int m,n;
	printf("请输入两个数字:\n");
	scanf("%d%d",&a,&b);
	m=gys(a,b);
	n=gbs(a,b);
	printf("%d\n%d\n",m,n);
}
int gys(int a,int b)
{

	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	


	}	
	return a;

}
int gbs(int a,int b)
{
	int c,d;
	c=a;
	d=b;

	while(a!=b)
	{
		if(a>b) a=a-b;
		else b=b-a;
	

	}
	return c*d/a;


}
