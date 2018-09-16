#include<stdafx.h>
#include<math.h>
void main()
{
	int a;
	scanf_s("%d",&a);
	if(a<60)
		printf("fail\n");
	else
	switch ((int)a/10)
	{
	case 10:
	case 9:printf("excellent\n");
		break;
	case 8:printf("good\n");
		break;
	case 7:printf("middle\n");
		break;
	case 6:printf("pass\n");
		break;
	}

}