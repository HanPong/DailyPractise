#define N 10
#include<studio.h>
#include<string.h>
struct stud_type
{
	char name[10];
	int num;
	int score;
};
void sort(struct stud_type stu[]);
void main()
{
	int i;
	struct stud_type stu[N];
	printf("请输入%d名学生信息（姓名 学号 成绩）：\n",N);
	for(i=0;i<10;i++)
		scanf("%s%d%d",&stu[i].name,&stu[i].num,&stu[i].score);
	sort(stu);
	printf("排序后：\n")
		for(i=0;i<N;i++)
			printf("-8s%5d%5d\n",stu[i].name,stu[i].num,stu[i].score);
}
void sort(struct stud_type stu[])
{
	int i,k,j;
	struct stud_type t;

}