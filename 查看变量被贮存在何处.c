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
void mikado(int bah)//�˴���bah������ı�����bah���������pooh
{
	int pooh=10;

	printf("In mikado(),pooh=%d and %pooh=%p\n",pooh,&pooh);
	printf("In mikado(),bah=%d and %bah=%p\n",bah,&bah);
}*/
//����2��ʹ��ָ������������������
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
	/*(δ�����)*/
}