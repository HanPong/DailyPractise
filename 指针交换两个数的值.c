#include<stdio.h>
void swap(int *,int*);/*�����Ķ�����ָ��*/
int main()
{
	int x,y;
	printf("������������:\n");
	scanf("%d%d",&x,&y);
	/*���㲿��*/
	if(x>y)
		swap(&x,&y);/*�����Ķ�����ָ��*/
	printf("������:%4d%4d\n",x,y);
	return 0;
}
void swap(int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}