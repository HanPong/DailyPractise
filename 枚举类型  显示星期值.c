#include<stdio.h>
void main()
{
	enum week_type
	{
		mon=1,tue,wed,thu,fri,sta,sun
	}workday;/*名为workday的week类型的枚举体*/
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
		case tue:printf("Tusday\n");
			break;
		case wed:printf("Wednesday\n");
			break;
		case thu:printf("Thursday\n");
			break;
		case fri:printf("Friday\n");
			break;
		case sta:printf("Saturday\n");
			break;
		}

	}
	while(i!=-1);

}