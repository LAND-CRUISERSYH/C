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

	/*
	//�����ַ�ʽ��ӡfloat���ͱ�����double���ͱ���
	float num = 5;
	double sum = 714.8;
	printf("num = %f,        num = %e\n", num,num);    //С����ʽ
	printf("sum = %f,         sum = %e", sum,sum);        //ָ����ʽ
	*/

	/*
	//��ӡ�����͵��ڴ��С
	printf("int����: %zd�ֽ�\n", sizeof(int));
	printf("short����: %zd�ֽ�\n", sizeof(short));
	printf("long����: %zd�ֽ�\n", sizeof(long));
	printf("long long����: %zd�ֽ�\n", sizeof(long long));
	printf("char����: %zd�ֽ�\n", sizeof(char));
	printf("float����: %zd�ֽ�\n", sizeof(float));
	printf("double����: %zd�ֽ�\n", sizeof(double));
	*/

	/*
	//printf()�������μ��
	int num = 4;
	int sum = 5;
	float PI = 3.14f;
	float score = 60.1f;
	printf("%d\n", num, sum);            //����̫��
	printf("%d %d %d\n", num);		   //����̫��
	printf("%d %d\n", PI, score);		  //������ƥ��
	*/

	/*
	//ת������ʾ��
	float salary;
	printf("\a����������Ҫ����н: ");              //����  \a
	printf(" $__________\b\b\b\b\b\b\b");       //�˸�  \b
	scanf("%f", &salary);                        //������н
	printf("\n\t$%.2f һ���£�һ��%.2f", salary, 12.0*salary); //���� \n  ˮƽ�Ʊ�� \t
	printf("\r����!\n");            //�س� \r
	*/
	
	/*
	//����ASCII(0~127)ֵ��Ȼ���ӡ���Ӧ���ַ�
    int ch;
	printf("������һ���ַ�: ");
	scanf("%d", &ch);
	printf("���Ӧ���ַ�Ϊ: %c", ch);
	*/

	/*
	//���ַ�ʽ��ӡfloat����
	float num;
	printf("������һ��������: ");
	scanf("%f", &num);
	printf("num = %f\n", num);        //С������ʽ��ӡ
	printf("num = %e\n", num);		 //ָ����ʽ��ӡ
	*/

	/*
	//�����ϰ.����ת������
	int age;                         //����
	double second;                //��
	printf("����������: ");
	scanf("%d", &age);
	second = age * 3.156e+7;        //һ���Լ3.156*10e+7��
	printf("%d���Ӧ������Ϊ%f\n", age, second);
	*/

	/*
    //�����ϰ.ˮ���Ӻ�ˮ�Ŀ���������
	int water;          //ˮ�Ŀ�����
	int m;           //����ˮ������
    long double water_num;   //ˮ���ӵ�����
	printf("������ˮ�Ŀ�����: ");
	scanf("%d", &water);
	m = water * 950;        //һ����ˮ��Լ950��
	water_num = m / (3.0*10e-23);     //һ��ˮ���ӵ�����ԼΪ3.0*10e-23��
	printf("ˮ���ӵ�����Ϊ: %d", water_num);
	*/

	/*
	//�����ϰ.��߻���
	int inch_height;                    //���(Ӣ��)
	float height;                    //���(����)
	printf("���������(��Ӣ��Ϊ��λ): ");
	scanf("%d", &inch_height);       
	height = inch_height * 2.54;			//һӢ���൱��2.54cm
	printf("�������Ϊ%.2fcm\n", height);
	*/

	/*
	//�����ϰ.���������������
	float _cup;            //��
	float _pint;		//Ʒ��
	float _ounce;		//��˾
	float _soup;			//����
	float _tea;			//����
	printf("�����뱭��: ");
	scanf("%f", &_cup);
	_pint = _cup / 2;        //һƷ�ѵ���2��
	_ounce = _cup * 8;		//һ������8��˾
	_soup = _ounce * 2;		//һ��˾����2����
	_tea = _soup * 3;			//һ���׵���3����
	printf("%.1f�� = %.1fƷ��\n",_cup,_pint);
	printf("%.1f�� = %.1f��˾\n",_cup,_ounce);
	printf("%.1f�� = %.1f����\n",_cup,_soup);
	printf("%.1f�� = %.1f����\n",_cup,_tea);
	*/
	return 0;
}