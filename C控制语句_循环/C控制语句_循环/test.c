#include<stdio.h>
#include<string.h>
#define SIZE 10
#define PAR 75

double power(double n, int p);
long square(int n);
double Test_9(double a, double b);
double money(int i);

int main()
{
	/*
	int num;
	int sum = 0;
	int status;
	printf("������һ������: ");
	status = scanf("%d", &num);
	while (status == 1)
	{
		sum = sum + num;
		printf("����������: ");
		status = scanf("%d", &num);
	}
	printf("������ӵĽ��Ϊ: %d", sum);
	*/

	/*
	const int First = 46;         //����
	const int Next = 20;         //����
	int ounces, cost;
	for (ounces = 1, cost = First; ounces <= 16; ounces++, cost += Next)
	{
		printf("%-4d $%.2f\n", ounces, cost / 100.0);
	}
	*/

	/*
	const int a = 13;
	int b;
	do
	{
		printf("����������: ");
		scanf("%d", &b);
	} while (a != b);
	printf("������ȷ!\n");
	*/

	/*
	const int a = 13;
	int b;
	printf("����������: ");
	scanf("%d", &b);
	while (a != b)
	{
		printf("����������: ");
		scanf("%d", &b);
	}
	printf("������ȷ!\n");
	*/

	/*
	int score[SIZE];
	int i, sum = 0;
	int j = 0;
	float average;
	printf("������%dλͬѧ�ĳɼ�: ", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &score[i]);
		sum = sum + score[i];
		while (i == 9&&j==0)
		{
			printf("����ĳɼ�Ϊ:         ");
			for (j = 0; j < SIZE; j++)
			{
				printf("%d ", score[j]);
			}
			printf("\n");
		}
	}
	average = (float)sum / SIZE;
	printf("�ܳɼ�Ϊ: %d,  ƽ����Ϊ: %.2f,  �ֲ�Ϊ: %.2f", sum, average, average - PAR);
	*/

	/*
	double x,z;
	int y;
	printf("�����������ָ��: ");
	while (scanf("%lf %d", &x, &y) == 2)
	{
		z = power(x, y);
		printf("%lf �� %d �η�Ϊ %lf\n", x, y, z);
		printf("�����������ָ��: ");
	}
	printf("��ȷ�˳�!\n");
	*/

	/*
	��ϰ��6
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	*/

	/*
	//��ϰ��13
	int x;
	printf("������һ����: ");
	while (scanf("%d", &x) == 1)
	{
		printf("%d * %d = %ld\n", x, x, square(x));
		printf("������һ����: ");
	}
	printf("��ȷ�˳�!\n");
	*/
	
	/*
	//�����ϰ1
	char arr[26];
	int j = 0;
	for (int i = 0; i < 26; i++)
	{
		scanf("%c", &arr[i]);
		while (i == 25&&j==0)
		{
			for (j = 0; j < 26; j++)
			{
				printf("%c", arr[j]);
			}
		}
	}
	*/
	
	/*
	//�����ϰ2
	int i,j;
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <= i + 1; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	*/

	/*
	//�����ϰ3
	int i, j;
	char ch = 'F';
	for (i = 0; i < 6; i++)
	{
		for (j = 1,ch = 'F'; j <= i + 1; j++,ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	*/
	
	/*
	//�����ϰ4
	int i, j;
	char ch = 'A';
	for (i = 0; i < 6; i++)
	{
		for (j = 1; j <= i + 1; j++,ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	*/

	/*
	//�����ϰ5
	char ch;
	int num;
	int i, j,x;
	printf("������һ����д��ĸ: ");
	scanf("%c", &ch);
	num = ch - 'A';
	for (i = 0; i < num + 1; i++)
	{
		for (j = 1, ch = 'A'; j <= i + 1; j++, ch++)
		{
			printf("%c", ch);
		}
		for (x = 0,ch = ch -2; x < i; x++,ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	*/

	/*
	//�����ϰ6
	int down, up;
	printf("�������ӡ����С���������: ");
	scanf("%d %d", &down, &up);
	for (; down <= up; down++)
	{
		printf("%d,  %d*%d=%d, %d*%d*%d=%d.\n", down, down, down, down*down, down, down, down, down*down*down);
	}
	*/

	/*
	//�����ϰ7
	char arr[20] = "hello";
	int str;
	int i = 0;
	str = strlen(arr);
	for (i = str - 1; i >= 0; i--)
	{
		printf("%c", arr[i]);
	}
	*/
	
	/*
	//�����ϰ8
	double a, b;
	printf("����������������: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%lf\n", (a - b) / (a*b));
		printf("����������������: ");
	}
	printf("��ȷ�˳�!\n");
	*/

	/*
	//�����ϰ9
	double a, b;
	printf("����������������: ");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%lf\n", Test_9(a,b));
		printf("����������������: ");
	}
	printf("��ȷ�˳�!\n");
	*/

	/*
	//�����ϰ10
	int down, up;
	int sum = 0;
	printf("������������������������: ");
	scanf("%d %d", &down, &up);
	while (down < up)
	{
		printf("�����������Ϊ: %d-%d\n", down, up);
		sum = 0;
		for (int i = down; i <= up; i++)
		{
			sum = sum + i * i;
		}
		printf("%d - %d ��ƽ��Ϊ %d - %d\n", down, up, down*down, up*up);
		printf("ƽ����Ϊ: %d\n", sum);
		printf("������������������������: ");
		scanf("%d %d", &down, &up);
	}
	printf("����������޺���������!\n");
	*/

	/*
	//�����ϰ11
	int arr[20];
	for (int i = 0; i < 8 ;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int j = 7; j >= 0; j--)
	{
		printf("%d ", arr[j]);
	}
	*/
	
	/*
	//�����ϰ12
	int i;
	int n;
	float x = 1.0;
	float y = 1.0;
	float sum = 0.0;
	printf("���������: ");
	scanf("%d", &i);
	while (i > 0)
	{
		sum = 0.0;
		for ( n = 1; n <= i; n++)
		{
			sum = sum + x / n;
		}
		printf("��һ������ǰ%d��ĺ�Ϊ: %lf\n", i, sum);
		sum = 0;
		for (int n = 1; n <= i; n++,y = -1*y)
		{
			sum = sum + y / (float)n;
		}
		printf("�ڶ�������ǰ%d��ĺ�Ϊ: %lf\n", i, sum);
		printf("���������: ");
		scanf("%d", &i);
	}
	printf("��������!\n");
	*/

	/*
	//�����ϰ13
	int arr[8];
	int n = 2;
	int i;
	for (i = 0; i < 8; i++)
	{
		n = 2;
		for (int j = 0; j <=i;j++,n = n*2)
		{			
			arr[i] = 1 * n;
		}
	}
	i = 0;
	do
	{
		printf("%d ", arr[i]);
		i++;
	} while (i < 8);
	*/

	/*
	//�����ϰ14
	double arr1[8];
	double arr2[8];
	printf("������8��double���͵�ֵ: ");
	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &arr1[i]);
	}
	arr2[0] = arr1[0];
	for (int j = 1; j < 8; j++)
	{
		arr2[j] = arr2[j - 1] + arr1[j];
	}
	for (int x = 0; x < 8; x++)
	{
		printf("%.2f  ", arr1[x]);
	}
	printf("\n");
	for (int x = 0; x < 8; x++)
	{
		printf("%.2f  ", arr2[x]);
	}
	*/

	/*
	//�����ϰ15
	char arr[255];
	int i = 0;
	while (scanf("%c",&arr[i])==1&&arr[i]!='\n')
	{
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%c", arr[j]);
	}*/

	/*
	//�����ϰ16
	int i = 1;
	while ((10*i)>money(i))
	{
		i++;
	}
	printf("��%d��Ͷ�ʶ��!",i);
	*/

	/*
	//�����ϰ17
	int i = 1;
	double balance = 100;
	while (balance>10)
	{
		balance = balance + (balance*0.08);
		balance -= 10;
		i++;
	}
	printf("��%d���ȡ�����е�Ǯ!",i);
	*/

	/*
	//�����ϰ18
	int i = 0;
	int sum = 5;
	do
	{
		i++;
		sum = sum - i;
		sum = sum * 2;
		printf("��%d����%d������.\n", i, sum);
	} while (sum <= 150);
	*/
	//printf("Hello world!\n");
	return 0;
}
	
double power(double n, int p)
{
	double pow = 1.00;
	int i = 1;
	for (i = 1; i <= p; i++)
		pow = pow * n;
	return pow;
}

long square(int n)
{
	return n * n;
}

double Test_9(double a, double b)
{
	double c;
	c = (a - b) / (a*b);
	return c;
}

double money(int i)
{
	double Money = 5.0;
	if (i == 1)
	{
		Money = 5;
	}
	else
	{
		for (int j = 0; j < i; j++)
		{
			Money = (Money + Money / 0.05) * 0.05;
		}
	}
	return Money;
}