#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

char *func1(char *ch,int n,int m);
char *func2(char *ch, int n,int m);
void func3(char *ch, char *ch1);
void func4(char *ch1, char *ch,int n);
char *func5(char *ch1, char ch);
int is_within(char *ch1, char ch);
char *mystrncpy(char *s1, char *s2, int n);
char *string_in(char *s1,char *s2);
char *func9(char *s);
char *func10(char *s);
char *s_gets(char *s, int n);
void  s_fgets(char *s, int n);
char func11_print();
void func11_a(char *p[],int n);
void func11_b(char *p[], int n);
void func11_c(char *p[], int n);
void func11_d(char *p[], int n);
int func11_d_2(char *p, int n);
void func12_1(char *s);
void func12_2(char *s);
void func12_3(char *s);
void func12_4(char *s);
void func12_5(char *s);

int main(int argc,char *argv[])
{
	
	//编程练习14
	double base = 0;
	long index = 0;

	if (argc >= 2)
	{
		base = atof(argv[1]);
		index = atol(argv[2]);

		printf("%lf\n", pow(base, index));
	}
	
	/*
	//编程练习13
	for (int i = argc; i > 0; i--)
		puts(argv[i]);
	*/

	/*
	//编程练习12
	char ch[40];
	printf("请输入字符串: \n");
	char *p = s_gets(ch, 40);
	func12_1(p);
	func12_2(p);
	func12_3(p);
	func12_4(p);
	func12_5(p);
	*/
	/*
	//编程练习11
	char s[3][40];
	char c;
	char *p[3];
	printf("请输入三个字符串: \n");
	for (int i = 0; i < 3; i++)
	{
		s_fgets(s[i], 40);
		p[i] = s[i];
	}
	c = func11_print();
	while (c!='q')
	{
		switch (c)
		{
		case 'a':
			func11_a(p, 3);
			c = func11_print();
			break;
		case 'b':
			func11_b(p, 3);
			func11_a(p, 3);
			c = func11_print();
			break;
		case 'c':
			func11_c(p, 3);
			func11_a(p, 3);
			c = func11_print();
			break;
		case 'd':
			func11_d(p, 3);
			func11_a(p, 3);
			c = func11_print();
			break;
		}
	}
	printf("退出!");
	*/
	/*
	//编程练习10
	char ch[40];
	printf("请输入字符串: ");
	while (s_gets(ch,40)!='\n')
	{
		puts(func10(ch));
		printf("请输入字符串(回车退出): ");
	}
	printf("退出!");
	*/
	/*
	//编程练习9
	char ch[] = "hello world";
	puts(func9(ch));
	*/
	/*
	//编程练习8
	char s1[] = "hello world";
	char s2[] = "llo";
	char *p = string_in(s1, s2);
	if (p)
		puts(p);
	else
		printf("字符串1中不包含字符串2!");
	*/
	/*
	//编程练习7
	char ch1[40];
	char ch2[]= "hello world";
	int n;
	printf("请输入拷贝的字符数: ");
	while (scanf("%d",&n)==1)
	{
		puts(mystrncpy(ch1, ch2, n));
		printf("请输入拷贝的字符数(输入q退出):");
	}
	printf("退出!\n");
	*/
	/*
	//编程练习6
	char ch1[] = "hello world";
	char ch;
	printf("请输入一个字符: ");
	while (scanf("%c", &ch) == 1)
	{
		if (is_within(ch1,ch))
			printf("有%c字符\n",ch);
		else
			printf("没找到该字符!\n");
		getchar();
		printf("请输入一个字符: ");
	}
	*/
	/*
	//编程练习5
	char ch1[] = "hello world";
	char ch;
	char *p;
	printf("请输入一个字符: ");
	while (scanf("%c",&ch)==1)
	{
		p = func5(ch1,ch);
		if(p)
			printf("%d\n", p - ch1);
		else
			printf("没找到该字符!\n");
		getchar();
		printf("请输入一个字符: ");
	}
	*/
	/*
	//编程练习4
	char ch[40];
	char ch1[40];
	fgets(ch, 40, stdin);
	func4(ch1,ch,3);
	*/
	/*
	//编程练习3
	char ch4[15];
	char ch5[15];
	func3(ch4, ch5);
	puts(ch4);
	puts(ch5);
	*/
	/*
	//编程练习2
	char ch[40];
	char *str = func2(ch, 40, 8);
	puts(str);
	*/
	/*
	//编程练习1
	char ch[40];
	char *str =  func1(ch, 40, 3);
	puts(str);
	*/
	return 0;
}

void func12_1(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		if (*s == ' ')
			count++;
		s++;
	}
	printf("单词数为: %d\n", count + 1);
}
void func12_2(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		if (isupper(*s))
			count++;
		s++;
	}
	printf("大写字母数为: %d\n", count);
}
void func12_3(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		if (islower(*s))
			count++;
		s++;
	}
	printf("小写写字母数为: %d\n", count);
}
void func12_4(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		if (ispunct(*s))
			count++;
		s++;
	}
	printf("标点符号数数为: %d\n", count);
}
void func12_5(char *s)
{
	int count = 0;
	while (*s != '\0')
	{
		if (isdigit(*s))
			count++;
		s++;
	}
	printf("数字个数为: %d\n", count);
}

