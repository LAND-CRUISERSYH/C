#include<stdio.h>

char get_first();

int main()
{
	/*
	//编程练习1
	int count = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		count++;
	}
	printf("字符的个数为: %d", count);
	*/
	//printf("Hello world!\n");

	/*
	//编程练习2
	char ch;
	int count = 0;
	while ((ch = getchar()) != -1)
	{
		if (ch >= 32 && ch <= 127)
		{
			printf("%c-%d ", ch, ch);
			count++;
		}
		else if (ch == '\n')
		{
			printf("%c-%d ", ch, ch);
			count++;
		}
		else if (ch == '\t')
		{
			printf("%c-%d ", ch, ch);
			count++;
		}
		else if (ch < 9)
		{
			printf("^%c-%d ", ch + 64, ch);
			count++;
		}
		else if (ch > 10)
		{
			printf("^%c-%d ", ch + 64, ch);
			count++;
		}
		if (count % 10 == 0)
			printf("\n");
	}
	*/
	
	/*
	//编程练习3
	int Cap_letter = 0;
	int Lower_letter = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch >= 65 && ch <= 90)
			Cap_letter++;
		else if (ch >= 97 && ch <= 122)
			Lower_letter++;
	}
	printf("大写字母的个数为: %d\n", Cap_letter);
	printf("小写字母的个数为: %d\n", Lower_letter);
	*/

	/*
	//编程练习4
	char ch;
	float sum = 0;
	float n = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
		{
			n++;
			continue;
		}
		else
			sum++;
	}
	printf("平均每个单词的字母数: %.2f", sum / n);
	*/

	/*
	//编程练习5
	char ch;
	int n = 66;
	int Max = 100;
	int Min = 1;
	printf("我猜是%d!\n",n);
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'X')
		{
			Min = n;
			n = (Max + Min) / 2;
			printf("是%d吗？\n", n);
		}
		else if (ch == 'D')
		{
			Max = n;
			n = (Max + Min) / 2;
			printf("是%d吗？\n", n);
		}
		else
			printf("你输入的我不认识抱歉!\n");
		getchar();
	}
	*/

	/*
	//编程练习6
	printf("%c", get_first());
	*/

	/*
	//编程练习7
	char ch;
	float hours;
	while (1)
	{
		printf("*******************************************\n");
		printf("a) $8.75/hr                               b) $9.33/hr\n");
		printf("c) $10.00/hr                             d) $11.20/hr\n");
		printf("q) quit\n");
		printf("*******************************************\n");
		printf("请输入您的工资等级: ");
		ch = getchar();
		if (ch == 'q')
			break;
		else if (ch>='a'&&ch<='d')
		{
			printf("请输入您的工作小时数: ");
			getchar();
			scanf("%f", &hours);
			getchar();
			switch (ch)
			{
			case 'a':
				printf("您的工资为: %.2f\n", 8.75*hours);
				if (8.75*hours <= 300)
					printf("税金为: %.2f\n", 8.75*hours*0.15);
				else if (8.75*hours > 300 && 8.75*hours <= 450)
					printf("税金为: %.2f\n", 300 * 0.15 + (8.75*hours - 300)*0.2);
				else
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (8.75*hours - 450)*0.25);
				break;
			case 'b':
				printf("您的工资为: %.2f\n", 9.33*hours);
				if (9.33*hours <= 300)
					printf("税金为: %.2f\n", 9.33*hours*0.15);
				else if (9.33*hours > 300 && 9.33*hours <= 450)
					printf("税金为: %.2f\n", 300 * 0.15 + (9.33*hours - 300)*0.2);
				else
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (9.33*hours - 450)*0.25);
				break;
			case 'c':
				printf("您的工资为: %.2f\n", 10.00*hours);
				if (10.00*hours <= 300)
					printf("税金为: %.2f\n", 10.00*hours*0.15);
				else if (10.00*hours > 300 && 10.00*hours <= 450)
					printf("税金为: %.2f\n", 300 * 0.15 + (10.00*hours - 300)*0.2);
				else
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (10.00*hours - 450)*0.25);
				break;
			case 'd':
				printf("您的工资为: %.2f\n",11.20*hours);
				if (11.20*hours <= 300)
					printf("税金为: %.2f\n", 11.20*hours*0.15);
				else if (11.20*hours > 300 && 11.20*hours <= 450)
					printf("税金为: %.2f\n", 300 * 0.15 + (11.20*hours - 300)*0.2);
				else
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (11.20*hours - 450)*0.25);
				break;
			}
		}
		else
			printf("请输入正确的选项!\n");
	}
	printf("正确退出!\n");
	*/
	
	//编程练习8
	float num1;
	float num2;
	int flag1, flag2;
	char ch;
	while (1)
	{
		printf("*********************************\n");
		printf("a) +                                     s) -\n");
		printf("m) *                                      d) /\n");
		printf("q) quit\n");
		printf("*********************************\n");
		printf("请输入您的选项: ");
		ch = getchar();
		if (ch == 'q')
			break;
		printf("请输入第一个数字: ");
		flag1 = scanf("%f", &num1);
		getchar();
		printf("请输入第二个数字: ");
		flag2 = scanf("%f", &num2);
		getchar();
		if (flag1 != 1 || flag2 != 1)
		{
			printf("输入有误,请重新输入!\n");
			continue;
		}
		switch (ch)
		{
		case 'a':
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
			break;
		case 's':
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
			break;
		case 'm':
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
			break;
		case 'd':
			while (1)
			{
				if (num2 == 0)
				{
					printf("请重新输入第二个数: ");
					scanf("%f", &num2);
					getchar();
				}
				else
				{
					printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
					break;
				}
			}
		}
	}
	printf("正确退出!\n");
	return 0;
}

char get_first()
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ')
			continue;
		else
			break;
	}
	return ch;
}