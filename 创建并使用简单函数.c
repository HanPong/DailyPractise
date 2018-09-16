//功能：创建一个在一行打印40个星号的程序，并在程序开头和结尾调用该函数
//时间：2018.2.12
/*#include<stdio.h>
//下面三行是预处理器指令
#define NAME "Hanpeng,INC."/
#define ADDRESS "Heilongjiang,Shuangyashan"
#define PLACE "#61,part1,501"
#define WIDTH 40//星号数量

void starbar(void);//第一个void代表函数没有返回值，第二个void代表函数不带参数
int main(void)
{
	starbar();
	printf("%s\n",NAME);
	printf("%s\n",ADDRESS);
	printf("%s\n",PLACE);
	starbar();

	return 0;

}
void starbar(void)
{
	int count;

	for(count=1;count<WIDTH;count++)
		putchar('*');
	putchar('\n');
}*/
//以上程序经过测试，没有问题

//功能：使上面的文字居中 时间：2018.2.12
#include<stdio.h>
#include<string.h>//strlen函数原型
#define NAME "GIAGTHINK,INC."
#define ADDRESS "101 Megapolis,CA 94904"
#define PLACE "Megabuck Plaza,9"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch,int num);//第一个void代表函数没有返回值，第二个void代表函数的参数，一个是字符型，一个是整型
int main(void)
{

	int spaces;


	show_n_char('*',WIDTH);
	putchar('\n');
	show_n_char(SPACE,12);
	printf("%s\n",NAME);
	spaces=(WIDTH-strlen(ADDRESS))/2;//计算要跳过多少个空位 strlen函数测量占了多少空位

	show_n_char(SPACE,spaces);
	printf("%s\n",ADDRESS);
	show_n_char(SPACE,(WIDTH-strlen(PLACE))/2);

	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);
	
	putchar('\n');

	return 0;

}
void show_n_char(char ch,int num)
{
	int count;

	for(count=1;count<=num;count++)
		putchar(ch);
}





















