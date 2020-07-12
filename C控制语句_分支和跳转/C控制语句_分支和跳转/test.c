#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define COVERAGE 350

int main()
{
	/*
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("请输入温度(按q停止输入): ");
	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
		{
			cold_days++;
		}
	}
	if (all_days != 0)
	{
		printf("%d 天零度以下的天数占比为: %.1f%%\n", all_days, 100 * (float)cold_days / all_days);
	}
	else
		printf("没有数据输入!\n");
	*/

	/*
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == ' ')
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);
	*/

	/*
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);
	*/

	/*
	long num;
	long x;             
	_Bool flag;
	printf("请输入一个数: ");
	while (scanf("%ld",&num)==1)
	{
		for (x = 2, flag = true; (x*x) <= num; x++)
		{
			if (num%x == 0)
			{
				if (x*x != num)
					printf("%ld 的约数为: %ld和%ld\n", num, x, num / x);
				else
					printf("%ld 的约数为: %ld\n", num, x);
				flag = false;
			}
		}
		if (flag)
		{
			printf("%ld 是一个素数\n", num);
		}
		printf("请输入一个数: ");
	}
	printf("程序退出!\n");
	*/

	/*
	const char ch = '.';
	char c;
	int count = 0;
	while ((c = getchar()) != '.')
	{
		if ((ch!='"')&&(ch!='\''))
			count++;
	}
	printf("除双引号和单引号之外的字符数量为: %d", count);
	*/

	/*
	int area;
	int sum;
	printf("请输入需要刷的面积: ");
	while (scanf("%d", &area) == 1)
	{
		sum = area / COVERAGE;
		sum += (area%COVERAGE == 0) ? 0 : 1;
		printf("%d 平方英尺需要 %d 灌油漆\n", area, sum);
		printf("请输入需要刷的面积: ");
	}
	printf("正确退出!\n");
	*/

	/*
	float length, width;
	printf("请输入矩形的长: ");
	while (scanf("%f", &length) == 1)
	{
		printf("矩形的长为: %.2f\n", length);
		printf("请输入矩形的宽: ");
		if (scanf("%f", &width) != 1)
			break;
		printf("矩形的宽为: %.2f\n", width);
		printf("矩形的面积为: %.2f\n", length*width);
		printf("请输入矩形的长: ");
	}
	printf("正确退出!\n");
	*/
	
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch != '\n')
		{
			printf("Step 1\n");
			if (ch == 'b')
			{
				break;
			}
			else if (ch != 'c')
			{
				if (ch != 'h')
					printf("Step 2\n");
				printf("Step 3\n");
			}
		}
	}
	printf("Done \n");
	//printf("Hello world!\n");
	return 0;
}