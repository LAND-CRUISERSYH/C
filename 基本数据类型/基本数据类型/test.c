#include<stdio.h>

int main()
{
	/*
	//ʾ������.���غͰ׽��ֵ�Ļ���
	float weight;			//����
	float value;			//��������İ׽��ֵ
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:  ");
	scanf("%f", &weight);		//��ȡ�û�����
	value = 1700.0*weight*14.5833;	//���غͰ׽�Ļ������
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that!If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	*/

	/*
	//int������printf()�����е�һЩʹ��
	int ten = 10;
	int two = 2;
	printf("%d - %d = %d\n", ten, two, ten - two);
	printf("%d - %d = %d\n", ten, 2, ten - two);
	printf("%d - %d = %d\n", 10, 2, ten - two);
	*/

	/*
	//�˽��ƺ�ʮ�����Ƶ���ʾ
	int num = 100;
	printf("dec = %d,octal = %o,hex = %x\n", num, num, num);
	printf("dec = %d,octal = %#o,hex = %#x\n", num, num, num);
	*/

	/*
	//�����������
	int i = 2147483647;
	unsigned int j = 4294967295;
	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u", j, j + 1, j + 2);
	*/

	/*
	//���α��������ʹ�ӡ
	int num = 100;                  //����
	short int num1 = 2;			//������
	long int num2 = 1000;     //������
	long long int num3 = 10000;	//long long����
	unsigned int num4 = 101;        //�޷�������
	unsigned short int num5 = 3;  //�޷��Ŷ�����
	unsigned long int num6 = 1001;  //�޷��ų�����
	unsigned long long int num7 = 10001;  //�޷���long long����

	printf("num = %d %o %x\n", num,num,num);	   //�ֱ���ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡ
	printf("num1 = %hd %ho %hx\n", num1,num1,num1);	   //�ֱ���ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡ
	printf("num 2= %ld %lo %lx\n", num2,num2,num2);	   //�ֱ���ʮ���ơ��˽��ơ�ʮ�����ƴ�ӡ
	printf("num3 = %lld\n", num3);     
	printf("num4 = %u", num4);               //�޷�������
	printf("num5 = %hu\n", num5);	//�޷��Ŷ�����
	printf("num6 = %lu\n", num6);		//�޷��ų�����
	printf("num7 = %llu\n", num7);
	*/

	/*
	//�ַ���%c��%d��ӡ�Ƚ�
	char ch;
	printf("������һ���ַ�: ");
	scanf("%c", &ch);             //�û������ַ�
	printf("��������ַ�Ϊ: ");
	printf("%c %d", ch, ch);
	*/

	
	//�����ַ�ʽ��ӡfloat���ͱ�����double���ͱ���
	float num = 5;
	double sum = 714.8;
	printf("num = %f,        num = %e\n", num,num);
	printf("sum = %f,         sum = %e", sum,sum);
	

	return 0;
}