/*�ݹ鷨��쳲���������*/
#include<stdio.h>
int fib(int n)
{
	if(n<2)
		return 1;
	else
		return fib(n-1)+fib(n-2);/*���ղ���������1�ĺ�*/
}
int main()
{
	int n,i;
	printf("N=");
		scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%10d",fib(i));
	return 0;

}
