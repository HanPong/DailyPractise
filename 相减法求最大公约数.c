/*求最小公倍数的算法：
最小公倍数=两数的乘积/最大公约数
求最大公约数：
2.相减法：
有两个整数a，b
1.a>b，则a=a-b，
2.a<b，则b=b-a，
3.若a=b，则两数为最大公约数
4.若a不等于b，则再回去执行1*/
#include<stdio.h>
void main()
{
	int m,n,a,b,c;
	printf("Input two integer numbers:\n");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	while(a!=b)
		if(a>b) a=a-b;
		else b=b-a;
		printf("The largest common divisor:%d\n",a);
		printf("The least common multiple:%d\n",m*n/a);

}