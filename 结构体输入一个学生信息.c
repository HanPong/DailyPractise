#include<stdio.h>
struct stud_type/*ѧ�����͵Ľṹ��*/
{
	char name[10];
	int num;
	float score[3];
};
void print(struct stud_type stu);/*������Ϊstu��ѧ�����͵Ľṹ�庯��*/
void main()
{
	struct stud_type stul;/*��ʽ*/
	printf("������ѧ����Ϣ������ ѧ�� 3�Ź��γɼ���:\n");
	scanf("%s%d%f%f%f",&stul.name,&stul.num,&stul.score[0],&stul.score[1],&stul.score[2]);
	print(stul);
}
void print(struct stud_type stu)
{
	printf("���� ѧ�� �ɼ�1 �ɼ�2 �ɼ�3\n");
	printf("%s%5d%10.2f%10.2f%10.2f\n",stu.name,stu.num,stu.score[0],stu.score[1],stu.score[2]);
}
