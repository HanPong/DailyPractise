/*����С���������㷨��
��С������=�����ĳ˻�/���Լ��
շת����������Լ����
����������a��b
1.a%b������c
2.��c=0����bΪ���������Լ��
3.��c������0��a=b,b=c,�ٻ�ȥִ��1*/
#include<stdio.h>
void main()
{
	int m,n,a,b,t,c;
	printf("Input two integer numbers:\n");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;/*�����������������󹫱�����ʱ��ʹ��*/
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("The largest common divisor:%d\n",a);
	printf("The least common multiple:%d\n",m*n/a);
}
