#include<stdio.h>
struct stud_type/*学生类型的结构体*/
{
	char name[10];
	int num;
	float score[3];
};
void print(struct stud_type stu);/*调用名为stu的学生类型的结构体函数*/
void main()
{
	struct stud_type stul;/*格式*/
	printf("请输入学生信息（姓名 学号 3门功课成绩）:\n");
	scanf("%s%d%f%f%f",&stul.name,&stul.num,&stul.score[0],&stul.score[1],&stul.score[2]);
	print(stul);
}
void print(struct stud_type stu)
{
	printf("姓名 学号 成绩1 成绩2 成绩3\n");
	printf("%s%5d%10.2f%10.2f%10.2f\n",stu.name,stu.num,stu.score[0],stu.score[1],stu.score[2]);
}
