#include<stdio.h>

int main()
{
	int i=0;//even in c c++ java variables are block scoped
	for(;i<10;i++)
	{
		printf("%d\n",i);
	}
	while(i<=20)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
