#include<stdio.h>

int main()
{
	for(int i = 0; i < 10; i++)
	{
		char c[]={'\a', '\b', '\f', '\n', '\r', '\t', '\v', '\1', '\2', '\3', '\4'}; 

		printf("%c\n", c[i]);
	}

	return 0;
}
