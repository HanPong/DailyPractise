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
		int workshop;/*�������*/
		char position[10];/*ְ��*/
	}category;/*������*/
}person[N];
void main()
{
    int i;
	for(i=0;i<N;i++)
	{
		printf("�������� ���� �Ա� ���� ������(W��L):\n");
		scanf("%d%s %c%d %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].age,&person[i].label);
		if(person[i].label=='W')/*ע�ⵥ�ַ��õ�����������*/
		{
			printf("�����복���:\n");
			scanf("%d",&person[i].category.workshop);
		}
		else if(person[i].label=='L')
		{
			printf("������ְ��:\n");
			scanf("%s",&person[i].category.position);
			/*�ַ���s ��˫����*/
		}
		else
		{
			printf("�������\n");
			exit(1);/*exit��ʾ�����Ĺ����ǽ��������ִ�У�����1��ʾ�����˳�
			����0��ʾ�����˳�*/
		}

		}
	printf("\n");
	printf("��� ���� �Ա� ���� ������ �����/ְ��\n");
	for(i=0;i<N;i++)/*ע�������ʽ*/
		if(person[i].label=='W')
			printf("%-5d%-8s%2c%6d%7c%8d\n",person[i].num,person[i].name,person[i].sex,person[i].age,person[i].label,person[i].category.workshop);
		else
			printf("%-5d%-8s%2c%6d%7c%12s\n",person[i].num,person[i].name,person[i].sex,person[i].age,person[i].label,person[i].category.position);



}
