#include<stdio.h>
long fac(int n);/*调用长整型函数，定义变量n*/
void main()
{
	int n;
	long y;
	printf("\ninput a integer number:\n");
	scanf("%d",n);
	if(n<0)
		printf("data error\n");
	else
	{
		y=fac(n);
		printf("%d!=%ld",n,y);
	}
}
long fac(int n)
{
	long f;
	if(n==1)
		f=1;
	else
		f=fac(n-1)*n;/*递归*/
	return(f);

}
