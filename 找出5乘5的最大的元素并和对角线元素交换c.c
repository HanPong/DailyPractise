#include<stdio.h>
void main()
{
	int a,b,i,j,t,x,y,max;
	int m[5][5];
	/*输入部分*/
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	/*运算部分*/
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
			}/*在循环内选出最大值，在循环外进行交换*/
		}
		t=m[i][i];
		m[x][y]=t;
		m[i][i]=max;


	}
	/*输出部分*/
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%2d",m[i][j]);

		}

				printf("\n");/*换行*/
	}
}
