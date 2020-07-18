#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//#include"test_2.h"
//#include"test_7.h"

int count = 0;

void func1(int *p);
int set_mode1(int mode,int last_mode);
void get_info1(int mode);
void func4();
int *make_array(int size, int value);
void show_array(int *p, int size);

int main()

{

	//编程练习9
	int number;
	int length;
	char temp[40];
	printf("How many words do you wish to enter?");
	while (scanf("%d", &number) !=1 )
	{
		while (getchar() != '\n')
			continue;
		printf("an integer,please\n");
	}
	printf("Enter %d words now: \n", number);
	char **p = (char **)malloc(number * sizeof(char *));
	for (int i = 0; i < number; i++)
	{
		scanf("%s", temp);
		length = strlen(temp);
		*(p + i) = (char *)malloc((length + 1) * sizeof(char));
		strcpy(*(p + i), temp);
	}
	printf("Here are you word: \n");
	for (int i = 0; i < number; i++)
	{
		puts(*(p + i));
		free(*(p + i));
	}
	free(p);
	/*
	//编程练习8
	int *pa;
	int size;
	int value;
	printf("请输入数组元素的个数: ");
	while(scanf("%d", &size) == 1 && size > 0)
	{
		printf("请输入初始化数组的值: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("请输入数组元素的个数(输入q退出): ");
	}
	printf("退出!");
	*/
	/*
	//编程练习7
	int dice,sides;
	srand((unsigned int)time(0));
	printf("请输入需要多少种可能: ");
	while (scanf("%d", &count) == 1)
	{
		printf("请输入骰子数和面数: ");
		scanf("%d %d", &dice,&sides);
		printf("有%d种可能,%d个骰子,%d个面数\n", count, dice, sides);
		func_total(count, dice, sides);
		printf("请输入需要多少种可能?输入q退出: ");
	}
	printf("退出!");
	*/
	/*
	//编程练习6
	int arr[1000];
	int n = 0;
	int num = 1;
	srand(2);
	for (int i = 0; i < 1000; i++)
	{
		arr[i] = rand() % 10 + 1;
		if (arr[i] == num)
			n++;
	}
	printf("%d出现的次数为: %d", num, n);
	*/
	/*
	//编程练习5
	int arr[100];
	int temp;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % 10 == 0)
			putchar('\n');
	}
	putchar('\n');
	for (int i = 0; i < sizeof(arr) / sizeof(int)-1; i++)
	{
		for (int j = i+1; j < sizeof(arr) / sizeof(int); j++)
		{
			if (arr[j] > arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		printf("%d ", arr[i]);
		if ((i + 1) % 10 == 0)
			putchar('\n');
	}
	*/
	/*
	//编程练习4
	for (int i = 0; i < 20; i++)
	{
		func4();
	}
	printf("func4()的调用次数为: %d", count);
	*/
	/*
	//编程练习3
	int mode;
	int last_mode = 0;
	printf("请选择模式: 0为美式,1为公制: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		if (set_mode1(mode, last_mode) == -1)
		{
			get_info1(last_mode);
		}
		else
			get_info1(mode);
		last_mode = mode;
		printf("请选择模式: 0为美式,1为公制,-1退出: ");
		scanf("%d", &mode);
	}
	printf("退出!");
	*/
	//编程练习2
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

int *make_array(int size, int value)
{
	int *p = (int *)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		p[i] = value;
	}
	return p;
}

void show_array(int *p, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", p[i]);
		if ((i + 1) % 8 == 0)
			putchar('\n');
	}
	putchar('\n');
}

void func1(int *p)
{
	printf("输入不正确，请重新输入: ");
	scanf("%d", p);
}

int set_mode1(int mode,int last_mode)
{
	if (mode != 1 && mode != 0)
	{
		printf("使用还是上次输入的模式: %d\n",last_mode);
		return -1;
	}
	return 0;
}

void get_info1(int mode)
{
	float length;
	float oil;
	if (mode == 0)
	{
		printf("请输入距离: ");
		scanf("%f", &length);
		printf("请输入耗油量: ");
		scanf("%f", &oil);
		printf("您的油耗: %.2f升/百公里\n", oil / length);
	}
	else
	{
		printf("请输入距离: ");
		scanf("%f", &length);
		printf("请输入耗油量: ");
		scanf("%f", &oil);
		printf("您的油耗: %.2f加仑/英里\n", oil / length);
	}
}

void func4()
{
	++count;
}