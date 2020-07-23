#include<stdio.h>
#include<string.h>

int func1(char *p);
char *show_func2(int n,char *p);
int func3(int n);
int func4(int n, int idnex);
void func5(int n, int x);

struct num
{
	unsigned int ID : 8;
	unsigned int size : 7;
	unsigned int : 1;
	unsigned int alignment : 2;
	unsigned int bold : 1;
	unsigned int ltalics : 1;
};

int main()
{
	/*
	//编程练习5
	func5(6, 2);
	*/
	/*
	//编程练习4
	printf("%d", func4(3, 2));
	*/
	/*
	//编程练习3
	printf("%d ", func3(7));
	*/
	/*
	//编程练习2
	char ch1[9];
	char ch2[9];
	char temp[9];
	int num1;
	int num2;
	printf("请输入第一个二进制字符串: ");
	scanf("%s", ch1);
	getchar();
	printf("请输入第二个二进制字符串: ");
	scanf("%s", ch2);
	num1 = func1(ch1);
	num2 = func1(ch2);
	printf("%d %d\n", num1, num2);
	printf("~num1: %s\n", show_func2(~num1,temp));
	printf("~num2: %s\n", show_func2(~num2,temp));
	printf("num1&num2: %s\n", show_func2(num1&num2,temp));
	printf("num1|num2: %s\n", show_func2(num1|num2,temp));
	printf("num1^num2: %s\n", show_func2(num1^num2,temp));
	*/
	/*
	//编程练习1
	char *pbin = "00011001";
	printf("%d", func1(pbin));
	*/
	return 0;
}

void func5(int n, int x)
{
	char ch[9];
	char s[9];
	show_func2(n, ch);
	printf("%s\n", ch);
	strncpy(s, ch, x);
	s[x] = '\0';
	n <<= x;
	show_func2(n, ch);
	strncpy(ch+7-x+1,s , x+1);
	printf("%s\n", ch);
}

int func4(int n, int idnex)
{
	char ch[9];
	char *p = show_func2(n, ch);
	if (p[7-idnex] == '1')
		return 1;
	else
		return 0;
}

int func3(int n)
{
	char ch[9];
	char *p = show_func2(n, ch);
	int count = 0;
	while (*p != '\0')
	{
		if (*p == '1')
			count++;
		p++;
	}
	return count;
}

char *show_func2(int n,char *p)
{
	for (int i = 7; i >= 0; i--)
	{
		p[i] = (1 & n) + '0';
		n >>= 1;
	}
	p[8] = '\0';
	return p;
}

int func1(char *p)
{
	int num = strlen(p);         //num = 8;
	int sum = 0;
	int n = 1;
	for (int i = num - 1; i >= 0; i--)
	{
		n = 1;
		if (p[i] == '1')
		{
			int j = num-1-i;
			if (j == 0)
				n = 1;
			while (j--)
			{
				n = n * 2;
			}
			sum += n;
		}
	}
	return sum;
}