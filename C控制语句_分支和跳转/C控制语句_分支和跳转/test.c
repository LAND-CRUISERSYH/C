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
	printf("�������¶�(��qֹͣ����): ");
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
		printf("%d ��������µ�����ռ��Ϊ: %.1f%%\n", all_days, 100 * (float)cold_days / all_days);
	}
	else
		printf("û����������!\n");
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
	printf("������һ����: ");
	while (scanf("%ld",&num)==1)
	{
		for (x = 2, flag = true; (x*x) <= num; x++)
		{
			if (num%x == 0)
			{
				if (x*x != num)
					printf("%ld ��Լ��Ϊ: %ld��%ld\n", num, x, num / x);
				else
					printf("%ld ��Լ��Ϊ: %ld\n", num, x);
				flag = false;
			}
		}
		if (flag)
		{
			printf("%ld ��һ������\n", num);
		}
		printf("������һ����: ");
	}
	printf("�����˳�!\n");
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
	printf("��˫���ź͵�����֮����ַ�����Ϊ: %d", count);
	*/

	/*
	int area;
	int sum;
	printf("��������Ҫˢ�����: ");
	while (scanf("%d", &area) == 1)
	{
		sum = area / COVERAGE;
		sum += (area%COVERAGE == 0) ? 0 : 1;
		printf("%d ƽ��Ӣ����Ҫ %d ������\n", area, sum);
		printf("��������Ҫˢ�����: ");
	}
	printf("��ȷ�˳�!\n");
	*/

	/*
	float length, width;
	printf("��������εĳ�: ");
	while (scanf("%f", &length) == 1)
	{
		printf("���εĳ�Ϊ: %.2f\n", length);
		printf("��������εĿ�: ");
		if (scanf("%f", &width) != 1)
			break;
		printf("���εĿ�Ϊ: %.2f\n", width);
		printf("���ε����Ϊ: %.2f\n", length*width);
		printf("��������εĳ�: ");
	}
	printf("��ȷ�˳�!\n");
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