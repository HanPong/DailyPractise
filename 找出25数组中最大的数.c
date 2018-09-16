#include<stdio.h>
#define M 5
#define N 5
int main()
{
	int a[M][N];
	int i,j;
	printf("请输入5*5数组的数字\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			
		{
			scanf("%d",a[i][j]);
		}
		while(j==5)
			printf("\n");
	}
}