#define N 2
#include<stdio.h>
#include<stdlib.h>
struct memb_type
{
	int num;
	char name[10];
	char sex;
	int age;
	char label;
	union
	{
		int workshop;/*车间号码*/
		char position[10];/*职务*/
	}category;/*类别分类*/
}person[N];
void main()
{
    int i;
	for(i=0;i<N;i++)
	{
		printf("请输入编号 姓名 性别 年龄 身份类别(W或L):\n");
		scanf("%d%s %c%d %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].age,&person[i].label);
		if(person[i].label=='W')/*注意单字符用单引号括起来*/
		{
			printf("请输入车间号:\n");
			scanf("%d",&person[i].category.workshop);
		}
		else if(person[i].label=='L')
		{
			printf("请输入职务:\n");
			scanf("%s",&person[i].category.position);
			/*字符串s 加双引号*/
		}
		else
		{
			printf("输入错误！\n");
			exit(1);/*exit表示函数的功能是结束程序的执行，参数1表示出错退出
			参数0表示正常退出*/
		}

		}
	printf("\n");
	printf("编号 姓名 性别 年龄 身份类别 车间号/职务\n");
	for(i=0;i<N;i++)/*注意输出格式*/
		if(person[i].label=='W')
			printf("%-5d%-8s%2c%6d%7c%8d\n",person[i].num,person[i].name,person[i].sex,person[i].age,person[i].label,person[i].category.workshop);
		else
			printf("%-5d%-8s%2c%6d%7c%12s\n",person[i].num,person[i].name,person[i].sex,person[i].age,person[i].label,person[i].category.position);



}
