#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#define COVERAGE 350

int main()
{
	/*
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;
	printf("�������¶�(��qֹͣ����): ");
	while (scanf("%f", &temperature) == 1)
	{
		all_days++;
		if (temperature < FREEZING)
		{
			cold_days++;
		}
	}
	if (all_days != 0)
	{
		printf("%d ��������µ�����ռ��Ϊ: %.1f%%\n", all_days, 100 * (float)cold_days / all_days);
	}
	else
		printf("û����������!\n");
	*/

	/*
	char ch;
	ch = getchar();
	while (ch != '\n')
	{
		if (ch == ' ')
			putchar(ch);
		else
			putchar(ch + 1);
		ch = getchar();
	}
	putchar(ch);
	*/

	/*
	char ch;
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);
	*/

	/*
	long num;
	long x;             
	_Bool flag;
	printf("������һ����: ");
	while (scanf("%ld",&num)==1)
	{
		for (x = 2, flag = true; (x*x) <= num; x++)
		{
			if (num%x == 0)
			{
				if (x*x != num)
					printf("%ld ��Լ��Ϊ: %ld��%ld\n", num, x, num / x);
				else
					printf("%ld ��Լ��Ϊ: %ld\n", num, x);
				flag = false;
			}
		}
		if (flag)
		{
			printf("%ld ��һ������\n", num);
		}
		printf("������һ����: ");
	}
	printf("�����˳�!\n");
	*/

	/*
	const char ch = '.';
	char c;
	int count = 0;
	while ((c = getchar()) != '.')
	{
		if ((ch!='"')&&(ch!='\''))
			count++;
	}
	printf("��˫���ź͵�����֮����ַ�����Ϊ: %d", count);
	*/

	/*
	int area;
	int sum;
	printf("��������Ҫˢ�����: ");
	while (scanf("%d", &area) == 1)
	{
		sum = area / COVERAGE;
		sum += (area%COVERAGE == 0) ? 0 : 1;
		printf("%d ƽ��Ӣ����Ҫ %d ������\n", area, sum);
		printf("��������Ҫˢ�����: ");
	}
	printf("��ȷ�˳�!\n");
	*/

	/*
	float length, width;
	printf("��������εĳ�: ");
	while (scanf("%f", &length) == 1)
	{
		printf("���εĳ�Ϊ: %.2f\n", length);
		printf("��������εĿ�: ");
		if (scanf("%f", &width) != 1)
			break;
		printf("���εĿ�Ϊ: %.2f\n", width);
		printf("���ε����Ϊ: %.2f\n", length*width);
		printf("��������εĳ�: ");
	}
	printf("��ȷ�˳�!\n");
	*/
	
	/*
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch != '\n')
		{
			printf("Step 1\n");
			if (ch == 'b')
			{
				break;
			}
			else if (ch != 'c')
			{
				if (ch != 'h')
					printf("Step 2\n");
				printf("Step 3\n");
			}
		}
	}
	printf("Done \n");
	*/

	/*
	char ch;
	while ((ch = getchar())!='#')
	{
		if (ch != '\n')
		{
			printf("Step 1\n");
			if (ch == 'b')
				break;
			else if(ch != 'c')
			{
				if (ch != 'h')
					printf("Step 2\n");
				printf("Step 3\n");
			}
		}
	}
	printf("Done\n");
	*/

	/*
	//�����ϰ1
	char ch;
	int num_1 = 0, num_2 = 0, num_3 = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			num_1++;
		else if (ch == '\n')
			num_2++;
		else
			num_3++;
	}
	printf("�ո��ַ�������Ϊ: %d\n", num_1);
	printf("�����ַ�������Ϊ: %d\n", num_2);
	printf("�����ַ�������Ϊ: %d\n", num_3);
	*/

	/*
	//�����ϰ2
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if ((count!=0)&&(count%8==0))
			printf("\n");
		printf("(%c,%d)", ch, ch);
		count++;
	}
	*/
	
	/*
	//�����ϰ3
	int get_int;
	int num_even = 0;			//ż������
	float sum_even = 0;
	int num_odd = 0;			//��������
	float sum_odd = 0;
	while ((scanf("%d", &get_int)))
	{
		if (get_int != 0)
		{
			if (get_int % 2 == 0)
			{
				num_even++;
				sum_even += get_int;
			}
			else
			{
				num_odd++;
				sum_odd += get_int;
			}
		}
		else
			break;
	}
	printf("ż���ĸ���Ϊ: %d,ƽ��ֵΪ: %.2f\n", num_even, sum_even / num_even);
	printf("�����ĸ���Ϊ: %d,ƽ��ֵΪ: %.2f\n", num_odd, sum_odd / num_odd);
	printf("��ȷ�˳�!");
	*/

	/*
	//�����ϰ4
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			count++;
		}
		else if (ch == '!')
		{
			putchar(ch);
			count++;
		}
			putchar(ch);
	}
	printf("\n���滻��%d�Ρ�", count);
	*/

	/*
	//�����ϰ5
	char ch;
	int count = 0;
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.':
			ch = '!';
			count++;
			putchar(ch);
			continue;
		case '!':
			putchar(ch);
			count++;
		}
		putchar(ch);
	}
	printf("\n���滻��%d��",count);
	*/

	/*
	//�����ϰ6
	char ch;
	int count = 0;
	char sh = getchar();
	while ((ch = getchar()) != '#')
	{
		if ((ch == 'i') && (sh == 'e'))
			count++;
		sh = ch;
	}
	printf("��������%d��",count);
	*/

	/*
	//�����ϰ7
	float hours;
	float wages = 0;
	float taxes = 0;
	printf("������һ�ܹ�����Сʱ��: ");
	scanf("%f", &hours);
	while (hours >= 0)
	{
		if (hours >= 40)
		{
			hours = (float)hours * 1.5;
			printf("�����ܶ�Ϊ: %.2f\n", hours * 1000);
			printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25);
			printf("������Ϊ: %.2f\n", (hours * 1000) - (300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25));
		}
		else
		{
			printf("�����ܶ�Ϊ: %.2f\n", hours * 1000);
			if (hours*1000 <= 300)
			{
				printf("˰��Ϊ: %.2f\n", hours*0.15 * 1000);
				printf("������Ϊ: %.2f\n", hours * 1000 - hours * 1000 * 0.15);
			}
			else if (hours*1000 > 300 && hours*1000 <= 450)
			{
				printf("˰��Ϊ: %.2f\n", 300*0.15+(hours*1000-300)*0.2);
				printf("������Ϊ: %.2f\n", hours * 1000 - (300 * 0.15 + (hours * 1000 - 300)*0.2));
			}
			else
			{
				printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25);
				printf("������Ϊ: %.2f\n", (hours * 1000) - (300 * 0.15 + 150 * 0.2 + (hours * 1000 - 450)*0.25));
			}
		}
		printf("������һ�ܹ�����Сʱ��: ");
		scanf("%f", &hours);
	}
	printf("��ȷ�˳�!\n");
	*/

	/*
	//�����ϰ8
	int choice = 0;
	float hours;
	float wages = 0;
	float taxes = 0;
	while (choice!=5)
	{
		printf("**********************************************\n");
		printf("1) $8.75/hr                     2)$9.33/hr  \n");
		printf("3) $10.00/hr                    4)$11.20/hr\n");
		printf("5) quit\n");
		printf("**********************************************\n");
		printf("��ѡ�����Ĺ��ʵȼ�: ");
		if (scanf("%d", &choice) == 1);
		{
			switch (choice)
			{
			case 1:
				printf("���������Ĺ���Сʱ��: ");
				scanf("%f", &hours);
				printf("������Ϊ: %.2f\n", hours*8.75);
				if (hours * 8.75 <= 300)
				{
					printf("˰��Ϊ: %.2f\n", hours*0.15 * 8.75);
					printf("������Ϊ: %.2f\n", hours * 8.75 - hours * 8.75 * 0.15);
				}
				else if (hours * 8.75 > 300 && hours * 8.75 <= 450)
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (hours * 8.75 - 300)*0.2);
					printf("������Ϊ: %.2f\n", hours * 8.75 - (300 * 0.15 + (hours * 8.75 - 300)*0.2));
				}
				else
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 8.75 - 450)*0.25);
					printf("������Ϊ: %.2f\n", (hours * 8.75) - (300 * 0.15 + 150 * 0.2 + (hours * 8.75 - 450)*0.25));
				}
				continue;
			case 2:
				printf("���������Ĺ���Сʱ��: ");
				scanf("%f", &hours);
				printf("������Ϊ: %.2f\n", hours*9.33);
				if (hours * 9.33 <= 300)
				{
					printf("˰��Ϊ: %.2f\n", hours*0.15 * 9.33);
					printf("������Ϊ: %.2f\n", hours * 9.33 - hours * 9.33 * 0.15);
				}
				else if (hours * 9.33 > 300 && hours * 9.33 <= 450)
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (hours * 9.33 - 300)*0.2);
					printf("������Ϊ: %.2f\n", hours * 9.33 - (300 * 0.15 + (hours * 9.33 - 300)*0.2));
				}
				else
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 9.33 - 450)*0.25);
					printf("������Ϊ: %.2f\n", (hours * 9.33) - (300 * 0.15 + 150 * 0.2 + (hours * 9.33 - 450)*0.25));
				}
				continue;
			case 3:
				printf("���������Ĺ���Сʱ��: ");
				scanf("%f", &hours);
				printf("������Ϊ: %.2f\n", hours*10.00);
				if (hours * 10.00 <= 300)
				{
					printf("˰��Ϊ: %.2f\n", hours*0.15 * 10.00);
					printf("������Ϊ: %.2f\n", hours * 10.00 - hours * 10.00 * 0.15);
				}
				else if (hours *10.00 > 300 && hours * 10.00 <= 450)
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (hours * 10.00 - 300)*0.2);
					printf("������Ϊ: %.2f\n", hours * 10.00 - (300 * 0.15 + (hours * 10.00 - 300)*0.2));
				}
				else
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 10.00 - 450)*0.25);
					printf("������Ϊ: %.2f\n", (hours * 10.00) - (300 * 0.15 + 150 * 0.2 + (hours * 10.00 - 450)*0.25));
				}
				continue;
			case 4:
				printf("���������Ĺ���Сʱ��: ");
				scanf("%f", &hours);
				printf("������Ϊ: %.2f\n", hours*11.20);
				if (hours * 11.20 <= 300)
				{
					printf("˰��Ϊ: %.2f\n", hours*0.15 * 11.20);
					printf("������Ϊ: %.2f\n", hours * 11.20 - hours * 11.20 * 0.15);
				}
				else if (hours * 11.20 > 300 && hours * 11.20 <= 450)
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + (hours * 11.20 - 300)*0.2);
					printf("������Ϊ: %.2f\n", hours * 11.20 - (300 * 0.15 + (hours * 11.20 - 300)*0.2));
				}
				else
				{
					printf("˰��Ϊ: %.2f\n", 300 * 0.15 + 150 * 0.2 + (hours * 11.20 - 450)*0.25);
					printf("������Ϊ: %.2f\n", (hours * 11.20) - (300 * 0.15 + 150 * 0.2 + (hours * 11.20 - 450)*0.25));
				}
				continue;
			case 5:
				printf("��ȷ�˳�!\n");
				break;
			}
		}
		printf("��������ȷ��ѡ��!\n");
	}
	*/
	
	/*
	//�����ϰ9
	int num;
	int flag;
	int n = 0;
	while (1)
	{
		printf("������һ��������: ");
		flag = scanf("%d", &num);
		if ((flag==1)&&(num>0))
		{
			for (int i = 2; i <= num; i++)
			{
				n = 0;
				for (int j = 1; j <= i; j++)
				{
					if (i%j == 0)
						n++;
				}
				if (n == 2)
					printf("%d \n", i);
			}
		}
		else if ((flag==0)||(num<0))
		{
			printf("����ȷ����!\n");
			continue;
		}
		else if (num == 0)
			break;
	}
	printf("��ȷ�˳�!\n");
	*/
	
	/*
	//�����ϰ10
	char ch;
	float wages;
	while (1)
	{
		printf("���������Ĺ���: ");
		scanf("%f", &wages);
		if (wages == 0)
			break;
		getchar();
		printf("�������������: ");
		ch = getchar();
		switch (ch)
		{
		case'A':		//����
			if (wages <= 17850)
				printf("˰��Ϊ: %.2f\n", wages*0.15);
			else
				printf("˰��Ϊ: %.2f\n", 17850 * 0.15 + (wages - 17850)*0.28);
			continue;
		case'B':		//����
			if (wages <= 23900)
				printf("˰��Ϊ: %.2f\n", wages*0.15);
			else
				printf("˰��Ϊ: %.2f\n", 23900 * 0.15 + (wages - 23900)*0.28);
			continue;
		case'C':		//�ѻ鹲��
			if (wages <= 29750)
				printf("˰��Ϊ: %.2f\n", wages*0.15);
			else
				printf("˰��Ϊ: %.2f\n", 29750 * 0.15 + (wages - 29750)*0.28);
			continue;
		case'D':		//�ѻ�����
			if (wages <= 14875)
				printf("˰��Ϊ: %.2f\n", wages*0.15);
			else
				printf("˰��Ϊ: %.2f\n", 14875 * 0.15 + (wages - 14875)*0.28);
			continue;
		}
	}
	printf("��ȷ�˳�!");
	*/

	//�����ϰ11
	float Artichoke;              //��
	float sum_a = 0;
	float beet;						//���
	float sum_b = 0;
	float carrot;					//���ܲ�
	float sum_c = 0;
	char ch;
	while (1)
	{
		printf("**************************************\n");
		printf("a)��: 2.05                      b)���: 1.15\n");
		printf("c)���ܲ�: 1.09                   q)�˳����� \n");
		printf("**************************************\n");
		printf("��������Ҫ�������߲�: ");
		ch = getchar();
		if (ch == 'q')
		{
			break;
		}
		else
		{
			switch (ch)
			{
			case 'a':
				printf("��������ҪԤ���İ���: ");
				getchar();
				scanf("%f", &Artichoke);
				getchar();
				sum_a = sum_a + Artichoke;
				break;
			case 'b':
				printf("��������ҪԤ���İ���: ");
				getchar();
				scanf("%f", &beet);
				getchar();
				sum_b = sum_b + beet;
				break;
			case 'c':
				printf("��������ҪԤ���İ���: ");
				getchar();
				scanf("%f", &carrot);
				getchar();
				sum_c = sum_c + carrot;
				break;
			}
		}
	}
	if (sum_a != 0 || sum_b != 0 || sum_c != 0)
	{
		printf("�����߲˵�������Ϊ: %.2f\n", sum_a + sum_b + sum_c);
		printf("��: %.2f��\n", sum_a);
		printf("���: %.2f��\n", sum_b);
		printf("���ܲ�: %.2f��\n", sum_c);
		printf("�����߲˵ķ���Ϊ: %.2f\n", sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09);
		if ((sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) >= 100)
		{
			printf("�������ۿ�Ϊ: %.2f\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05);
			if ((sum_a + sum_b + sum_c) <= 5)
			{
				printf("�˷Ѱ�װ��Ϊ6.5��Ԫ!\n");
				printf("�����ܶ�Ϊ: %.2f��Ԫ!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) - (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05 + 6.5);
			}
			else if ((sum_a + sum_b + sum_c) > 5 && (sum_a + sum_b + sum_c) <= 20)
			{
				printf("�˷Ѱ�װ��Ϊ14��Ԫ!\n");
				printf("�����ܶ�Ϊ: %.2f��Ԫ!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) - (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05 + 14);
			}
			else
			{
				printf("�˷Ѱ�װ��Ϊ%.2f��Ԫ!\n", 14 + (sum_a + sum_b + sum_c - 20)*0.5);
				printf("�����ܶ�Ϊ: %.2f��Ԫ!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) - (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09)*0.05 + (14 + (sum_a + sum_b + sum_c - 20)*0.5));
			}
		}
		else
		{
			printf("����С��100��Ԫ�����ۿ�!\n");
			if ((sum_a + sum_b + sum_c) <= 5)
			{
				printf("�����ܶ�Ϊ: %.2f��Ԫ!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) + 6.5);
			}
			else if ((sum_a + sum_b + sum_c) > 5 && (sum_a + sum_b + sum_c) <= 20)
			{
				printf("�˷Ѱ�װ��Ϊ14��Ԫ!\n");
				printf("�����ܶ�Ϊ: %.2f��Ԫ!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) + 14);
			}
			else
			{
				printf("�˷Ѱ�װ��Ϊ%.2f��Ԫ!\n", 14 + (sum_a + sum_b + sum_c - 20)*0.5);
				printf("�����ܶ�Ϊ: %.2f��Ԫ!\n", (sum_a*2.05 + sum_b * 1.15 + sum_c * 1.09) + (14 + (sum_a + sum_b + sum_c - 20)*0.5));
			}
		}
	}
	else
		printf("��ȷ�˳�!\n");
	//printf("Hello world!\n");
	return 0;
}