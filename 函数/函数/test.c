#include<stdio.h>

void binary(unsigned long n);
unsigned long Fib(unsigned long n);

int main()
{
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
	unsigned long number;
	printf("����������: ");
	scanf("%lu", &number);
	printf("%lu\n", Fib(number));
	return 0;
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