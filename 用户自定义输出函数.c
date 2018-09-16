#include<stdio.h>
void put1(const char *);
int put2(const char *);

int main(void)
{
	put1("If I'd as much money");
	put1("as I could spend,\n");
	//put1和put函数不同的地方在于put1不会在字符串后面自动加\n
	printf("I count %d characters.\n");

	put2("I never would cry old chairs to mend.");

	return 0;
}

void put1(const char *string)
{
	while(*string)
		putchar(*string++);

}
int put2(const char *string)
{
	int count=0;
	while(*string)
	{
		putchar(*string);
		count++;

	}
	putchar('\n'); 
	return(count);
}