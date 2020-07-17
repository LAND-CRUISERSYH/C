#pragma once
#include<stdio.h>
#include"test_2.h"

void set_mode(int m)
{
	if (m != 0 && m != 1)
		printf("输入不正确!使用上一次的模式: %d\n", Mode);
	else
		Mode = m;
}
void get_info()
{
	if (Mode == 0)
	{
		printf("请输入距离: ");
		scanf("%f", &length);
		printf("请输入耗油量: ");
		scanf("%f", &oil);
	}
	else
	{
		printf("请输入距离: ");
		scanf("%f", &length);
		printf("请输入耗油量: ");
		scanf("%f", &oil);
	}
}
void show_info()
{
	if (Mode == 0)
	{
		printf("您的油耗: %.2f升/百公里\n", oil / length);
	}
	else
	{
		printf("您的油耗: %.2f加仑/英里\n", oil / length);
	}
}
