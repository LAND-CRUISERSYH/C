#include<stdio.h>

void binary(unsigned long n);
unsigned long Fib(unsigned long n);
void func(int b);
double sum(double a, double b);
void alter(int* x, int* y);
int Max(int a, int b, int c);
void menu();
int func1(int up, int down);
double min(double x, double y);
void chline(char ch, int i, int j);
void func3(char ch, int i, int j);
double func4(double a, double b);
void larger_of(double* a, double* b);
void func6(double* a, double* b, double* c);
int func7(char ch);
double func8(int a, int b);
double func9(int a, int b);
void to_base_n(int num, int x);
void func11(int n);

int main()
{

	//�����ϰ11
	func11(8);
	/*
	//�����ϰ10
	to_base_n(15,8);
	*/
	/*
	//�����ϰ9
	int a = 2, b = -2;
	printf("%d��%d����Ϊ: %.2f\n", a, b, func9(a, b));
	*/
	/*
	//�����ϰ8
	int a = 0, b = 0;
	printf("%d��%d����Ϊ: %.2f\n", a, b,func8(a,b));
	*/
	/*
	//�����ϰ7
	char ch;
	printf("�������ַ�: ");
	while ((ch = getchar()) != '#')
	{
		printf("λ��Ϊ: %d\n", func7(ch));
		getchar();
		printf("�������ַ�: ");
	}
	*/
	/*
	//�����ϰ6
	double a = 4.55, b = 6.75, c = 2.11;
	printf("a = %.2f,b = %.2f,c = %.2f\n", a, b, c);
	func6(&a, &b, &c);
	printf("a = %.2f,b = %.2f,c = %.2f\n", a, b, c);
	*/
	/*
	//�����ϰ5
	double a = 5.33, b = 7.96;
	printf("a = %.2f,b = %.2f\n", a, b);
	larger_of(&a, &b);
	printf("a = %.2f,b = %.2f\n", a, b);
	*/
	/*
	//�����ϰ4
	double a = 5;
	double b = 2;
	printf("����ƽ����Ϊ: %lf", func4(a, b));
	*/
	/*
	//�����ϰ3
	char ch = '*';
	int i = 4, j = 6;
	func3(ch, i, j);
	*/
	/*
	//�����ϰ1
	double a = 5.33, b = 6.75;
	printf("��СֵΪ: %lf", min(a, b));
	*/

	/*
	//�����ϰ2
	char ch = '$';
	int i = 5, j = 6;
	chline(ch, i, j);
	*/
	/*
	unsigned long number;
	printf("������һ����: ");
	while (scanf("%lu", &number) == 1)
	{
		printf("������Ϊ: ");
		binary(number);
		putchar('\n');
		printf("������һ����: ");
	}
	printf("��ȷ�˳�!\n");
	//printf("Hello world!\n");
	*/
	
	/*
	unsigned long number;
	printf("����������: ");
	scanf("%lu", &number);
	printf("%lu\n", Fib(number));
	*/

	/*
	int a = 1, b = 2;
	printf("main(): a = %d,&a = %p\n", a, &a);
	printf("main(): b = %d,&b = %p\n", b, &b);
	func(a);
	*/

	/*
	//��ϰ��4
	int x = 6, y = 7;
	printf("%d + %d = %d\n", x, y, sum(x, y));
	*/

	/*
	//��ϰ��5
	double x = 6, y = 7;
	printf("%lf + %lf = %lf\n", x, y, sum(x, y));
	*/

	/*
	//��ϰ��6
	int x = 10, y = 6;
	printf("x = %d,y = %d\n", x, y);
	alter(&x, &y);
	printf("x = %d,y = %d\n", x, y);
	*/

	/*
	//��ϰ��8
	int a = 44, b = 55, c = 12;
	printf("���ֵΪ: %d", Max(a, b, c));
	*/

	/*
	//��ϰ��9
	int n;
	menu();
	n = func1(4, 1);
	if (n == 4)
	{
		printf("��ȷ�˳�!\n");
	}
	else
		printf("��ѡ�����: %d", n);
	*/
	return 0;
}

void func11(int n)
{
	if (n == 1 || n == 2)
		printf("%d", 1);
	else
	{
		int num1 = 1;
		int num2 = 1;
		int temp;
		int sum = 0;
		for (int i = 2; i < n; i++)
		{
			sum = num1 + num2;
			temp = num2;
			num2 = sum;
			num1 = temp;
		}
		printf("%d", sum);
	}
}

