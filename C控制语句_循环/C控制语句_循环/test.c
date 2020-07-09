#include<stdio.h>
#include<string.h>
#define SIZE 10
#define PAR 75

double power(double n, int p);
long square(int n);
double Test_9(double a, double b);
double money(int i);

int main()
{
	/*
	int num;
	int sum = 0;
	int status;
	printf("请输入一个整数: ");
	status = scanf("%d", &num);
	while (status == 1)
	{
		sum = sum + num;
		printf("请输入整数: ");
		status = scanf("%d", &num);
	}
	printf("最终相加的结果为: %d", sum);
	*/

	/*
	const int First = 46;         //首重
	const int Next = 20;         //续重
	int ounces, cost;
	for (ounces = 1, cost = First; ounces <= 16; ounces++, cost += Next)
	{
		printf("%-4d $%.2f\n", ounces, cost / 100.0);
	}
	*/

	/*
	const int a = 13;
	int b;
	do
	{
		printf("请输入数字: ");
		scanf("%d", &b);
	} while (a != b);
	printf("输入正确!\n");
	*/

	/*
	const int a = 13;
	int b;
	printf("请输入数字: ");
	scanf("%d", &b);
	while (a != b)
	{
		printf("请输入数字: ");
		scanf("%d", &b);
	}
	printf("输入正确!\n");
	*/

	/*
	int score[SIZE];
	int i, sum = 0;
	int j = 0;
	float average;
	printf("请输入%d位同学的成绩: ", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &score[i]);
		sum = sum + score[i];
		while (i == 9&&j==0)
		{
			printf("输入的成绩为:         ");
			for (j = 0; j < SIZE; j++)
			{
				printf("%d ", score[j]);
			}
			printf("\n");
		}
	}
	average = (float)sum / SIZE;
	printf("总成绩为: %d,  平均分为: %.2f,  分差为: %.2f", sum, average, average - PAR);
	*/

	/*
	double x,z;
	int y;
	printf("请输入底数和指数: ");
	while (scanf("%lf %d", &x, &y) == 2)
	{
		z = power(x, y);
		printf("%lf 的 %d 次方为 %lf\n", x, y, z);
		printf("请输入底数和指数: ");
	}
	printf("正确退出!\n");
	*/

	/*
	复习题6
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	*/

	/*
	//复习题13
	int x;
	printf("请输入一个数: ");
	while (scanf("%d", &x) == 1)
	{
		printf("%d * %d = %ld\n", x, x, square(x));
		printf("请输入一个数: ");
	}
	printf("正确退出!\n");
	*/
	
	/*
	//编程练习1
	char arr[26];
	int j = 0;
	for (int i = 0; i < 26; i++)
	{
		scanf("%c", &arr[i]);
		while (i == 25&&j==0)
		{
			for (j = 0; j < 26; j++)
			{
				printf("%c", arr[j]);
			}
		}
	}
	*/
	
	/*
	//编程练习2
	int i,j;
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <= i + 1; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	*/

	/*
	//编程练习3
	int i, j;
	char ch = 'F';
	for (i = 0; i < 6; i++)
	{
		for (j = 1,ch = 'F'; j <= i + 1; j++,ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	*/
	
	/*
	//编程练习4
	int i, j;
	char ch = 'A';
	for (i = 0; i < 6; i++)
	{
		for (j = 1; j <= i + 1; j++,ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	*/

	/*
	//编程练习5
	char ch;
	int num;
	int i, j,x;
	printf("请输入一个大写字母: ");
	scanf("%c", &ch);
	num = ch - 'A';
	for (i = 0; i < num + 1; i++)
	{
		for (j = 1, ch = 'A'; j <= i + 1; j++, ch++)
		{
			printf("%c", ch);
		}
		for (x = 0,ch = ch -2; x < i; x++,ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	*/

	/*
	//编程练习6
	int down, up;
	printf("请输入打印的最小数和最大数: ");
	scanf("%d %d", &down, &up);
	for (; down <= up; down++)
	{
		printf("%d,  %d*%d=%d, %d*%d*%d=%d.\n", down, down, down, down*down, down, down, down, down*down*down);
	}
	*/

	/*
	//编程练习7
	char arr[20] = "hello";
	int str;
	int i = 0;
	str = strlen(arr);
	for (i = str - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	*/
	
	/*
	//编程练习8
	double a, b;
	printf("请输入两个浮点数: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%lf\n", (a - b) / (a*b));
		printf("请输入两个浮点数: ");
	}
	printf("正确退出!\n");
	*/

	/*
	//编程练习9
	double a, b;
	printf("请输入两个浮点数: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%lf\n", Test_9(a,b));
		printf("请输入两个浮点数: ");
	}
	printf("正确退出!\n");
	*/

	/*
	//编程练习10
	int down, up;
	int sum = 0;
	printf("请输入上限整数和下限整数: ");
	scanf("%d %d", &down, &up);
	while (down < up)
	{
		printf("您输入的整数为: %d-%d\n", down, up);
		sum = 0;
		for (int i = down; i <= up; i++)
		{
			sum = sum + i * i;
		}
		printf("%d - %d 的平方为 %d - %d\n", down, up, down*down, up*up);
		printf("平方和为: %d\n", sum);
		printf("请输入上限整数和下限整数: ");
		scanf("%d %d", &down, &up);
	}
	printf("您输入的上限和下限有误!\n");
	*/

	/*
	//编程练习11
	int arr[20];
	for (int i = 0; i < 8 ;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 7; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}
	*/
	
	/*
	//编程练习12
	int i;
	int n;
	float x = 1.0;
	float y = 1.0;
	float sum = 0.0;
	printf("请输入次数: ");
	scanf("%d", &i);
	while (i > 0)
	{
		sum = 0.0;
		for ( n = 1; n <= i; n++)
		{
			sum = sum + x / n;
		}
		printf("第一个序列前%d项的和为: %lf\n", i, sum);
		sum = 0;
		for (int n = 1; n <= i; n++,y = -1*y)
		{
			sum = sum + y / (float)n;
		}
		printf("第二个序列前%d项的和为: %lf\n", i, sum);
		printf("请输入次数: ");
		scanf("%d", &i);
	}
	printf("输入有误!\n");
	*/

	/*
	//编程练习13
	int arr[8];
	int n = 2;
	int i;
	for (i = 0; i < 8; i++)
	{
		n = 2;
		for (int j = 0; j <=i;j++,n = n*2)
		{			
			arr[i] = 1 * n;
		}
	}
	i = 0;
	do
	{
		printf("%d ", arr[i]);
		i++;
	} while (i < 8);
	*/

	/*
	//编程练习14
	double arr1[8];
	double arr2[8];
	printf("请输入8个double类型的值: ");
	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &arr1[i]);
	}
	arr2[0] = arr1[0];
	for (int j = 1; j < 8; j++)
	{
		arr2[j] = arr2[j - 1] + arr1[j];
	}
	for (int x = 0; x < 8; x++)
	{
		printf("%.2f  ", arr1[x]);
	}
	printf("\n");
	for (int x = 0; x < 8; x++)
	{
		printf("%.2f  ", arr2[x]);
	}
	*/

	/*
	//编程练习15
	char arr[255];
	int i = 0;
	while (scanf("%c",&arr[i])==1&&arr[i]!='\n')
	{
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%c", arr[j]);
	}*/

	/*
	//编程练习16
	int i = 1;
	while ((10*i)>money(i))
	{
		i++;
	}
	printf("第%d年投资额反超!",i);
	*/

	/*
	//编程练习17
	int i = 1;
	double balance = 100;
	while (balance>10)
	{
		balance = balance + (balance*0.08);
		balance -= 10;
		i++;
	}
	printf("第%d年会取完所有的钱!",i);
	*/

	/*
	//编程练习18
	int i = 0;
	int sum = 5;
	do
	{
		i++;
		sum = sum - i;
		sum = sum * 2;
		printf("第%d周有%d个朋友.\n", i, sum);
	} while (sum <= 150);
	*/
	//printf("Hello world!\n");
	return 0;
}
	
double power(double n, int p)
{
	double pow = 1.00;
	int i = 1;
	for (i = 1; i <= p; i++)
		pow = pow * n;
	return pow;
}

long square(int n)
{
	return n * n;
}

double Test_9(double a, double b)
{
	double c;
	c = (a - b) / (a*b);
	return c;
}

double money(int i)
{
	double Money = 5.0;
	if (i == 1)
	{
		Money = 5;
	}
	else
	{
		for (int j = 0; j < i; j++)
		{
			Money = (Money + Money / 0.05) * 0.05;
		}
	}
	return Money;
}