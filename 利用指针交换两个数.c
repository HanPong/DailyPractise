#include<stdio.h>
void swap(int *,int*);/*ע�ⶨ���ʽ*/
int main()
{
	int x,y;
	printf("������������:\n");
	scanf("%d%d",&x,&y);
	/*���㲿��*/
	if(x>y)
		swap(&x,&y);/*�����Ķ����ǵ�ַ*/
	    printf("������:%2d%2d",x,y);
		return 0;
}
void swap(int *p1,int*p2)/*ע�ⶨ���ʽ*/
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}
