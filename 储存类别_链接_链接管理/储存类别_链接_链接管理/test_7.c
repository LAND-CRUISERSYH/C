#include<stdio.h>
#include<stdlib.h>
#include"test_7.h"

void func_total(int n,int dices,int sides)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < dices; j++)
		{
			total = total + rand() % 6 + 1;
		}
		printf("%d ", total);
	}
	putchar('\n');
}