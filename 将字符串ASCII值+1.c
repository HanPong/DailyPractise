#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;

	ch=getchar();//ֻ��ȡһ���ַ�
	while(ch!='\n')
	{
		if(ch==SPACE)
			putchar(ch);//ԭ�����
		else
			putchar(ch+1);
		ch=getchar();//��ȡ��һ���ַ�
	}
		putchar(ch);

		return 0;

	
}