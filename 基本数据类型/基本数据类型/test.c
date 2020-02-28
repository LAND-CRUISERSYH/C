#include<stdio.h>

int main()
{
	/*
	//示例程序.体重和白金价值的换算
	float weight;			//体重
	float value;			//相等重量的白金价值
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:  ");
	scanf("%f", &weight);		//获取用户输入
	value = 1700.0*weight*14.5833;	//体重和白金的换算规则
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that!If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	*/

	/*
	//int类型在printf()函数中的一些使用
	int ten = 10;
	int two = 2;
	printf("%d - %d = %d\n", ten, two, ten - two);
	printf("%d - %d = %d\n", ten, 2, ten - two);
	printf("%d - %d = %d\n", 10, 2, ten - two);
	*/

	/*
	//八进制和十六进制的显示
	int num = 100;
	printf("dec = %d,octal = %o,hex = %x\n", num, num, num);
	printf("dec = %d,octal = %#o,hex = %#x\n", num, num, num);
	*/

	/*
	//整数溢出测试
	int i = 2147483647;
	unsigned int j = 4294967295;
	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u", j, j + 1, j + 2);
	*/

	/*
	//整形变量声明和打印
	int num = 100;                  //整型
	short int num1 = 2;			//短整型
	long int num2 = 1000;     //长整型
	long long int num3 = 10000;	//long long类型
	unsigned int num4 = 101;        //无符号整型
	unsigned short int num5 = 3;  //无符号短整型
	unsigned long int num6 = 1001;  //无符号长整型
	unsigned long long int num7 = 10001;  //无符号long long类型

	printf("num = %d %o %x\n", num,num,num);	   //分别以十进制、八进制、十六进制打印
	printf("num1 = %hd %ho %hx\n", num1,num1,num1);	   //分别以十进制、八进制、十六进制打印
	printf("num 2= %ld %lo %lx\n", num2,num2,num2);	   //分别以十进制、八进制、十六进制打印
	printf("num3 = %lld\n", num3);     
	printf("num4 = %u", num4);               //无符号整型
	printf("num5 = %hu\n", num5);	//无符号短整型
	printf("num6 = %lu\n", num6);		//无符号长整型
	printf("num7 = %llu\n", num7);
	*/

	/*
	//字符的%c和%d打印比较
	char ch;
	printf("请输入一个字符: ");
	scanf("%c", &ch);             //用户输入字符
	printf("您输入的字符为: ");
	printf("%c %d", ch, ch);
	*/

	/*
	//以两种方式打印float类型变量和double类型变量
	float num = 5;
	double sum = 714.8;
	printf("num = %f,        num = %e\n", num,num);    //小数方式
	printf("sum = %f,         sum = %e", sum,sum);        //指数方式
	*/

	/*
	//打印各类型的内存大小
	printf("int类型: %zd字节\n", sizeof(int));
	printf("short类型: %zd字节\n", sizeof(short));
	printf("long类型: %zd字节\n", sizeof(long));
	printf("long long类型: %zd字节\n", sizeof(long long));
	printf("char类型: %zd字节\n", sizeof(char));
	printf("float类型: %zd字节\n", sizeof(float));
	printf("double类型: %zd字节\n", sizeof(double));
	*/

	/*
	//printf()函数传参检查
	int num = 4;
	int sum = 5;
	float PI = 3.14f;
	float score = 60.1f;
	printf("%d\n", num, sum);            //参数太多
	printf("%d %d %d\n", num);		   //参数太少
	printf("%d %d\n", PI, score);		  //参数不匹配
	*/

	/*
	//转义序列示例
	float salary;
	printf("\a请输入你想要的月薪: ");              //警报  \a
	printf(" $__________\b\b\b\b\b\b\b");       //退格  \b
	scanf("%f", &salary);                        //输入月薪
	printf("\n\t$%.2f 一个月，一年%.2f", salary, 12.0*salary); //换行 \n  水平制表符 \t
	printf("\r加油!\n");            //回车 \r
	*/
	
	/*
	//输入ASCII(0~127)值，然后打印相对应的字符
    int ch;
	printf("请输入一个字符: ");
	scanf("%d", &ch);
	printf("相对应的字符为: %c", ch);
	*/

	/*
	//两种方式打印float变量
	float num;
	printf("请输入一个浮点数: ");
	scanf("%f", &num);
	printf("num = %f\n", num);        //小数点形式打印
	printf("num = %e\n", num);		 //指数形式打印
	*/

	/*
	//编程练习.年龄转换成秒
	int age;                         //年龄
	double second;                //秒
	printf("请输入年龄: ");
	scanf("%d", &age);
	second = age * 3.156e+7;        //一年大约3.156*10e+7秒
	printf("%d岁对应的秒数为%f\n", age, second);
	*/

	/*
    //编程练习.水分子和水的夸脱数换算
	int water;          //水的夸脱数
	int m;           //夸脱水的质量
    long double water_num;   //水分子的数量
	printf("请输入水的夸脱数: ");
	scanf("%d", &water);
	m = water * 950;        //一夸脱水大约950克
	water_num = m / (3.0*10e-23);     //一个水分子的质量约为3.0*10e-23克
	printf("水分子的数量为: %d", water_num);
	*/

	/*
	//编程练习.身高换算
	int inch_height;                    //身高(英寸)
	float height;                    //身高(厘米)
	printf("请输入身高(以英寸为单位): ");
	scanf("%d", &inch_height);       
	height = inch_height * 2.54;			//一英寸相当于2.54cm
	printf("您的身高为%.2fcm\n", height);
	*/

	/*
	//编程练习.美国体积测量换算
	float _cup;            //杯
	float _pint;		//品脱
	float _ounce;		//盎司
	float _soup;			//汤勺
	float _tea;			//茶勺
	printf("请输入杯数: ");
	scanf("%f", &_cup);
	_pint = _cup / 2;        //一品脱等于2杯
	_ounce = _cup * 8;		//一杯等于8盎司
	_soup = _ounce * 2;		//一盎司等于2汤勺
	_tea = _soup * 3;			//一汤勺等于3茶勺
	printf("%.1f杯 = %.1f品脱\n",_cup,_pint);
	printf("%.1f杯 = %.1f盎司\n",_cup,_ounce);
	printf("%.1f杯 = %.1f汤勺\n",_cup,_soup);
	printf("%.1f杯 = %.1f茶勺\n",_cup,_tea);
	*/
	return 0;
}