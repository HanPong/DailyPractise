#include<stdio.h>
#include<math.h>
void main()
{
	int x,y;
	scanf("%d",&x);
	if(0<=x&&0<10)
		printf("y=%f",sin(x));
	else
		switch((int)x/10)/*注意取整*/
	{
		case 1:printf("y=%f",cos(x));
			break;
        case 2:printf("y=%f",exp(x)-1);
			break;
		case 3:printf("y=%f",log(x+1));
			break;
		default:printf("无定义");

	}
}