//���ܣ���ʾָ���ַ�����ָ�������char������������� ʱ�䣺2018.2.16
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
	};//����ָ�����͵��ַ������飬��������5��Ԫ�أ�һ��Ԫ�ش���һ���ַ�������˫����
	char yourtalents[LIM][SLEN]={
		"Walking in a straight line",
		"Sleeping",
		"Watching television",
		"Mailing",
		"Reading email"
	};//�ɿ���һ����ά����

	int i;

	puts("Let's compare talents.");
	printf("%-36s%-25s\n","My Talents","Your Talents");
    for(i=0;i<LIM;i++)
	{
		printf("%-36s%-25s",mytalents[i],yourtalents[i]);//-���������

		printf("\nsizeof mytalents:%d,sizeof yourtalents:%d\n",strlen(mytalents),strlen(yourtalents));

		return 0;

	}


}