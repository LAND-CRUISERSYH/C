#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define CSIZE 4

struct Months
{
	char name[10];
	char name_3[4];
	int days;
	int month;
};

struct Months arr[12] = 
{
		{"January","Jan",31,1},{"February","Feb",28,2},{"March","Mar",31,3},{"April","Apr",30,4},
		{"May","May",31,5},{"June","Jun",30,6},{"July","Jul",31,7},{"August","Aug",31,8},
		{"September","Sep",30,9},{"October","Oct",31,10},{"November","Nov",30,11},{"December","Dec",31,12}
};

struct book
{
	char name[20];
	char Author[20];
	float price;
};

struct Name
{
	char first[10];
	char last[10];
	char mid[10];
};

struct info
{
	char number[10];
	struct Name name;
};

struct name
{
	char last[10];
	char first[10];
};

struct student
{
	struct name person;
	float grade[3];
	float average;
};

struct seat
{
	int num;
	char ch;
	char last[10];
	char first[10];
};

void s_gets(char *str, int n);
void func1(char *str);
void func3_get(struct book *p,int n);
void func3_put(struct book *p, int n);
void func3_putName(struct book *p, int n);
void func3_putPrice(struct book *p, int n);
void func4_pput(struct info *p, int n);
void func4_put(struct info temp);
void func5_e(struct student *p, int n);
void func5_f(struct student *p, int n);
void func8_menu();
void func8_a(struct seat *p, int n);
void func8_b(struct seat *p, int n);
void func8_c(struct seat *p, int n);
void func8_d(struct seat *p,int n);
void func8_e(struct seat *p);

int main()
{

	//编程练习8
	struct seat arr[12] =
	{
		{1,'n'},{2,'n'},{3,'n'},{4,'n'},{5,'n'},{6,'n'},{7,'n'},{8,'n'},{9,'n'},{10,'n'},{11,'n'},{12,'n'}
	};
	char c;
	func8_menu();
	printf("请选择: ");
	while ((c=getchar())&&c!='f')
	{
		getchar();
		switch (c)
		{
		case 'a':
			func8_a(arr, 12);
			break;
		case 'b':
			func8_b(arr, 12);
			break;
		case 'c':
			func8_c(arr, 12);
			break;
		case 'd':
			func8_d(arr, 12);
			break;
		case 'e':
			func8_e(arr);
			break;
		}
		func8_menu();
		printf("请选择: ");
	}
	printf("退出!");
	/*
	//编程练习5
	float sum = 0;
	struct student arr[CSIZE];
	for (int i = 0; i < CSIZE; i++)
	{
		printf("请输入学生名: ");
		s_gets(arr[i].person.last, 10);
		printf("请输入学生姓: ");
		s_gets(arr[i].person.first, 10);
		printf("请输入分数1: ");
		scanf("%f", &arr[i].grade[0]);
		getchar();
		printf("请输入分数2: ");
		scanf("%f", &arr[i].grade[1]);
		getchar();
		printf("请输入分数3: ");
		scanf("%f", &arr[i].grade[2]);
		getchar();
		putchar('\n');
	}
	func5_e(arr, CSIZE);
	func5_f(arr, CSIZE);
	for (int i = 0; i < CSIZE; i++)
	{
		sum += arr[i].average;
	}
	printf("班级的平均分为: %.2f\n", sum / CSIZE);
	*/
	/*
	//编程练习4
	struct info arr[5] = 
	{
		{"302039823",{"Hello","World","pdd"}},{"302039824",{"Li","Ming","zzc"}},{"302039825",{"Wang","Hua"," "}},
		{"302039826",{"Zhang","Fei","yjj"}},{"302039827",{"Guan","Zhi","uzi"}}
	};
	func4_pput(arr, 5);
	putchar('\n');
	for (int i = 0; i < 5; i++)
	{
		func4_put(arr[i]);
	}
	*/
	/*
	//编程练习3
	struct book arr[3];
	func3_get(arr,3);
	func3_put(arr, 3);
	func3_putName(arr, 3);
	func3_put(arr, 3);
	func3_putPrice(arr, 3);
	func3_put(arr, 3);
	*/
	/*
	//编程练习2
	int year,day_get;
	int total = 0;
	char month_get[10];
	printf("请输入年份: ");
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		arr[1].days = 29;
	printf("请输入月份: ");
	scanf("%s", month_get);
	if (isdigit(month_get[0]))
	{
		int num = atoi(month_get);
		printf("请输入日子: ");
		scanf("%d", &day_get);
		for (int i = 0; i < num - 1; i++)
		{
			total += arr[i].days;
		}
		total += day_get;
		printf("%d年%d月%d日前有%d天", year, num,day_get, total);
	}
	else
	{
		int i = 0;
		printf("请输入日子: ");
		scanf("%d", &day_get);
		while (strncmp(month_get, arr[i].name, 3) != 0)
		{
			total += arr[i].days;
			i++;
		}
		total += day_get;
		printf("%d年%s月%d日前有%d天", year,month_get, day_get, total);
	}
	//else
	//{
	//	printf("请输入日子: ");
	//	scanf("%d", &day_get);
	//	
	//	printf("%d年%d月%d日前有%d天", year, month_get, day_get, total);
	//}
	*/
	/*
	//编程练习1
	char st[] = "Jan";
	func1(st);
	*/
	//printf("hello world");
	return 0;
}

