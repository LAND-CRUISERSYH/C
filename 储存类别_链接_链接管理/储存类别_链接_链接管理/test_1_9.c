#include<stdio.h>
//#include"test_2.h"

void func1(int *p);

int main()

{
	/*
	int mode;
	printf("请选择模式: 0为美式,1为公制: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("请选择模式: 0为美式,1为公制,-1退出: ");
		scanf("%d", &mode);
	}
	printf("退出!");
	*/
	/*
	//编程练习1
	int num;
	printf("请猜一个数字: ");
	scanf("%d", &num);
	while (num != 56)
		func1(&num);
	printf("输入正确!\n");
	*/
	return 0;
}

void func1(int *p)
{
	printf("输入不正确，请重新输入: ");
	scanf("%d", p);
}