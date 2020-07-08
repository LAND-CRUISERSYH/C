#include<stdio.h>
#define ADJUST 7.1       //字符常量
#define num 60

/*
void count(int n)
{
	while (n > 0)
	{
		printf("#");
		n--;
	}
	printf("\n");
}
*/

/*
void Cube(double n)
{
	printf("n*n*n = %.2f\n", n*n*n);
}
*/

void Temperatures(double Tem)
{
	const double a = 5.0;
	const double b = 9.0;
	const double c = 32.0;
	printf("摄氏温度为: %lf\n", a / b * (Tem - c));
	const double d = 273.16;
	printf("开氏温度为: %lf\n", Tem + d);
}

int main()
{
	/*
	const double SCALE = 0.333;        //const变量
	double shoe, foot;
	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%.1f的码鞋长为%.2f英寸!\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("鞋码太大!");
	*/

	/*
	int num = 1;
	while (num < 21)
	{
		printf("%d%6d\n", num, num*num);
		num = num + 1;
	}
	*/

	/*
	printf("%d\n", 6 / 3);      //输出结果为2
	printf("%d\n", 6 / 4);	      //输出结果为1
	printf("%1.2f\n", 6.5 / 4);  //输出结果为1.63
	*/

	/*
	int n = 0;
	size_t intSize;
	intSize = sizeof(int);
	printf("整数%d占%d个字节，intSize = %d", n, sizeof(n), intSize);
	*/

	/*
	int sec, min, left;             //声明秒，分，模后秒
	printf("请输入秒数: ");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / num;
		left = sec % num;
		printf("%d 秒换算成为: %d:%d\n", sec, min, left);
		printf("请输入秒数: ");
		scanf("%d", &sec);
	}
	printf("输入的秒数无意义!\n");
	*/

	/*
	int a = 1, b = 1;
	int A = a++;   //后缀递增
	int B = ++b;   //前缀递增
	printf("a = %d,b = %d\n", a, b);    //a = 2,b = 2
	printf("A = %d,B = %d", A, B);      //A = 1,B = 2
	*/

	/*
	int a = 5, b = 5;
	int A = a--;   //后缀递增
	int B = --b;   //前缀递增
	printf("a = %d,b = %d\n", a, b);    //a = 4,b = 4
	printf("A = %d,B = %d", A, B);      //A = 5,B = 4
	*/

	/*
	char ch;
	int i;
	float f;
	f = i = ch = 'C';
	printf("ch = %c,i = %d,f = %2.2f\n", ch, i, f);
	ch = ch + 1;
	i = f + 2 * ch;
	f = 2 * ch + i;
	printf("ch = %c,i = %d,f = %2.2f\n", ch, i, f);
	ch = 1107;
	printf("ch = %c\n", ch);
	ch = 80.89;
	printf("ch = %c\n", ch);
	*/

	/*
	int times = 5;
	char ch = '!';
	float f = 6.0f;
	count(times);
	count(ch);
	count(f);
	*/

	/*
	//复习题9
	int n = 97;
	while (n <= 103)
	{
		printf("%5c", n);
		n++;
	}
	printf("\n");
	*/

	/*
	//编程练习1
	int minutes;
	printf("请输入分钟: ");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		printf("换算成小时分钟为: %d:%d\n", minutes / num, minutes % num);
		printf("请输入分钟: ");
		scanf("%d", &minutes);
	}
	printf("输入分钟无意义!\n");
	*/

	/*
	//编程练习2
	int number,sum;
	printf("请输入一个整数: ");
	scanf("%d", &number);
	sum = number + 10;
	while (number <= sum)
	{
		printf("%d ", number);
		number++;
	}
	*/
	
	/*
	//编程练习3
	int days;
	printf("请输入天数: ");
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days are %d weeks,%d days\n", days, days / 7, days % 7);
		printf("请输入天数: ");
		scanf("%d", &days);
	}
	printf("输入的天数无意义!");
	*/
	
	/*
	//编程练习4
	float height;
	printf("请输入身高: ");
	scanf("%f", &height);
	while (height > 0)
	{
		printf("%.2f cm = %.2f inches.\n", height, height*0.39);
		printf("请输入身高: ");
		scanf("%f", &height);
	}
	printf("输入的身高无意义!");
	*/

	/*
	//编程练习5
	int days;
	int number = 0;
	int sum = 0;
	printf("请输入一个天数: ");
	scanf("%d", &days);
	while (sum <= days)
	{
		number = number + sum;
		sum++;
	}
	printf("%d天一共赚了 %d元.\n", days, number);
	*/

	/*
	//编程练习6
	int days;
	int number = 0;
	int sum = 0;
	printf("请输入一个天数: ");
	scanf("%d", &days);
	while (sum <= days)
	{
		number = number + sum*sum;
		sum++;
	}
	printf("%d天一共赚了 %d元.\n", days, number);
	*/

	/*
	//编程练习7
	double n;
	printf("请输入一个double类型的值: ");
	scanf("%lf", &n);
	Cube(n);
	*/

	/*
	//编程练习8
	int a, b;
	printf("请输入第二个运算对象: ");
	scanf("%d", &b);
	printf("请输入第一个运算对象: ");
	scanf("%d", &a);
	while (a > 0 && b > 0)
	{
		printf("%d %% %d = %d\n", a, b, a%b);
		printf("请输入第一个运算对象: ");
		scanf("%d", &a);
	}
	printf("输入的数字无意义!\n");
	*/

	/*
	//编程练习9
	double Tem;
	printf("请输入一个华氏温度: ");
	scanf("%lf", &Tem);
	while ((Tem<'a'||Tem>'z') && (Tem < 'A'||Tem>'Z'))
	{
		Temperatures(Tem);
		printf("请输入一个华氏温度: ");
		scanf("%lf", &Tem);
	}
	printf("输入的温度无意义!");
	*/
	//printf("Hello world!\n");
	return 0;
}