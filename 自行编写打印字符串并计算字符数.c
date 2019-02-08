//功能：自行编写打印字符串并计算字符数 时间：2018.2.17
#include<stdio.h>
#define LETTERS "abc defg edhg"//第一种定义形式
int put2(const char *string);
void main()
{
	const char x[4]="ABS";//第二种定义形式
    put2(LETTERS);//第一次调用
	put2(x);//第二次调用
	put2("HanPeng");//第三种定义形式
}
int put2(const char *string)
{
	int count=0;
	while(*string)//若*string，字符串第一个不为0，就为真，向下运行
	{
		putchar(*string++);//向下运行，打印字符
		count++;

	}
	putchar('\n');
	printf("%d\n",count);

	return(count);
}