void func8_e(struct seat *p)
{
	int n;
	printf("你想删除几号: ");
	scanf("%d", &n);
	getchar();
	p[n - 1].ch = 'n';
	p[n - 1].last[0] = '\0';
	p[n - 1].first[0] = '\0';
}

void func8_d(struct seat *p,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (p[i].ch == 'n')
		{
			printf("请输入姓: ");
			s_gets(p[i].last,10);
			printf("请输入名: ");
			s_gets(p[i].first,10);
			p[i].ch = 'y';
			break;
		}
	}
}

void func8_menu()
{
	printf("菜单: \n");
	printf("a) 显示空座位数:\n");
	printf("b) 显示空座位列表\n");
	printf("c) 显示按字母排序的座位表\n");
	printf("d) 为客户分配座位\n");
	printf("e) 删除作为分配\n");
	printf("f) 退出\n");
	putchar('\n');
}

void func8_c(struct seat *p, int n)
{
	struct seat temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(p[i].last, p[j].last) > 0)
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d号座位: %s %s\n", p[i].num, p[i].last, p[i].first);
	}
}

void func8_b(struct seat *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (p[i].ch == 'n')
		{
			printf("第%d个座位是空的\n", i + 1);
		}
	}
}

void func8_a(struct seat *p, int n)
{
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		if (p[i].ch == 'n')
			num++;
	}
	printf("空座位数: %d\n", num);
}

void func5_f(struct student *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("姓名: %s %s\n", p[i].person.first, p[i].person.last);
		printf("分数1: %.2f\n", p[i].grade[0]);
		printf("分数2: %.2f\n", p[i].grade[1]);
		printf("分数3: %.2f\n", p[i].grade[2]);
		printf("平均分: %.2f\n", p[i].average);
		putchar('\n');
	}
}

void func5_e(struct student *p, int n)
{
	float total = 0;
	for (int i = 0; i < n; i++)
	{
		total = 0;
		for (int j = 0; j < 3; j++)
		{
			total += p[i].grade[j];
		}
		p[i].average = total / 3;
	}
}

void s_gets(char *str, int n)
{
	int i = 0;
	char *p = fgets(str, n, stdin);
	if (p)
	{
		while (str[i] != '\n'&&str[i] != '\0')
			i++;
		if (str[i] == '\n')
			str[i] = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}
}

void func4_pput(struct info *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (strcmp(p[i].name.mid," ")==0)
		{
			printf("%s,%s---%s\n", p[i].name.first, p[i].name.last, p[i].number);
		}
		else
		{
			printf("%s,%s %c.---%s\n", p[i].name.first, p[i].name.last,p[i].name.mid[0], p[i].number);
		}
	}
}

void func4_put(struct info temp)
{
	if (strcmp(temp.name.mid, " ") == 0)
	{
		printf("%s,%s---%s\n", temp.name.first, temp.name.last, temp.number);
	}
	else
	{
		printf("%s,%s %c.---%s\n", temp.name.first, temp.name.last, temp.name.mid[0], temp.number);
	}
}

void func3_putPrice(struct book *p, int n)
{
	struct book pf;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i].price>p[j].price)
			{
				pf = p[i];
				p[i] = p[j];
				p[j] = pf;
			}
		}
	}
}

void func3_get(struct book *p,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("请输入书名: ");
		scanf("%s", p[i].name);
		getchar();
		printf("请输入作者: ");
		scanf("%s", p[i].Author);
		getchar();
		printf("请输入价格: ");
		scanf("%f", &p[i].price);
		getchar();
		putchar('\n');
	}
}

void func3_put(struct book *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s(作者): %s,$%.2f\n", p[i].name, p[i].Author, p[i].price);
	}
	putchar('\n');
}

void func3_putName(struct book *p, int n)
{
	struct book pf;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (strcmp(p[i].name, p[j].name) > 0)
			{
				pf = p[i];
				p[i] = p[j];
				p[j] = pf;
			}
		}
	}
}

void func1(char *str)
{
	int total = 0;
	int i = 0;
	while (strcmp(str, arr[i].name_3) != 0)
	{
		total += arr[i].days;
		i++;
	}
	total = total + arr[i].days;
	printf("一年中到%s月之前的天数为: %d", str, total);
}