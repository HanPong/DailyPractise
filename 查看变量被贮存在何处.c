/*#include<stdio.h>
void mikado(int);
int main(void)
{
	int pooh=2,bah=5;

	printf("In main(),pooh=%d and &pooh=%p\n",pooh,&pooh);
	printf("In main(),bah=%d and &pooh=%p\n",bah,&bah);
	mikado(pooh);

	return 0;
}
void mikado(int bah)//此处的bah是下面的变量，bah等于上面的pooh
{
	int pooh=10;

	printf("In mikado(),pooh=%d and %pooh=%p\n",pooh,&pooh);
	printf("In mikado(),bah=%d and %bah=%p\n",bah,&bah);
}*/
//程序2：使用指针解决交换函数的问题
#include<stdio.h>
void interchange(int *u,int *v);
int main(void)
{
	int x=5,y=10;
	printf("Originally x=%d and y=%d.\n",x,y);
	interchange(&x,&y);
	printf("Now x=%d and y=%d.\n",x,y");
    
	return 0;
}
void interchange(int *u,int *v)
{
	int temp;
	/*(未完待续)*/
}