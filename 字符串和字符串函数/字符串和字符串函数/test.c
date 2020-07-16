#include<stdio.h>
#include<string.h>
#define SIZE 20
#define ROWS 5
#define COLS 40

void func(char *ch, unsigned int n);
char *s_gets(char *ch, int n);
void  stsrt(char *strings[], int num);

int main()

{
	char ch[ROWS][COLS];
	char *p[ROWS];
	int count = 0;
	while (count < ROWS&&s_gets(ch[count], COLS) != NULL && ch[count][0] != '\0')
	{
		p[count] = ch[count];
		count++;
	}
	stsrt(p,count);
	for (int k = 0; k < count; k++)
	{
		puts(p[k]);
	}
	/*
	char firstName[20] = "LAND";
	char LastName[20] = "CRUISERSYH";
	char intput[40];
	sprintf(intput, "%s %s %.2f", firstName, LastName, 55.5);
	puts(intput);
	*/
	/*
	char *ch = "ARE";
	char ch1[] = "HOW are YOU";
	char *p;

	p = strcpy(ch1 +4 , ch);
	puts(ch1);
	puts(p);
	*/
	/*
	char ch[20];
	strcpy(ch, "HI HO!");
	ch = "so long";
	*/
	//char *p;
	//strcpy(p, "long");
	/*
	char ch1[5][20];
	char ch2[20];
	int i = 0;
	printf("请输入五个首字母为'H'的单词!\n");
	while (i < 5 && s_gets(ch2, 20))
	{
		if (ch2[0] != 'H')
			printf("首字母不为'H'，请重新输入:\n");
		else
		{
			strcpy(ch1[i], ch2);
			i++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		puts(ch1[i]);
	}
	*/
	/*
	char ch1[] = "Hello";
	char *ch2 = ch1;
	printf("%d", sizeof(ch1));
	*/
	/*
	char ch1[8];
	char ch2[] = "world";
	int count;
	while (fgets(ch1, 8, stdin) != NULL && ch1[0] != '\n')
	{
		int i = 0;
		while (ch1[i] != '\n'&&ch1[i] != '\0')
			i++;
		if (ch1[i] == '\n')
			ch1[i] = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
		break;
	}
	count = 8 - strlen(ch1) - 1;
	strncat(ch1, ch2, count);
	puts(ch1);
	*/
	/*
	char ch1[30];
	char ch2[] = "world";
	while (fgets(ch1, 20, stdin) != NULL && ch1[0] != '\n')
	{
		int i = 0;
		while (ch1[i] != '\n'&&ch1[i] != '\0')
			i++;
		if (ch1[i] == '\n')
			ch1[i] = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
		break;
	}
	if (strlen(ch1) + strlen(ch2) + 1 <= 30)
	{
		strcat(ch1, ch2);
		puts(ch1);
	}
	*/
	/*
	char ch[20];
	char p[]= "world";
	while (fgets(ch, 20, stdin) !=NULL && ch[0] != '\n')
	{
		int i = 0;
		while (ch[i] != '\n'&&ch[i] != '\0')
			i++;
		if (ch[i] == '\n')
			ch[i] = '\0';
		else
		{
			while(getchar() != '\n')
				continue;
		}
		puts(ch);
		break;
	}
	strcat(ch, p);
	puts(p);
	puts(ch);
	*/
	/*
	char ch[] = "Hello world!";
	puts(ch);
	func(ch, 3);
	puts(ch);
	puts(ch + 4);
	/*
	char ch[14];
	fgets(ch, 14, stdin);
	puts(ch);
	fputs(ch, stdout);
	*/
	/*
	char ch[SIZE];
	gets(ch);
	printf("%s\n", ch);
	puts(ch);
	*/
	/*
	char *p = "Hello";
	p[0] = 'L';
	printf("Hello");
	*/
	//printf("%p,%c", "are", *"Hello");
	//printf("Hello world");
	
	return 0;
}

void  stsrt(char *strings[], int num)
{
	char *temp;
	for (int i = 0; i < num-1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (strcmp(strings[i], strings[j]) > 0)
			{
				temp = strings[i];
				strings[i] = strings[j];
				strings[j] = temp;
			}
		}
	}
}

void func(char *ch,unsigned int n)
{
	if (strlen(ch) > n)
		ch[n] = '\0';
}

char *s_gets(char *ch, int n)
{
	int i = 0;
	char *p;
	p = fgets(ch, n, stdin);
	if (p)
	{
		while (ch[i] != '\n'&&ch[i] != '\0')
			i++;
		if (ch[i] == '\n')
			ch[i] = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}
	return p;
}