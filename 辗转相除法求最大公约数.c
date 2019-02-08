/*求最小公倍数的算法：
最小公倍数=两数的乘积/最大公约数
辗转相除法求最大公约数：
有两个整数a，b
1.a%b得余数c
2.若c=0，则b为两数的最大公约数
3.若c不等于0，a=b,b=c,再回去执行1*/
#include<stdio.h>
void main()
{
	int m,n,a,b,t,c;
	printf("Input two integer numbers:\n");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;/*把两数储存起来，求公倍数的时候使用*/
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("The largest common divisor:%d\n",a);
	printf("The least common multiple:%d\n",m*n/a);
}
