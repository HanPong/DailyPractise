/*编程思想
设初始值为a
下一个数字就是10*a+a
*/
#include<stdio.h>
void main()
{
	int Sn=0,a,n,i=0,t;
	printf("Sn=a+aa+aaa+...+a...aaa\nplease input a,n:");
	scanf("%d%d",&a,&n);
	t=a;
	while(i<n)
	{
		Sn=Sn+t;
		t=10*t+a;
		i++;
	}
	printf("%ld\n",Sn);
}