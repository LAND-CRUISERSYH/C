#include<stdio.h>
#include<string.h>

char *func1(char *ch,int n,int m);
char *func2(char *ch, int n,int m);
void func3(char *ch, char *ch1);

int main()
{
	//±‡≥Ã¡∑œ∞4

	/*
	//±‡≥Ã¡∑œ∞3
	char ch4[15];
	char ch5[15];
	func3(ch4, ch5);
	puts(ch4);
	puts(ch5);
	*/
	/*
	//±‡≥Ã¡∑œ∞2
	char ch[40];
	char *str = func2(ch, 40, 8);
	puts(str);
	*/
	/*
	//±‡≥Ã¡∑œ∞1
	char ch[40];
	char *str =  func1(ch, 40, 3);
	puts(str);
	*/
	return 0;
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

