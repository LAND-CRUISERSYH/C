#include<stdio.h>
#include<string.h>         //提供strlen()函数的原型
#define DENSITY 62.4          //人体密度(单位: 磅/立方英尺)
#define INTRODUCE "我是一个陕西人"
#define PI 3.14159            //定义符号常量PI

int main()
{
	/*
	//示例程序
	float weight, volume;             //重量 体积
	int size, letters;                      //大小  字母个数
	char name[40];                  //名字
	printf("请输入你的名字: ");
	scanf("%s", name);
	printf("请输入你的体重: ");
	scanf("%f", &weight);
	size = sizeof(name);             //字符数组大小
	letters = strlen(name);          //字符串长度
	volume = weight / DENSITY;  //体积 = 质量/密度
	printf("%s，你的体积大约为: %.2f\n", name, volume);
	printf("%s，你的名字长度为: %d\n", name, letters);
	printf("我们有%d个字节存储它!\n", size);
	*/

	/*
	//使用字符串
	char name[40];
	printf("请输入名字: ");
	scanf("%s", name);
	printf("我的名字是: %s，%s\n", name, INTRODUCE);
	*/

	/*
	//strlen()函数和sizeof()运算符的使用
	char name[40];
	printf("请输入你的名字: ");
	scanf("%s", name);
	printf("你名字的长度为: %d，所占用大小为: %zd\n", strlen(name), sizeof(name));           //数组中存放的字符串
	printf("长度为: %d，所占用大小为: %zd", strlen(INTRODUCE), sizeof(INTRODUCE));       //字符串常量
	*/

	/*
	char s[] = "hello world";
	printf("%zd,%zd", sizeof(s), strlen(s));    //12  11
	*/

	/*
	//使用define定义符号常量并运算
	float area, circum, radius;         //面积 周长 半径
	printf("请输入半径: ");
	scanf("%f", &radius);
	area = PI * radius*radius;         //面积=πrr
	circum = 2 * PI*radius;            //周长 = 2πr
	printf("circum = %.2f\n", circum);
	printf("area = %.2f", area);
	*/

	/*
	//printf()函数的使用
	int age = 22;
	float num = 6.84f;
	int sum = 780;
	printf("age = %d,radius = %f\n", age, num);
	printf("π = %f\n", PI);
	printf("%c%d\n", '$', 2 * sum);
	*/

	/*
	//使用修饰符和标记的示例(整型)
	printf("*%d*\n", 363);          //无修饰符打印*363*
	printf("*%2d*\n", 363);         //本应输出2字段宽度，待打印整数有三位数字，所以字段宽度自动扩大
	printf("*%10d*\n", 363);       //10个字段宽度，并且数字位于字段的右侧
	printf("*%-10d*\n", 363);    //10个字段宽度，-标记说明数字位于字段左侧
	*/

	/*
	//使用修饰符和标记的示例(浮点型) 
	const double num = 3759.66;     //const变量(只读)
	printf("*%f*\n", num);               //以浮点形式打印num
	printf("*%e*\n", num);               //以指数形式打印num
	printf("*%4.2f*\n", num);           //保留小数点后两位打印num
	printf("*%3.1f*\n", num);           //保留小数点后一位打印num，四舍五入
	printf("*%10.3f*\n", num);         //十个字段宽度，num位于字段的右侧，保留三位有效数字
	printf("*%10.3E*\n", num);        //十个字段宽度，num位于字段的右侧，四舍五入
	printf("*%+4.2f*\n", num);        //打印的值前面多了一个代数符号+
	printf("*%010.2f*\n", num);       //十个字段宽度，打印的值前面以0填充
	*/

	/*
	//格式标记示例
	printf("%x%X%#x\n", 31, 31, 31);            //十六进制打印31的值，%#x表示以0x开始
	printf("**%d**% d**% d**\n", 42, 42, -42);  //正值前面生成前导空格，负值前面不产生前导空格
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6); 
	/*
		%5d    字段宽度为5打印6
		%5.3d  字段宽度为5，最小位数为3，生成足够的前导0
		%05d   字段宽度为5，用前导0填充字段
		%05.3d 字段宽度为5，最小位数为3，生成足够的前导0
	*/
	
	/*
	//字符串格式示例
	printf("[%2s]\n", "Hello world!");         //字段被自动扩大为可以容纳字符串中的所有字符
	printf("[%15s]\n", "Hello world!");       //字段宽度为15，字符串位于字段右侧
	printf("[%15.2s]\n", "Hello world!");     //字段宽度为15，只打印两个字符，位于字段右侧
	printf("[%-15.2s]\n", "Hello world!");   //字段宽度为15，只打印两个字符，位于字段左侧
	*/

	/*
	//不匹配的整型转换
	short num = 336;
	short sum = -num;
	printf("num(hd) = %hd,num(hu) = %hu\n ", num, num);
	printf("sum(hd) = %hd,sum(hu) = %hu\n ", sum, sum);
	printf("num(d) = %d,num(c) = %c\n", num, num);
	printf("65618(d) = %d,65618(hd) = %hd,65618(c) = %c\n", 65618, 65618, 65618);
	*/
	
	/*
	//不匹配的浮点型转换
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	printf("%.1e  %.1e  %.1e  %.1e\n", n1, n2, n3, n4);
	printf("%ld  %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
	*/
	return 0;
}