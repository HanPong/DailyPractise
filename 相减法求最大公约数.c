/*����С���������㷨��
��С������=�����ĳ˻�/���Լ��
�����Լ����
2.�������
����������a��b
1.a>b����a=a-b��
2.a<b����b=b-a��
3.��a=b��������Ϊ���Լ��
4.��a������b�����ٻ�ȥִ��1*/
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