void to_base_n(int num, int x)
{
	if (x == 10)
		printf("%d\n", num);
	else if (x == 2)
	{
		int n;
		n = num % 2;
		if (num >= 2)
			to_base_n(num/2,2);
		putchar((n == 1) ? '1' : '0');
	}
	else if (x == 8)
	{
		int n;
		n = num % 8;
		if (num >= 8)
			to_base_n(num / 8, 8);
		printf("%d", n);
	}
}

double func9(int a, int b)
{
	if (a == 0 && b != 0)
		return 0;
	else if (b == 0 && a != 0)
		return 1;
	else if (a == 0 && b == 0)
	{
		printf("0��0����δ����!\n");
		return 1;
	}
	else if (b > 0)
	{
		return a * func9(a,b-1);
	}
	else
	{
		double sum ;
		sum = a * func9(a, -b - 1);
		return 1.0 / sum;
	}
}

double func8(int a, int b)
{
	if (a == 0&&b!=0)
		return 0;
	else if (b == 0&&a!=0)
		return 1;
	else if (a == 0 && b == 0)
	{
		printf("0��0����δ����!\n");
		return 1;
	}
	else if (b > 0)
	{
		int sum = 1;
		for (int i = 0; i < b; i++)
		{
			sum = sum * a;
		}
		return sum;
	}
	else
	{
		int n = 1;
		for (int j = 0; j < -b; j++)
		{
			n = n * a;
		}
		return 1.0 / n;
	}
}

int func7(char ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return ch - 64;
	}
	else if (ch >= 97 && ch <= 122)
	{
		return ch - 96;
	}
	else
		return -1;
}

void func6(double* a, double* b, double* c)
{
	double x = *a;
	double y = *b;
	double z = *c;
	if (x < y)
	{
		if (x > z)
		{
			*b = x;
			*c = y;
			*a = z;
		}
		else
		{
			*a = x;
			if (y > z)
			{
				*b = z;
				*c = y;
			}
			else
			{
				*b = y;
				*c = z;
			}
		}
	}
	else if(x>y)
	{
		if (x < z)
		{
			*b = x;
			*a = y;
			*c = z;
		}
		else
		{
			*c = x;
			if (y > z)
			{
				*b = y;
				*a = z;
			}
			else
			{
				*b = z;
				*a = y;
			}
		}
	}
}

void larger_of(double* a, double* b)
{
	double c = *a > *b ? *a : *b;
	*a = c;
	*b = c;
}

double func4(double a, double b)
{
	double x = 1.0 / a;
	double y = 1.0 / b;
	double z = (x + y) / 2.0;
	return 1.0 / z;
}

void func3(char ch, int i, int j)
{
	for (int x = 0; x < j; x++)
	{
		for (int y = 0; y < i; y++)
			putchar(ch);
		putchar('\n');
	}
}


void chline(char ch, int i, int j)
{
	for (int x = 0; x < j; x++)
	{
		for (int y = 0; y < i; y++)
			printf("%c", ch);
		putchar('\n');
	}
}

double min(double x, double y)
{
	return x > y ? y : x;
}
int func1(int up, int down)
{
	int choice;
	while (scanf("%d", &choice)==1)
	{
		if (choice > up || choice < down)
		{
			menu();
		}
		else
			return choice;
	}
	return 4;
}

void menu()
{
	printf("��ѡ��!\n");
	printf("1) copy files                    2) move files\n");
	printf("3) remove file                 4) quit\n");
	printf("����������ѡ��: ");
}

void alter(int* x, int* y)
{
	int sum;
	int sub;
	sum = *x + *y;
	sub = *x - *y;
	*x = sum;
	*y = sub;
}

int Max(int a, int b, int c)
{
	int max;
	max = a > b ? a : b;
	max = max > c ? max : c;
	return max;
}

double sum(double a, double b)
{
	return a + b;
}

void func(int b)
{
	int a = 10;
	printf("func(): a = %d,&a = %p\n", a, &a);
	printf("func(): b = %d,&b = %p\n", b, &b);
}

void binary(unsigned long n)
{
	int r;
	r = n % 2;
	if (n >= 2)
		binary(n / 2);
	putchar(r == 0 ? '0' : '1');
	return;
}

unsigned long Fib(unsigned long n)
{
	if (n > 2)
		return Fib(n - 1) + Fib(n - 2);
	else
		return 1;
}