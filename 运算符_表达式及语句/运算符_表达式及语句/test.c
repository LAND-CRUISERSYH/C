#include<stdio.h>
#define ADJUST 7.1       //�ַ�����
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
	printf("�����¶�Ϊ: %lf\n", a / b * (Tem - c));
	const double d = 273.16;
	printf("�����¶�Ϊ: %lf\n", Tem + d);
}

int main()
{
	/*
	const double SCALE = 0.333;        //const����
	double shoe, foot;
	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%.1f����Ь��Ϊ%.2fӢ��!\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("Ь��̫��!");
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
	printf("%d\n", 6 / 3);      //������Ϊ2
	printf("%d\n", 6 / 4);	      //������Ϊ1
	printf("%1.2f\n", 6.5 / 4);  //������Ϊ1.63
	*/

	/*
	int n = 0;
	size_t intSize;
	intSize = sizeof(int);
	printf("����%dռ%d���ֽڣ�intSize = %d", n, sizeof(n), intSize);
	*/

	/*
	int sec, min, left;             //�����룬�֣�ģ����
	printf("����������: ");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / num;
		left = sec % num;
		printf("%d �뻻���Ϊ: %d:%d\n", sec, min, left);
		printf("����������: ");
		scanf("%d", &sec);
	}
	printf("���������������!\n");
	*/

	/*
	int a = 1, b = 1;
	int A = a++;   //��׺����
	int B = ++b;   //ǰ׺����
	printf("a = %d,b = %d\n", a, b);    //a = 2,b = 2
	printf("A = %d,B = %d", A, B);      //A = 1,B = 2
	*/

	/*
	int a = 5, b = 5;
	int A = a--;   //��׺����
	int B = --b;   //ǰ׺����
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
	//��ϰ��9
	int n = 97;
	while (n <= 103)
	{
		printf("%5c", n);
		n++;
	}
	printf("\n");
	*/

	/*
	//�����ϰ1
	int minutes;
	printf("���������: ");
	scanf("%d", &minutes);
	while (minutes > 0)
	{
		printf("�����Сʱ����Ϊ: %d:%d\n", minutes / num, minutes % num);
		printf("���������: ");
		scanf("%d", &minutes);
	}
	printf("�������������!\n");
	*/

	/*
	//�����ϰ2
	int number,sum;
	printf("������һ������: ");
	scanf("%d", &number);
	sum = number + 10;
	while (number <= sum)
	{
		printf("%d ", number);
		number++;
	}
	*/
	
	/*
	//�����ϰ3
	int days;
	printf("����������: ");
	scanf("%d", &days);
	while (days > 0)
	{
		printf("%d days are %d weeks,%d days\n", days, days / 7, days % 7);
		printf("����������: ");
		scanf("%d", &days);
	}
	printf("���������������!");
	*/
	
	/*
	//�����ϰ4
	float height;
	printf("���������: ");
	scanf("%f", &height);
	while (height > 0)
	{
		printf("%.2f cm = %.2f inches.\n", height, height*0.39);
		printf("���������: ");
		scanf("%f", &height);
	}
	printf("��������������!");
	*/

	/*
	//�����ϰ5
	int days;
	int number = 0;
	int sum = 0;
	printf("������һ������: ");
	scanf("%d", &days);
	while (sum <= days)
	{
		number = number + sum;
		sum++;
	}
	printf("%d��һ��׬�� %dԪ.\n", days, number);
	*/

	/*
	//�����ϰ6
	int days;
	int number = 0;
	int sum = 0;
	printf("������һ������: ");
	scanf("%d", &days);
	while (sum <= days)
	{
		number = number + sum*sum;
		sum++;
	}
	printf("%d��һ��׬�� %dԪ.\n", days, number);
	*/

	/*
	//�����ϰ7
	double n;
	printf("������һ��double���͵�ֵ: ");
	scanf("%lf", &n);
	Cube(n);
	*/

	/*
	//�����ϰ8
	int a, b;
	printf("������ڶ����������: ");
	scanf("%d", &b);
	printf("�������һ���������: ");
	scanf("%d", &a);
	while (a > 0 && b > 0)
	{
		printf("%d %% %d = %d\n", a, b, a%b);
		printf("�������һ���������: ");
		scanf("%d", &a);
	}
	printf("���������������!\n");
	*/

	/*
	//�����ϰ9
	double Tem;
	printf("������һ�������¶�: ");
	scanf("%lf", &Tem);
	while ((Tem<'a'||Tem>'z') && (Tem < 'A'||Tem>'Z'))
	{
		Temperatures(Tem);
		printf("������һ�������¶�: ");
		scanf("%lf", &Tem);
	}
	printf("������¶�������!");
	*/
	//printf("Hello world!\n");
	return 0;
}