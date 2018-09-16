#include<stdio.h>
#define M 100
#define N 100
void main()
{
	int a[M],b[N];
	int i,j,n,t;
	printf("请输入原有数组内容:\n");
	for(i=0;i<M;i++)
	{
	   scanf("%d",a[i]);
	}
	printf("\n请输入数字:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",b[i]);
	}
	for(i=0;i<N;i++)
	{
		for(n=0;n<M;n++)
		{
			while(b[i]>a[n])
				t=a[n];
				a[n]=b[i];
				for(j=n+1;j<M;j++)
				{
                     
					 a[n]=a[n+1];

				}
		}

	}
	for(i=0;i<M;i++)
		printf("%d",a[i]);
}