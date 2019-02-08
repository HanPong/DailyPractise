0#include<stdio.h>
struct stud_type
{
	char name[10];
	int num;
	float score[3];
};
void print(struct stud_type stu[],int n);
void main()
{
	int i,n;
	struct stud_type stul[30];
	scanf("%d",&n);
		for(i=0;i<n;i++)
	scanf("%s%d%f%f%f",&stul[i].name,&stul[i].num,&stul[i].score[0],&stul[i].score[1],&stul[i].score[2]);
	print(stul,n);/*n用来说明学生个数，循环的时候用，Stul是结构体的名字*/
}
void print(struct stud_type stu[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%-8s%8d%8.2f%8.2f%8.2f\n",stu[i].name,stu[i].num,stu[i].score[0],stu[i].score[1],stu[i].score[2]);/*输出换行*/

}
