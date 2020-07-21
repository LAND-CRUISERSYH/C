#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//#define BOOK_NAME 41
//#define AUTHOR 31
//#define SIZE 20
#define SIZE 20

char *s_gets(char *s, int n);
void get_str(struct str* p);
void make_str(struct str* p);
void put_str(const struct str* p);
void free_str(struct str* p);
void show_flex(const struct flex* p);

struct str
{
	char *firstname;
	char *lastname;
	int letters;
};

struct flex
{
	int count;
	double average;
	double scores[];
};
//struct book
//{
//	char title[41];
//	char author[31];
//	float price;
//};
//
//struct names
//{
//	char first[SIZE];
//	char last[SIZE];
//};
//
//struct guy
//{
//	struct names handle;
//	char favfood[SIZE];
//	char job[SIZE];
//	float income;
//};
int main()
{
	int n = 5;
	double sum = 0;
	struct flex *p1, *p2;
	p1 = malloc(sizeof(struct flex)+ n * sizeof(double));
	p1->count = n;
	for (int i = 0; i < p1->count; i++)
	{
		p1->scores[i] = 20.0 - i;
		sum += p1->scores[i];
	}
	p1->average = sum / n;
	show_flex(p1);
	n = 9;
	sum = 0;
	p2 = malloc(sizeof(struct flex) + n * sizeof(double));
	p2->count = n;
	for (int i = 0; i < p2->count; i++)
	{
		p2->scores[i] = 20.0 - i / 2.0;
		sum += p2->scores[i];
	}
	p2->average = sum / n;
	show_flex(p2);
	/*
	struct str person;
	get_str(&person);
	make_str(&person);
	put_str(&person);
	free_str(&person);
	*/
	//printf("%d", sizeof(float));
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

void show_flex(const struct flex* p)
{
	printf("Scores: ");
	for (int i = 0; i < p->count; i++)
		printf("%.2f ", p->scores[i]);
	printf("\nAverage: %.2f\n", p->average);
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

void get_str(struct str* p)
{
	char temp[SIZE];
	printf("请输入你的姓: ");
	s_gets(temp,SIZE);
	p->firstname = (char *)malloc(strlen(temp) + 1);
	strcpy(p->firstname, temp);
	printf("请输入你的名: ");
	s_gets(temp, SIZE);
	p->lastname = (char *)malloc(strlen(temp) + 1);
	strcpy(p->lastname, temp);
}
void make_str(struct str* p)
{
	p->letters = strlen(p->firstname) + strlen(p->lastname);
}
void put_str(const struct str* p)
{
	printf("%s %s: %d\n", p->firstname, p->lastname, p->letters);
}
void free_str(struct str* p)
{
	free(p->firstname);
	free(p->lastname);
}