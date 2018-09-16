#include<stdio.h>
void main()
{
	enum col_type
	{
		re=1,ye,bl,gr,bla,wh
	}color;
	int i;
	do
	{
	printf("请输入对应颜色的数字:\n");
	scanf("%d",&i);
	
		color=(enum col_type)i;
		switch(color)
		{
		case re:printf("red\n");
			break;
		case ye:printf("yellow\n");
			break;
		case bl:printf("blue\n");
			break;
		case gr:printf("green\n");
			break;
		case bla:printf("black\n");
			break;
		case wh:printf("white\n");
			break;

		}
	}
	while(i!=-1);

}