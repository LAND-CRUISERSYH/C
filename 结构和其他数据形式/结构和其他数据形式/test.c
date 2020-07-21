#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

//#define LEN 81
//
//char *s_gets(char *st, int n);
//char showmenu();
//void eatline();              //读取至行末尾
//void show(void(*fp)(char *), char *str);
//void ToUpper(char *);         //把字符串转换为大写
//void ToLower(char *);         //把字符串转换成小写
//void Transpose(char *);          //大小写转置
//void Dummy(char *);             //不更改字符串
//
////#define BOOK_NAME 41
////#define AUTHOR 31
////#define SIZE 20
////#define SIZE 20
////
////char *s_gets(char *s, int n);
////void get_str(struct str* p);
////void make_str(struct str* p);
////void put_str(const struct str* p);
////void free_str(struct str* p);
////void show_flex(const struct flex* p);
////
////struct str
////{
////	char *firstname;
////	char *lastname;
////	int letters;
////};
////
////struct flex
////{
////	int count;
////	double average;
////	double scores[];
////};
////struct book
////{
////	char title[41];
////	char author[31];
////	float price;
////};
////
////struct names
////{
////	char first[SIZE];
////	char last[SIZE];
////};
////
////struct guy
////{
////	struct names handle;
////	char favfood[SIZE];
////	char job[SIZE];
////	float income;
////};
//int main()
//{
//	char line[LEN];
//	char copy[LEN];
//	char choice;
//	void(*pfun)(char *) = Dummy;    //声明一个函数指针，被指向的函数接受char*类型的参数，无返回值
//	puts("输入字符串(空行退出): ");
//	while (s_gets(line, LEN) != NULL && line[0] != '\0')
//	{
//		while ((choice = showmenu()) != '\n')
//		{
//			switch (choice)
//			{
//			case 'u':pfun = ToUpper; break;
//			case 'l':pfun = ToLower; break;
//			case 't':pfun = Transpose; break;
//			case'o':pfun = Dummy; break;
//			}
//			strcpy(copy, line);          //为show()函数拷贝一份
//			show(pfun, line);          //根据用户的选择，使用选定的函数
//		}
//		puts("输入字符串(空行退出): ");
//	}
//	puts("正确退出!");
//	/*int n = 5;
//	double sum = 0;
//	struct flex *p1, *p2;
//	p1 = malloc(sizeof(struct flex)+ n * sizeof(double));
//	p1->count = n;
//	for (int i = 0; i < p1->count; i++)
//	{
//		p1->scores[i] = 20.0 - i;
//		sum += p1->scores[i];
//	}
//	p1->average = sum / n;
//	show_flex(p1);
//	n = 9;
//	sum = 0;
//	p2 = malloc(sizeof(struct flex) + n * sizeof(double));
//	p2->count = n;
//	for (int i = 0; i < p2->count; i++)
//	{
//		p2->scores[i] = 20.0 - i / 2.0;
//		sum += p2->scores[i];
//	}
//	p2->average = sum / n;
//	show_flex(p2);*/
//	/*
//	struct str person;
//	get_str(&person);
//	make_str(&person);
//	put_str(&person);
//	free_str(&person);
//	*/
//	//printf("%d", sizeof(float));
//	/*
//	struct guy fellow[2] = 
//	{
//		{{"hello","world"},"salmon","personality coach",68712.00},
//		{{"Rodney","Swillbelly"},"tripe","tabloid editor",432400.00}
//	};
//	struct guy *him;              //结构体指针
//	printf("&fellow[0] = %p,&fellow[1] = %p\n", &fellow[0], &fellow[1]);
//	him = &fellow[0];
//	printf("him = %p,him+1 = %p\n", him,him+1);
//	printf("him->income = %.2f,(*him).income = %.2f\n", him->income, (*him).income);
//	him++;
//	printf("him->favfood = %s,him->handle->first = %s\n",him->favfood,him->handle.first);
//	*/
//	/*
//	struct book library;
//	printf("请输入书名: ");
//	s_gets(library.title, BOOK_NAME);
//	printf("请输入作者名: ");
//	s_gets(library.author, AUTHOR);
//	printf("请输入价格: ");
//	scanf("%f", &library.price);
//	printf("书名为: %s,作者为: %s,价格为: %.2f", library.title, library.author, library.price);
//	//printf("hello world\n");
//	*/
//	return 0;
//}
//
//char *s_gets(char *st, int n)
//{
//	char *p;
//	int i = 0;
//	p = fgets(st, n, stdin);
//	if (p)
//	{
//		while (st[i] != '\n'&&st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//		{
//			while (getchar() != '\n')
//				continue;
//		}
//	}
//	return p;
//}
//
//char showmenu()
//{
//	char ans;
//	puts("请输入菜单选项: ");
//	puts("u) uppercase          l) lowercase");
//	puts("t) transposed case   o) original case");
//	puts("n)  next string");
//	ans = getchar();      //获取用户输入
//	ans =(char)towlower(ans);    //转换为小写
//	eatline();              //清理输入行
//	while (strchr("ulton", ans) == NULL)
//	{
//		puts("请输入正确选项:  ");
//		ans =(char)towlower(getchar());
//		eatline();
//	}
//	return ans;
//}
//
//void eatline()
//{
//	while (getchar() != '\n')
//		continue;
//}
//
//void ToUpper(char *str)
//{
//	while (*str)
//	{
//		*str = toupper(*str);
//		str++;
//	}
//}
//
//void ToLower(char *str)
//{
//	while (*str)
//	{
//		*str = tolower(*str);
//		str++;
//	}
//}
//
//void Transpose(char *str)
//{
//	while (*str)
//	{
//		if (islower(*str))
//			*str = toupper(*str);
//		else if (isupper(*str))
//			*str = tolower(*str);
//		str++;
//	}
//}
//
//void Dummy(char *str)
//{
//
//}
//
//void show(void(*fp)(char *), char *str)
//{
//	(*fp)(str);                 //把用户选定的函数作用于str
//	puts(str);                 //显示结果
//}
//void show_flex(const struct flex* p)
//{
//	printf("Scores: ");
//	for (int i = 0; i < p->count; i++)
//		printf("%.2f ", p->scores[i]);
//	printf("\nAverage: %.2f\n", p->average);
//}
//
//char *s_gets(char *s, int n)
//{
//	char *p;
//	char *find;
//	p = fgets(s, n, stdin);
//	if (p)
//	{
//		find = strchr(s, '\n');
//		if (find)
//			*find = '\0';
//		else
//		{
//			while (getchar() != '\0')
//				continue;
//		}
//	}
//	return p;
//}
//
//void get_str(struct str* p)
//{
//	char temp[SIZE];
//	printf("请输入你的姓: ");
//	s_gets(temp,SIZE);
//	p->firstname = (char *)malloc(strlen(temp) + 1);
//	strcpy(p->firstname, temp);
//	printf("请输入你的名: ");
//	s_gets(temp, SIZE);
//	p->lastname = (char *)malloc(strlen(temp) + 1);
//	strcpy(p->lastname, temp);
//}
//void make_str(struct str* p)
//{
//	p->letters = strlen(p->firstname) + strlen(p->lastname);
//}
//void put_str(const struct str* p)
//{
//	printf("%s %s: %d\n", p->firstname, p->lastname, p->letters);
//}
//void free_str(struct str* p)
//{
//	free(p->firstname);
//	free(p->lastname);
//}