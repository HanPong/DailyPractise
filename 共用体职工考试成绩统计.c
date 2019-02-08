#define N 2
#include<stdio.h>
#include<stdlib.h>
struct stuff_type
{
	int num;
	char name[10];
	int age;
	union
	{
		int score;
		char mark;
	}category;
}person[N];
void main()
{
	int i,t=0;
	for(i=0;i<N;i++)
	{
		printf("请输入员工的编号，姓名，年龄:\n");
		scanf("%d%s%d",&person[i].num,&person[i].name,&person[i].age);
		if(person[i].age<30)
		{
			printf("请输入笔试成绩:\n");
			scanf("%d",&person[i].category.score);
		}
		else if("person[i].age>=30")
		{
			printf("请输入等级:\n");
			scanf("%c",&person[i].category.mark);
		}
		if(person[i].category.score>60||person[i].category.mark<'C')
			t++;

	}
	printf("编号 姓名 年龄 成绩\n");
	for(i=0;i<N;i++)
	{
		
		if(person[i].age<30)
		printf("person[i].num,person[i].name,person[i].age,person[i].category.score\n");
		else
	    printf("person[i].num,person[i].name,person[i].age,person[i].category.mark\n");
	}
	printf("%d",t);
		


}