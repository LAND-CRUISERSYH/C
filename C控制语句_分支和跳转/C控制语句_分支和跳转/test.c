#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
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
	
	/*
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
	*/

	/*
	char ch;
	while ((ch = getchar())!='#')
	{
		if (ch != '\n')
		{
			printf("Step 1\n");
			if (ch == 'b')
				break;
			else if(ch != 'c')
			{
				if (ch != 'h')
					printf("Step 2\n");
				printf("Step 3\n");
			}
		}
	}
	printf("Done\n");
	*/

	/*
	//编程练习1
	char ch;
	int num_1 = 0, num_2 = 0, num_3 = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			num_1++;
		else if (ch == '\n')
			num_2++;
		else
			num_3++;
	}
	printf("空格字符的数量为: %d\n", num_1);
	printf("换行字符的数量为: %d\n", num_2);
	printf("其他字符的数量为: %d\n", num_3);
	*/

	/*
	//编程练习2
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if ((count!=0)&&(count%8==0))
			printf("\n");
		printf("(%c,%d)", ch, ch);
		count++;
	}
	*/
	
	/*
	//编程练习3
	int get_int;
	int num_even = 0;			//偶数个数
	float sum_even = 0;
	int num_odd = 0;			//奇数个数
	float sum_odd = 0;
	while ((scanf("%d", &get_int)))
	{
		if (get_int != 0)
		{
			if (get_int % 2 == 0)
			{
				num_even++;
				sum_even += get_int;
			}
			else
			{
				num_odd++;
				sum_odd += get_int;
			}
		}
		else
			break;
	}
	printf("偶数的个数为: %d,平均值为: %.2f\n", num_even, sum_even / num_even);
	printf("奇数的个数为: %d,平均值为: %.2f\n", num_odd, sum_odd / num_odd);
	printf("正确退出!");
	*/

	/*
	//编程练习4
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			count++;
		}
		else if (ch == '!')
		{
			putchar(ch);
			count++;
		}
			putchar(ch);
	}
	printf("\n共替换了%d次。", count);
	*/

	/*
	//编程练习5
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			count++;
			putchar(ch);
			continue;
		case '!':
			putchar(ch);
			count++;
		}
		putchar(ch);
	}
	printf("\n共替换了%d次",count);
	*/

	/*
	//编程练习6
	char ch;
	int count = 0;
	char sh = getchar();
	while ((ch = getchar()) != '#')
	{
		if ((ch == 'i') && (sh == 'e'))
			count++;
		sh = ch;
	}
	printf("共出现了%d次",count);
	*/

	/*
	//编程练习7
	float hours;
	float wages = 0;
	float taxes = 0;
	printf("请输入一周工作的小时数: ");
	scanf("%f", &hours);
	while (hours >= 0)
	{
		if (hours >= 40)
		{
			hours = (float)hours * 1.5;
			printf("工资总额为: %.2f\n", hours * 1000);
			printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25);
			printf("净收入为: %.2f\n", (hours * 1000) - (300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25));
		}
		else
		{
			printf("工资总额为: %.2f\n", hours * 1000);
			if (hours*1000 <= 300)
			{
				printf("税金为: %.2f\n", hours*0.15 * 1000);
				printf("净收入为: %.2f\n", hours * 1000 - hours * 1000 * 0.15);
			}
			else if (hours*1000 > 300 && hours*1000 <= 450)
			{
				printf("税金为: %.2f\n", 300*0.15+(hours*1000-300)*0.2);
				printf("净收入为: %.2f\n", hours * 1000 - (300 * 0.15 + (hours * 1000 - 300)*0.2));
			}
			else
			{
				printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25);
				printf("净收入为: %.2f\n", (hours * 1000) - (300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25));
			}
		}
		printf("请输入一周工作的小时数: ");
		scanf("%f", &hours);
	}
	printf("正确退出!\n");
	*/

	/*
	//编程练习8
	int choice = 0;
	float hours;
	float wages = 0;
	float taxes = 0;
	while (choice!=5)
	{
		printf("**********************************************\n");
		printf("1) $8.75/hr                     2)$9.33/hr  \n");
		printf("3) $10.00/hr                    4)$11.20/hr\n");
		printf("5) quit\n");
		printf("**********************************************\n");
		printf("请选择您的工资等级: ");
		if (scanf("%d", &choice) == 1);
		{
			switch (choice)
			{
			case 1:
				printf("请输入您的工作小时数: ");
				scanf("%f", &hours);
				printf("总收入为: %.2f\n", hours*8.75);
				if (hours * 8.75 <= 300)
				{
					printf("税金为: %.2f\n", hours*0.15 * 8.75);
					printf("净收入为: %.2f\n", hours * 8.75 - hours * 8.75 * 0.15);
				}
				else if (hours * 8.75 > 300 && hours * 8.75 <= 450)
				{
					printf("税金为: %.2f\n", 300 * 0.15 + (hours * 8.75 - 300)*0.2);
					printf("净收入为: %.2f\n", hours * 8.75 - (300 * 0.15 + (hours * 8.75 - 300)*0.2));
				}
				else
				{
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 8.75 - 450)*0.25);
					printf("净收入为: %.2f\n", (hours * 8.75) - (300 * 0.15 + 150 * 0.2 + (hours * 8.75 - 450)*0.25));
				}
				continue;
			case 2:
				printf("请输入您的工作小时数: ");
				scanf("%f", &hours);
				printf("总收入为: %.2f\n", hours*9.33);
				if (hours * 9.33 <= 300)
				{
					printf("税金为: %.2f\n", hours*0.15 * 9.33);
					printf("净收入为: %.2f\n", hours * 9.33 - hours * 9.33 * 0.15);
				}
				else if (hours * 9.33 > 300 && hours * 9.33 <= 450)
				{
					printf("税金为: %.2f\n", 300 * 0.15 + (hours * 9.33 - 300)*0.2);
					printf("净收入为: %.2f\n", hours * 9.33 - (300 * 0.15 + (hours * 9.33 - 300)*0.2));
				}
				else
				{
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 9.33 - 450)*0.25);
					printf("净收入为: %.2f\n", (hours * 9.33) - (300 * 0.15 + 150 * 0.2 + (hours * 9.33 - 450)*0.25));
				}
				continue;
			case 3:
				printf("请输入您的工作小时数: ");
				scanf("%f", &hours);
				printf("总收入为: %.2f\n", hours*10.00);
				if (hours * 10.00 <= 300)
				{
					printf("税金为: %.2f\n", hours*0.15 * 10.00);
					printf("净收入为: %.2f\n", hours * 10.00 - hours * 10.00 * 0.15);
				}
				else if (hours *10.00 > 300 && hours * 10.00 <= 450)
				{
					printf("税金为: %.2f\n", 300 * 0.15 + (hours * 10.00 - 300)*0.2);
					printf("净收入为: %.2f\n", hours * 10.00 - (300 * 0.15 + (hours * 10.00 - 300)*0.2));
				}
				else
				{
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 10.00 - 450)*0.25);
					printf("净收入为: %.2f\n", (hours * 10.00) - (300 * 0.15 + 150 * 0.2 + (hours * 10.00 - 450)*0.25));
				}
				continue;
			case 4:
				printf("请输入您的工作小时数: ");
				scanf("%f", &hours);
				printf("总收入为: %.2f\n", hours*11.20);
				if (hours * 11.20 <= 300)
				{
					printf("税金为: %.2f\n", hours*0.15 * 11.20);
					printf("净收入为: %.2f\n", hours * 11.20 - hours * 11.20 * 0.15);
				}
				else if (hours * 11.20 > 300 && hours * 11.20 <= 450)
				{
					printf("税金为: %.2f\n", 300 * 0.15 + (hours * 11.20 - 300)*0.2);
					printf("净收入为: %.2f\n", hours * 11.20 - (300 * 0.15 + (hours * 11.20 - 300)*0.2));
				}
				else
				{
					printf("税金为: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 11.20 - 450)*0.25);
					printf("净收入为: %.2f\n", (hours * 11.20) - (300 * 0.15 + 150 * 0.2 + (hours * 11.20 - 450)*0.25));
				}
				continue;
			case 5:
				printf("正确退出!\n");
				break;
			}
		}
		printf("请输入正确的选项!\n");
	}
	*/
	
	/*
	//编程练习9
	int num;
	int flag;
	int n = 0;
	while (1)
	{
		printf("请输入一个正整数: ");
		flag = scanf("%d", &num);
		if ((flag==1)&&(num>0))
		{
			for (int i = 2; i <= num; i++)
			{
				n = 0;
				for (int j = 1; j <= i; j++)
				{
					if (i%j == 0)
						n++;
				}
				if (n == 2)
					printf("%d \n", i);
			}
		}
		else if ((flag==0)||(num<0))
		{
			printf("请正确输入!\n");
			continue;
		}
		else if (num == 0)
			break;
	}
	printf("正确退出!\n");
	*/
	
	/*
	//编程练习10
	char ch;
	float wages;
	while (1)
	{
		printf("请输入您的工资: ");
		scanf("%f", &wages);
		if (wages == 0)
			break;
		getchar();
		printf("请输入您的类别: ");
		ch = getchar();
		switch (ch)
		{
		case'A':		//单身
			if (wages <= 17850)
				printf("税金为: %.2f\n", wages*0.15);
			else
				printf("税金为: %.2f\n", 17850 * 0.15 + (wages - 17850)*0.28);
			continue;
		case'B':		//户主
			if (wages <= 23900)
				printf("税金为: %.2f\n", wages*0.15);
			else
				printf("税金为: %.2f\n", 23900 * 0.15 + (wages - 23900)*0.28);
			continue;
		case'C':		//已婚共有
			if (wages <= 29750)
				printf("税金为: %.2f\n", wages*0.15);
			else
				printf("税金为: %.2f\n", 29750 * 0.15 + (wages - 29750)*0.28);
			continue;
		case'D':		//已婚离异
			if (wages <= 14875)
				printf("税金为: %.2f\n", wages*0.15);
			else
				printf("税金为: %.2f\n", 14875 * 0.15 + (wages - 14875)*0.28);
			continue;
		}
	}
	printf("正确退出!");
	*/

	//编程练习11
	float Artichoke;              //洋蓟
	float sum_a = 0;
	float beet;						//甜菜
	float sum_b = 0;
	float carrot;					//胡萝卜
	float sum_c = 0;
	char ch;
	while (1)
	{
		printf("**************************************\n");
		printf("a)洋蓟: 2.05                      b)甜菜: 1.15\n");
		printf("c)胡萝卜: 1.09                   q)退出订购 \n");
		printf("**************************************\n");
		printf("请输入您要订购的蔬菜: ");
		ch = getchar();
		if (ch == 'q')
		{
			break;
		}
		else
		{
			switch (ch)
			{
			case 'a':
				printf("请输入您要预定的磅数: ");
				getchar();
				scanf("%f", &Artichoke);
				getchar();
				sum_a = sum_a + Artichoke;
				break;
			case 'b':
				printf("请输入您要预定的磅数: ");
				getchar();
				scanf("%f", &beet);
				getchar();
				sum_b = sum_b + beet;
				break;
			case 'c':
				printf("请输入您要预定的磅数: ");
				getchar();
				scanf("%f", &carrot);
				getchar();
				sum_c = sum_c + carrot;
				break;
			}
		}
	}
	if (sum_a != 0 || sum_b != 0 || sum_c != 0)
	{
		printf("订购蔬菜的总重量为: %.2f\n", sum_a + sum_b + sum_c);
		printf("洋蓟: %.2f磅\n", sum_a);
		printf("甜菜: %.2f磅\n", sum_b);
		printf("胡萝卜: %.2f磅\n", sum_c);
		printf("订购蔬菜的费用为: %.2f\n", sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09);
		if ((sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) >= 100)
		{
			printf("订单的折扣为: %.2f\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05);
			if ((sum_a + sum_b + sum_c) <= 5)
			{
				printf("运费包装费为6.5美元!\n");
				printf("费用总额为: %.2f美元!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) - (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05 + 6.5);
			}
			else if ((sum_a + sum_b + sum_c) > 5 && (sum_a + sum_b + sum_c) <= 20)
			{
				printf("运费包装费为14美元!\n");
				printf("费用总额为: %.2f美元!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) - (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05 + 14);
			}
			else
			{
				printf("运费包装费为%.2f美元!\n", 14 + (sum_a + sum_b + sum_c - 20)*0.5);
				printf("费用总额为: %.2f美元!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) - (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05 + (14 + (sum_a + sum_b + sum_c - 20)*0.5));
			}
		}
		else
		{
			printf("订单小于100美元，无折扣!\n");
			if ((sum_a + sum_b + sum_c) <= 5)
			{
				printf("费用总额为: %.2f美元!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) + 6.5);
			}
			else if ((sum_a + sum_b + sum_c) > 5 && (sum_a + sum_b + sum_c) <= 20)
			{
				printf("运费包装费为14美元!\n");
				printf("费用总额为: %.2f美元!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) + 14);
			}
			else
			{
				printf("运费包装费为%.2f美元!\n", 14 + (sum_a + sum_b + sum_c - 20)*0.5);
				printf("费用总额为: %.2f美元!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) + (14 + (sum_a + sum_b + sum_c - 20)*0.5));
			}
		}
	}
	else
		printf("正确退出!\n");
	//printf("Hello world!\n");
	return 0;
}