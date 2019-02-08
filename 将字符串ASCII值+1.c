#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;

	ch=getchar();//只读取一个字符
	while(ch!='\n')
	{
		if(ch==SPACE)
			putchar(ch);//原样输出
		else
			putchar(ch+1);
		ch=getchar();//获取下一个字符
	}
		putchar(ch);

		return 0;

	
}