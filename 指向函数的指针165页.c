/*ָ������ָ��
int function()
int (*p)()
p=function
*/
#include<stdio.h>
int f(int);
int main()
{
	int(*p)(int);/*���������ﶨ��ָ������ָ��*/
	int x,y;
	printf("������x=");
	scanf("%d",x);
	p=f;
	y=(*p)(x);
	printf("y=%d\n,y");
	return 0;
}
int f(int x)
{
	return (3*x+5)*x-7;
}
