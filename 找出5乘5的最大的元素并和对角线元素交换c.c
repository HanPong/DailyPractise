#include<stdio.h>
void main()
{
	int a,b,i,j,t,x,y,max;
	int m[5][5];
	/*���벿��*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	/*���㲿��*/
	for(i=0;i<5;i++)
	{
		max=m[i][0];
		for(j=0;j<5;j++)
		{
			if(m[i][j]>=max)
			{
				max=m[i][j];
				x=i;
				y=j;
			}/*��ѭ����ѡ�����ֵ����ѭ������н���*/
		}
		t=m[i][i];
		m[x][y]=t;
		m[i][i]=max;


	}
	/*�������*/
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%2d",m[i][j]);

		}

				printf("\n");/*����*/
	}
}
