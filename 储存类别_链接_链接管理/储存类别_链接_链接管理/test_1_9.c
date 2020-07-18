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

	//�����ϰ9
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
	//�����ϰ8
	int *pa;
	int size;
	int value;
	printf("����������Ԫ�صĸ���: ");
	while(scanf("%d", &size) == 1 && size > 0)
	{
		printf("�������ʼ�������ֵ: ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("����������Ԫ�صĸ���(����q�˳�): ");
	}
	printf("�˳�!");
	*/
	/*
	//�����ϰ7
	int dice,sides;
	srand((unsigned int)time(0));
	printf("��������Ҫ�����ֿ���: ");
	while (scanf("%d", &count) == 1)
	{
		printf("������������������: ");
		scanf("%d %d", &dice,&sides);
		printf("��%d�ֿ���,%d������,%d������\n", count, dice, sides);
		func_total(count, dice, sides);
		printf("��������Ҫ�����ֿ���?����q�˳�: ");
	}
	printf("�˳�!");
	*/
	/*
	//�����ϰ6
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
	printf("%d���ֵĴ���Ϊ: %d", num, n);
	*/
	/*
	//�����ϰ5
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
	//�����ϰ4
	for (int i = 0; i < 20; i++)
	{
		func4();
	}
	printf("func4()�ĵ��ô���Ϊ: %d", count);
	*/
	/*
	//�����ϰ3
	int mode;
	int last_mode = 0;
	printf("��ѡ��ģʽ: 0Ϊ��ʽ,1Ϊ����: ");
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
		printf("��ѡ��ģʽ: 0Ϊ��ʽ,1Ϊ����,-1�˳�: ");
		scanf("%d", &mode);
	}
	printf("�˳�!");
	*/
	//�����ϰ2
	/*
	int mode;
	printf("��ѡ��ģʽ: 0Ϊ��ʽ,1Ϊ����: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("��ѡ��ģʽ: 0Ϊ��ʽ,1Ϊ����,-1�˳�: ");
		scanf("%d", &mode);
	}
	printf("�˳�!");
	*/
	/*
	//�����ϰ1
	int num;
	printf("���һ������: ");
	scanf("%d", &num);
	while (num != 56)
		func1(&num);
	printf("������ȷ!\n");
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
	printf("���벻��ȷ������������: ");
	scanf("%d", p);
}

int set_mode1(int mode,int last_mode)
{
	if (mode != 1 && mode != 0)
	{
		printf("ʹ�û����ϴ������ģʽ: %d\n",last_mode);
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
		printf("���������: ");
		scanf("%f", &length);
		printf("�����������: ");
		scanf("%f", &oil);
		printf("�����ͺ�: %.2f��/�ٹ���\n", oil / length);
	}
	else
	{
		printf("���������: ");
		scanf("%f", &length);
		printf("�����������: ");
		scanf("%f", &oil);
		printf("�����ͺ�: %.2f����/Ӣ��\n", oil / length);
	}
}

void func4()
{
	++count;
}