#include<stdio.h>

char get_first();

int main()
{
	/*
	//�����ϰ1
	int count = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		count++;
	}
	printf("�ַ��ĸ���Ϊ: %d", count);
	*/
	//printf("Hello world!\n");

	/*
	//�����ϰ2
	char ch;
	int count = 0;
	while ((ch = getchar()) != -1)
	{
		if (ch >= 32 && ch <= 127)
		{
			printf("%c-%d ", ch, ch);
			count++;
		}
		else if (ch == '\n')
		{
			printf("%c-%d ", ch, ch);
			count++;
		}
		else if (ch == '\t')
		{
			printf("%c-%d ", ch, ch);
			count++;
		}
		else if (ch < 9)
		{
			printf("^%c-%d ", ch + 64, ch);
			count++;
		}
		else if (ch > 10)
		{
			printf("^%c-%d ", ch + 64, ch);
			count++;
		}
		if (count % 10 == 0)
			printf("\n");
	}
	*/
	
	/*
	//�����ϰ3
	int Cap_letter = 0;
	int Lower_letter = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch >= 65 && ch <= 90)
			Cap_letter++;
		else if (ch >= 97 && ch <= 122)
			Lower_letter++;
	}
	printf("��д��ĸ�ĸ���Ϊ: %d\n", Cap_letter);
	printf("Сд��ĸ�ĸ���Ϊ: %d\n", Lower_letter);
	*/

	/*
	//�����ϰ4
	char ch;
	float sum = 0;
	float n = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
		{
			n++;
			continue;
		}
		else
			sum++;
	}
	printf("ƽ��ÿ�����ʵ���ĸ��: %.2f", sum / n);
	*/

	/*
	//�����ϰ5
	char ch;
	int n = 66;
	int Max = 100;
	int Min = 1;
	printf("�Ҳ���%d!\n",n);
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'X')
		{
			Min = n;
			n = (Max + Min) / 2;
			printf("��%d��\n", n);
		}
		else if (ch == 'D')
		{
			Max = n;
			n = (Max + Min) / 2;
			printf("��%d��\n", n);
		}
		else
			printf("��������Ҳ���ʶ��Ǹ!\n");
		getchar();
	}
	*/

	/*
	//�����ϰ6
	printf("%c", get_first());
	*/

	/*
	//�����ϰ7
	char ch;
	float hours;
	while (1)
	{
		printf("*******************************************\n");
		printf("a) $8.75/hr                               b) $9.33/hr\n");
		printf("c) $10.00/hr                             d) $11.20/hr\n");
		printf("q) quit\n");
		printf("*******************************************\n");
		printf("���������Ĺ��ʵȼ�: ");
		ch = getchar();
		if (ch == 'q')
			break;
		else if (ch>='a'&&ch<='d')
		{
			printf("���������Ĺ���Сʱ��: ");
			getchar();
			scanf("%f", &hours);
			getchar();
			switch (ch)
			{
			case 'a':
				printf("���Ĺ���Ϊ: %.2f\n", 8.75*hours);
				if (8.75*hours <= 300)
					printf("˰��Ϊ: %.2f\n", 8.75*hours*0.15);
				else if (8.75*hours > 300 && 8.75*hours <= 450)
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (8.75*hours - 300)*0.2);
				else
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (8.75*hours - 450)*0.25);
				break;
			case 'b':
				printf("���Ĺ���Ϊ: %.2f\n", 9.33*hours);
				if (9.33*hours <= 300)
					printf("˰��Ϊ: %.2f\n", 9.33*hours*0.15);
				else if (9.33*hours > 300 && 9.33*hours <= 450)
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (9.33*hours - 300)*0.2);
				else
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (9.33*hours - 450)*0.25);
				break;
			case 'c':
				printf("���Ĺ���Ϊ: %.2f\n", 10.00*hours);
				if (10.00*hours <= 300)
					printf("˰��Ϊ: %.2f\n", 10.00*hours*0.15);
				else if (10.00*hours > 300 && 10.00*hours <= 450)
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (10.00*hours - 300)*0.2);
				else
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (10.00*hours - 450)*0.25);
				break;
			case 'd':
				printf("���Ĺ���Ϊ: %.2f\n",11.20*hours);
				if (11.20*hours <= 300)
					printf("˰��Ϊ: %.2f\n", 11.20*hours*0.15);
				else if (11.20*hours > 300 && 11.20*hours <= 450)
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (11.20*hours - 300)*0.2);
				else
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (11.20*hours - 450)*0.25);
				break;
			}
		}
		else
			printf("��������ȷ��ѡ��!\n");
	}
	printf("��ȷ�˳�!\n");
	*/
	
	//�����ϰ8
	float num1;
	float num2;
	int flag1, flag2;
	char ch;
	while (1)
	{
		printf("*********************************\n");
		printf("a) +                                     s) -\n");
		printf("m) *                                      d) /\n");
		printf("q) quit\n");
		printf("*********************************\n");
		printf("����������ѡ��: ");
		ch = getchar();
		if (ch == 'q')
			break;
		printf("�������һ������: ");
		flag1 = scanf("%f", &num1);
		getchar();
		printf("������ڶ�������: ");
		flag2 = scanf("%f", &num2);
		getchar();
		if (flag1 != 1 || flag2 != 1)
		{
			printf("��������,����������!\n");
			continue;
		}
		switch (ch)
		{
		case 'a':
			printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
			break;
		case 's':
			printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
			break;
		case 'm':
			printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
			break;
		case 'd':
			while (1)
			{
				if (num2 == 0)
				{
					printf("����������ڶ�����: ");
					scanf("%f", &num2);
					getchar();
				}
				else
				{
					printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
					break;
				}
			}
		}
	}
	printf("��ȷ�˳�!\n");
	return 0;
}

char get_first()
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (ch == ' ')
			continue;
		else
			break;
	}
	return ch;
}