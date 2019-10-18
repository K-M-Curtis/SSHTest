#include<stdio.h>

int main(void)
{
	int a, b, sub;
	sub = a - b;
	
	if(a>b)
	{
		sub = a - b;
	}
	else
	{
		sub = b - a;
	}
	
	printf("abs(sub)= %d\n", sub);
	printf("AAAAAAAAABBBBBBBBBBBCCCCCCCC\n");
	
	return 0;
}
