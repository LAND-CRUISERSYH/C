#include<stdio.h>
#include<limits.h>              //提供CHAR_BIT的定义，CHAR_BIT表示每字节的位数

void func(int num, char *p);
void show(const char *p);

int main()
{
	/*
	char arr[CHAR_BIT * sizeof(int) + 1];
	int number;
	while (scanf("%d", &number) == 1)
	{
		func(number, arr);
		printf("%d is", number);
		show(arr);
		putchar('\n');
	}
	*/
	//printf("hello world");
	return 0;
}

void func(int num, char *p)
{
	const static int size = CHAR_BIT * sizeof(int);
	for (int i = size - 1; i >= 0; i--, num >>= 1)
		p[i] = (01 & num) + '0';
	p[size] = '\0';
}
void show(const char *p)
{
	int i = 0;
	while (p[i])
	{
		putchar(p[i]);
		i++;
		if (i % 4 == 0 && p[i])
			putchar(' ');
	}
}