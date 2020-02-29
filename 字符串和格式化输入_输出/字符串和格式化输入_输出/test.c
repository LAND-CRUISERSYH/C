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
	return 0;
}