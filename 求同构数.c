#include<stdio.h>
void main()
{
	int i;
	for(i=2;i<10;i++)
	{
		if((i*i)%10==i)
			printf("%2d",i);//ȷ�����ֺ���һ���ո�
	}
	for(i=10;i<100;i++)
	{
		if((i*i)%100==i)
		printf("%3d",i);
	}
	for(i=100;i<1000;i++)
	{
		if((i*i)%1000==i)
			printf("%4d",i);
	}
}