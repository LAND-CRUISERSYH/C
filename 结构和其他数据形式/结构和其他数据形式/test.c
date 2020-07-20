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
	printf("请输入书名: ");
	s_gets(library.title, BOOK_NAME);
	printf("请输入作者名: ");
	s_gets(library.author, AUTHOR);
	printf("请输入价格: ");
	scanf("%f", &library.price);
	printf("书名为: %s,作者为: %s,价格为: %.2f", library.title, library.author, library.price);
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