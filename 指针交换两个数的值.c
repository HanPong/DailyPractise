#include<stdio.h>
void swap(int *,int*);/*函数的对象是指针*/
int main()
{
	int x,y;
	printf("请输入两个数:\n");
	scanf("%d%d",&x,&y);
	/*运算部分*/
	if(x>y)
		swap(&x,&y);/*函数的对象是指针*/
	printf("交换后:%4d%4d\n",x,y);
	return 0;
}
void swap(int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}