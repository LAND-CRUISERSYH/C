#include<stdio.h>
#include<string.h>         //�ṩstrlen()������ԭ��
#define DENSITY 62.4          //�����ܶ�(��λ: ��/����Ӣ��)
#define INTRODUCE "����һ��������"
#define PI 3.14159            //������ų���PI
#define B "booboo"
#define X 10
#define BOOK "War and Peace"

int main()
{
	/*
	//ʾ������
	float weight, volume;             //���� ���
	int size, letters;                      //��С  ��ĸ����
	char name[40];                  //����
	printf("�������������: ");
	scanf("%s", name);
	printf("�������������: ");
	scanf("%f", &weight);
	size = sizeof(name);             //�ַ������С
	letters = strlen(name);          //�ַ�������
	volume = weight / DENSITY;  //��� = ����/�ܶ�
	printf("%s����������ԼΪ: %.2f\n", name, volume);
	printf("%s��������ֳ���Ϊ: %d\n", name, letters);
	printf("������%d���ֽڴ洢��!\n", size);
	*/

	/*
	//ʹ���ַ���
	char name[40];
	printf("����������: ");
	scanf("%s", name);
	printf("�ҵ�������: %s��%s\n", name, INTRODUCE);
	*/

	/*
	//strlen()������sizeof()�������ʹ��
	char name[40];
	printf("�������������: ");
	scanf("%s", name);
	printf("�����ֵĳ���Ϊ: %d����ռ�ô�СΪ: %zd\n", strlen(name), sizeof(name));           //�����д�ŵ��ַ���
	printf("����Ϊ: %d����ռ�ô�СΪ: %zd", strlen(INTRODUCE), sizeof(INTRODUCE));       //�ַ�������
	*/

	/*
	char s[] = "hello world";
	printf("%zd,%zd", sizeof(s), strlen(s));    //12  11
	*/

	/*
	//ʹ��define������ų���������
	float area, circum, radius;         //��� �ܳ� �뾶
	printf("������뾶: ");
	scanf("%f", &radius);
	area = PI * radius*radius;         //���=��rr
	circum = 2 * PI*radius;            //�ܳ� = 2��r
	printf("circum = %.2f\n", circum);
	printf("area = %.2f", area);
	*/

	/*
	//printf()������ʹ��
	int age = 22;
	float num = 6.84f;
	int sum = 780;
	printf("age = %d,radius = %f\n", age, num);
	printf("�� = %f\n", PI);
	printf("%c%d\n", '$', 2 * sum);
	*/

	/*
	//ʹ�����η��ͱ�ǵ�ʾ��(����)
	printf("*%d*\n", 363);          //�����η���ӡ*363*
	printf("*%2d*\n", 363);         //��Ӧ���2�ֶο�ȣ�����ӡ��������λ���֣������ֶο���Զ�����
	printf("*%10d*\n", 363);       //10���ֶο�ȣ���������λ���ֶε��Ҳ�
	printf("*%-10d*\n", 363);    //10���ֶο�ȣ�-���˵������λ���ֶ����
	*/

	/*
	//ʹ�����η��ͱ�ǵ�ʾ��(������) 
	const double num = 3759.66;     //const����(ֻ��)
	printf("*%f*\n", num);               //�Ը�����ʽ��ӡnum
	printf("*%e*\n", num);               //��ָ����ʽ��ӡnum
	printf("*%4.2f*\n", num);           //����С�������λ��ӡnum
	printf("*%3.1f*\n", num);           //����С�����һλ��ӡnum����������
	printf("*%10.3f*\n", num);         //ʮ���ֶο�ȣ�numλ���ֶε��Ҳ࣬������λ��Ч����
	printf("*%10.3E*\n", num);        //ʮ���ֶο�ȣ�numλ���ֶε��Ҳ࣬��������
	printf("*%+4.2f*\n", num);        //��ӡ��ֵǰ�����һ����������+
	printf("*%010.2f*\n", num);       //ʮ���ֶο�ȣ���ӡ��ֵǰ����0���
	*/

	/*
	//��ʽ���ʾ��
	printf("%x%X%#x\n", 31, 31, 31);            //ʮ�����ƴ�ӡ31��ֵ��%#x��ʾ��0x��ʼ
	printf("**%d**% d**% d**\n", 42, 42, -42);  //��ֵǰ������ǰ���ո񣬸�ֵǰ�治����ǰ���ո�
	printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6); 
	/*
		%5d    �ֶο��Ϊ5��ӡ6
		%5.3d  �ֶο��Ϊ5����Сλ��Ϊ3�������㹻��ǰ��0
		%05d   �ֶο��Ϊ5����ǰ��0����ֶ�
		%05.3d �ֶο��Ϊ5����Сλ��Ϊ3�������㹻��ǰ��0
	*/
	
	/*
	//�ַ�����ʽʾ��
	printf("[%2s]\n", "Hello world!");         //�ֶα��Զ�����Ϊ���������ַ����е������ַ�
	printf("[%15s]\n", "Hello world!");       //�ֶο��Ϊ15���ַ���λ���ֶ��Ҳ�
	printf("[%15.2s]\n", "Hello world!");     //�ֶο��Ϊ15��ֻ��ӡ�����ַ���λ���ֶ��Ҳ�
	printf("[%-15.2s]\n", "Hello world!");   //�ֶο��Ϊ15��ֻ��ӡ�����ַ���λ���ֶ����
	*/

	/*
	//��ƥ�������ת��
	short num = 336;
	short sum = -num;
	printf("num(hd) = %hd,num(hu) = %hu\n ", num, num);
	printf("sum(hd) = %hd,sum(hu) = %hu\n ", sum, sum);
	printf("num(d) = %d,num(c) = %c\n", num, num);
	printf("65618(d) = %d,65618(hd) = %hd,65618(c) = %c\n", 65618, 65618, 65618);
	*/
	
	/*
	//��ƥ��ĸ�����ת��
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	printf("%.1e  %.1e  %.1e  %.1e\n", n1, n2, n3, n4);
	printf("%ld  %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
	*/

	/*
	//printf(�����ķ���ֵ
	int num = 202;
	int sum;
	sum = printf("%d ,Hello world\n", num);
	printf("printf()������ӡ��%d���ַ�!\n", sum);
	*/

	/*unsigned int width, number;
	int num = 256;       
	double weight = 159.6;
	printf("�������ֶο��: ");
	scanf("%d", &width);
	printf("num = %*d!\n", width, num);     
	printf("�������ֶο�ȼ�����λ��: ");
	scanf("%d %d", &width, &number);
	printf("weight = %*.*f!\n", width, number, weight);*/

	/*
	int n;
	printf("���ӡ����ĵ�������: ");
	scanf("%*d %*d %d", &n);
	printf("%d\n", n);
	*/
	
	/*
	//��ϰ��1
	char name[40];
	printf("�������������: ");
	scanf("%s", name);
	printf("���������: %s!\n", name);
	*/
	
	/*
	//��ϰ��3
	printf("\"Hello world!\"\n");
	*/
	
	/*
	//��ϰ��4
	int age;
	char name[40];
	int xp;
	printf("�������������: ");
	scanf("%s", name);
	printf("%s,���������: ", name);
	scanf("%d", &age);
	xp = age + X;
	printf("����%s,����������: %d", B, xp);
	*/

	/*
	//��ϰ��5
	double cost = 12.99;
	float percent = 80.0;
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
	printf("That is %d%% of list.",(int)percent);
	*/
	
	/*
	//��ϰ��9
	int a;
	scanf("%d", &a);
	char c[20];
	scanf("%s", c);
	char d[10];
	int d1;
	scanf("%s %d", d, &d1);
	char e[10];
	int e1;
	scanf("%*s %d", &e1);
	*/

	/*
	//�����ϰ1
	char firstname[10];
	char lastname[10];
	printf("����������: ");
	scanf("%s", lastname);
	printf("����������: ");
	scanf("%s", firstname);
	printf("��ӭ%s,%s!", lastname, firstname);
	*/
	
	/*
	//�����ϰ2
	char name[20];
	printf("���������ֺ�����: ");
	scanf("%s", name);
	int str = strlen(name);
	int width = strlen(name) + 3;
	printf("��ӭ\"%s\"!\n", name);
	printf("��ӭ\"%+20s\"!\n", name);
	printf("��ӭ\"%-20s\"!\n", name);
	printf("��ӭ%-*.*s!",width,str,name );
	*/

	/*
	//�����ϰ3
	float number;
	scanf("%f", &number);
	printf("%f\n", number);
	printf("%e", number);
	*/
	
	/*
	//�����ϰ4
	float high;
	char name[40];
	printf("���������: ");
	scanf("%f", &high);
	printf("����������: ");
	scanf("%s", name);
	printf("%s,you are %.3f feet rall.\n", name, high);
	*/

	/*
	//�����ϰ5
	float v, size, times;
	printf("�������ļ���С: ");
	scanf("%f", &size);
	printf("�����������ٶ�: ");
	scanf("%f", &v);
	times = (size * 8) / v;
	printf("At %.2f megabits per second,a file of %.2f megabytes.\n", v, size);
	printf("downloads in %.2f seconds.", times);
	*/

	/*
	�����ϰ6
	char firstname[10];
	char lastname[10];
	printf("����������: ");
	scanf("%s", lastname);
	printf("����������: ");
	scanf("%s", firstname);
	int strfirst = strlen(firstname);
	int strlast = strlen(lastname);
	printf("%s %s\n", lastname, firstname);
	printf("%*.d%*.d\n", strlast, strlast, strfirst+ 1, strfirst);
	printf("%-*.d %-*.d", strlast, strlast, strfirst + 1, strfirst);
	*/
	
	/*
	//�����ϰ8
	float length;
	float Consumption;
	printf("���������: ");
	scanf("%f", &length);
	printf("�����������: ");
	scanf("%f", &Consumption);
	float num = length / Consumption;
	printf("����ÿ����������ʻ��Ӣ����Ϊ: %.1f\n", num);
	const float oil = 3.785;
	const float mile = 1.609;
	float Consumption1 = oil * Consumption;
	float length1 = mile * length/100;
	printf("����ÿ��������ʻ�Ĺ�����Ϊ: %.1f", length1 / Consumption1);
	*/
	return 0;
}