void s_fgets(char *s, int n)
{
	while (fgets(s, n, stdin) != NULL && s[0] != '\n')
	{
		int i = 0;
		while (s[i] != '\n'&&s[i] != '\0')
			i++;
		if (s[i] == '\n')
			s[i] = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
		break;
	}
}


int func11_d_2(char *p, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i] != ' ')
			count++;
		else
			break;
	}
	return count;
}

void func11_d(char *p[], int n)
{
	char *temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (func11_d_2(p[i], 40)>func11_d_2(p[j],40))
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}

void func11_c(char *p[], int n)
{
	char *temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (strlen(p[i])>strlen(p[j]))
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}

void func11_b(char *p[], int n)
{
	char *temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (strcmp(p[i], p[j]) > 0)
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}

void func11_a(char *p[],int n)
{
	for (int i = 0; i < n; i++)
	{
		puts(p[i]);
	}
}

char func11_print()
{
	char num;
	printf("*********************************************************\n");
	printf("a) 打印源字符串                 b) 以ASCII顺序打印字符串       \n");
	printf("c) 按长度顺序打印字符串   d) 按第一个单词长度打印字符串\n");
	printf("q) 退出                                                                             \n");
	printf("*********************************************************\n");
	printf("请输入您要选择的选项: ");
	scanf("%c", &num);
	getchar();
	return num;
}

/*
char *func10(char *s)
{
	int j;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == ' ')
		{
			for (j = i+1; j < strlen(s); j++)
			{
				s[j - 1] = s[j];
			}
			s[j-1] = '\0';
		}
	}
	return s;
}
*/
char *func9(char *s)
{
	char temp;
	int num = strlen(s);
	for (int i = 0; i < num/2; i++)
	{
		temp = s[i];
		s[i] = s[num - i - 1];
		s[num - i - 1] = temp;
	}
	return s;
}

char *string_in(char *s1, char *s2)
{
	int i = 0;
	size_t count = strlen(s2);
	size_t sum = strlen(s1) - strlen(s2);
	for (i = 0; i <= (int)sum; i++)
	{
		
		if (strncmp(&s1[i],s2,count) == 0)
			return &s1[i];
	}
	return NULL;
}
/*
char *mystrncpy(char *s1, char *s2, int n)
{
	if (strlen(s2) >= n)
	{
		for (int i = 0; i < n; i++)
		{
			s1[i] = s2[i];
		}
		s1[n] = '\0';
	}
	else
	{
		for (int i = 0; i < strlen(s2)+1; i++)
		{
			s1[i] = s2[i];
		}
	}
	return s1;
}
*/
int is_within(char *ch1, char ch)
{
	while (*ch1 != '\0')
	{
		if (*ch1 == ch)
			return 1;
		ch1++;
	}
	return 0L;
}

char *func5(char *ch1, char ch)
{
	while (*ch1 != '\0')
	{
		if (*ch1 == ch)
			return ch1;
		ch1++;
	}
	return NULL;
}

void func4(char *ch1, char *ch, int n)
{
	int x = 0;
	while (*ch == ' ')
	{
		ch++;
		n--;
	}
	for (int i = 0; i < n; i++)
	{
		if (ch[i] != '\n'&&ch[i] != ' '&&ch[i] != '\t')
		{
			ch1[i] = ch[i];;
			x++;
		}
		else
		{
			ch1[i] = '\0';
			break;
		}
	}
	if (x == n)
		ch1[n] = '\0';
	puts(ch1);
}

char *func1(char *ch,int n,int m)
{
	char *p = fgets(ch, n, stdin);
	p[m] = '\0';
	return p;
}

char *func2(char *ch, int n, int m)
{
	int i = 0;
	char *p = fgets(ch, n, stdin);
	while (p[i] != '\0')
	{
		if (p[i] == ' ' || p[i] == '\t' || p[i] == '\n')
		{
			p[i] = '\0';
			return p;
		}
		else
			p[m] = '\0';
		i++;
	}
	return p;
}

void func3(char *ch,char *ch1)
{
	int i = 0;
	if (fgets(ch, 40, stdin) != NULL)
	{
		while (ch[i]!='\n'&&ch[i]!='\0')
			i++;
		if (ch[i] == '\n')
			ch[i] = '\0';
		else
		{
			while (getchar() != '\0')
				continue;
		}
	}
	
	while (*ch == ' ')
		ch++;
	while (*ch != '\t'&&*ch != '\0'&&*ch != ' ')
	{
		*ch1 = *ch;
		ch++;
		ch1++;
	}
	*ch1 = '\0';
}

