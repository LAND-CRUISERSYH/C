#include<stdio.h>
#include<string.h>

#define BOOK_NAME 41
#define AUTHOR 31

char *s_gets(char *s, int n);

struct book
{
	char title[41];
	char author[31];
	float price;
};
int main()
{
	struct book library;
	printf("����������: ");
	s_gets(library.title, BOOK_NAME);
	printf("������������: ");
	s_gets(library.author, AUTHOR);
	printf("������۸�: ");
	scanf("%f", &library.price);
	printf("����Ϊ: %s,����Ϊ: %s,�۸�Ϊ: %.2f", library.title, library.author, library.price);
	//printf("hello world\n");
	return 0;
}

char *s_gets(char *s, int n)
{
	char *p;
	char *find;
	p = fgets(s, n, stdin);
	if (p)
	{
		find = strchr(s, '\n');
		if (find)
			*find = '\0';
		else
		{
			while (getchar() != '\0')
				continue;
		}
	}
	return p;
}