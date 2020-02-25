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

	
	//以两种方式打印float类型变量和double类型变量
	float num = 5;
	double sum = 714.8;
	printf("num = %f,        num = %e\n", num,num);
	printf("sum = %f,         sum = %e", sum,sum);
	

	return 0;
}