//在这里拷贝的是地址，而不是字符串本身
#include<stdio.h>
int main(void)
{
	const char *mesg="Don't be a fool!";
	const char *copy;

	copy=mesg;//拷贝地址
	printf("%s\n",copy);
	printf("mesg=%s;%mesg=%p;value=%p\n",mesg,&mesg,mesg);
	printf("copy=%s;%copy=%p;copy=%p\n",copy,&copy,copy);

	return 0;
}
//由上面的这个例子可以知道：地址的值发生了改变，然而字符串本身的地址没有发生改变
//所以在这个程序里，拷贝的是地址，而不是字符串本身