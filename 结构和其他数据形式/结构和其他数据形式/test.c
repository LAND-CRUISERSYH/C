#include<stdio.h>
#include<string.h>

#define BOOK_NAME 41
#define AUTHOR 31
#define SIZE 20

char *s_gets(char *s, int n);

struct book
{
	char title[41];
	char author[31];
	float price;
};

struct names
{
	char first[SIZE];
	char last[SIZE];
};

struct guy
{
	struct names handle;
	char favfood[SIZE];
	char job[SIZE];
	float income;
};
int main()
{
	printf("%d", sizeof(float));
	/*
	struct guy fellow[2] = 
	{
		{{"hello","world"},"salmon","personality coach",68712.00},
		{{"Rodney","Swillbelly"},"tripe","tabloid editor",432400.00}
	};
	struct guy *him;              //结构体指针
	printf("&fellow[0] = %p,&fellow[1] = %p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];
	printf("him = %p,him+1 = %p\n", him,him+1);
	printf("him->income = %.2f,(*him).income = %.2f\n", him->income, (*him).income);
	him++;
	printf("him->favfood = %s,him->handle->first = %s\n",him->favfood,him->handle.first);
	*/
	/*
	struct book library;
	printf("请输入书名: ");
	s_gets(library.title, BOOK_NAME);
	printf("请输入作者名: ");
	s_gets(library.author, AUTHOR);
	printf("请输入价格: ");
	scanf("%f", &library.price);
	printf("书名为: %s,作者为: %s,价格为: %.2f", library.title, library.author, library.price);
	//printf("hello world\n");
	*/
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