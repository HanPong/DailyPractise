#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


void main()
{

	
	printf("lvhongjin zui shuai");
	time_t t;
	struct tm*pt;
	char*pc;
	time(&t);
	pc=ctime(&t);
	printf("ctime:%s",pc);
	pt=localtime(&t);

}
