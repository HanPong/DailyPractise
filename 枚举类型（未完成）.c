/*�Ӽ�������һ����������ʾ��֮��Ӧ������ֵ*/
#include<stdio.h>
void main()
{
	enum week_type
	{
		mon=1,tue,wed,thu,fri,sta,sun
	}workday;
	int i;
	do
	{
		printf("Please input integer:\n");
		scanf("%d",&i);
		workday=(enum week_type)i;
		switch(workday)
		{
		case sun:printf("Sunday\n");
			break;
		case mon:printf("Monday\n");
			break;
			case                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                                                                                       
		}
	}
}