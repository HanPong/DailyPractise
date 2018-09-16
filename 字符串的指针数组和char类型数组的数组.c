//功能：演示指向字符串的指针数组和char类型数组的数组 时间：2018.2.16
#include<stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
	const char *mytalents[LIM]={
		"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"Understanging the C language"
	};//这是指针类型的字符串数组，数组里有5个元素，一个元素代表一个字符串，加双引号
	char yourtalents[LIM][SLEN]={
		"Walking in a straight line",
		"Sleeping",
		"Watching television",
		"Mailing",
		"Reading email"
	};//可看作一个二维数组

	int i;

	puts("Let's compare talents.");
	printf("%-36s%-25s\n","My Talents","Your Talents");
    for(i=0;i<LIM;i++)
	{
		printf("%-36s%-25s",mytalents[i],yourtalents[i]);//-代表左对齐

		printf("\nsizeof mytalents:%d,sizeof yourtalents:%d\n",strlen(mytalents),strlen(yourtalents));

		return 0;

	}


}