#include <stdio.h>
#include<string.h>
/*
	stdio.h ϵͳ���ļ�
	#include ����ͷ�ļ���Ԥ����ָ��
	<>  ֱ������ϵͳ�Դ��Ŀ�
	" "	   �������û��Զ���Ŀ�  ������ϵͳ��
*/
/*
	main()   ������ ��Ϊ�����Ψһ��� �����ҽ���һ��
*/

//  ˫б�� ��ʾ����ע��
/*
	��ʾ����ע��
*/
int main(int argc, const char * argv[])
{
	//printf("Hello,World!\n");
	//  \n ��ʾ���� ת���ַ�
	// �����Ķ���
	// ��������˵�� ��ʶ��;
	/*
		int nSum;  //����һ��int���ͱ���nSum
		short nNumber;	//����һ��short���ͱ���nNumber
		long nTime;	//����һ��long���ͱ���nTime
		float fArea;	//����һ��float���ͱ���fArea
		double dPi;	//����һ��double���ͱ���dPi
		char chTemp;	//����һ��char���ͱ���chTemp
		�����ĳ�ʼ��������һ��������ĳ�ʼֵ�������ڴ��е�����ֵ
	*/
	/*int nNum;
		nNum = 60;
		printf("nNum = %d\n", nNum);
		return 0;
	*/
	/*float nHeight_inch = 0.0;
		float nHeight_cm = 0.0;
		printf("������������ߣ���Ӣ��Ϊ��λ) : ");
		scanf("%f",&nHeight_inch);
		printf("height = %.1fcm\n", nHeight_inch*2.54);

		printf("������������ߣ�������Ϊ��λ��:");
		scanf("%f", &nHeight_cm);
		printf("height = %.1lfinch\n", nHeight_cm / 2.54);
	*/
	/*int nNum = 0;
		nNum = 'A';
		printf("%d\n", nNum);
		nNum = 66;
		printf("%c", nNum);
	*/
	/*int i = 5;
		int j;
		j = ++i;
		printf("i = %d,j = %d\n", i, j); //i = 6,j=6
		printf("i = %d,j = %d\n", ++i, ++j);//i = 7,j = 7
		printf("i = %d,j = %d\n", i, j);//i = 7,j = 7
	*/
	/*int a, b;
		printf("������������: ");
		scanf("%d %d", &a, &b);
		printf("Max = %d\n", (a > b) ? a:b);
	*/
	/*int a = 3;
		a = a * 5, a * 4;
		printf("a = %d\n", a);*/
		/*int a;
			scanf("%d", &a);
			float b;
			scanf("\n%f", &b);
			int c  = ((int)a+b);
			printf("c = %d\n", c);*/
			/*int myNum1 = sizeof(int);
				int myNum2 = sizeof(char);
				int myNum3 = sizeof(float);
				int myNum4 = sizeof(double);
				printf("%d %d %d %d\n", myNum1, myNum2, myNum3, myNum4);*/
				/*char c = 0;
					printf("������һ���ַ�: ");
					scanf("%c", &c);
					if (c >= '0' && c <= '9')
						printf("����һ�����֣�\n");
					if (c >= 'a' && c <= 'z')
						printf("����һ��Сд��ĸ��\n");
					if (c >= 'A' && c <= 'Z')
						printf("����һ����д��ĸ��\n");*/
						/*int year = 0;
							printf("������һ�����: ");
							scanf("%d ", &year);
						if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
							printf("%d��������\n", year);
						else
							printf("%d�겻������\n", year);*/
							/*int a, b;
								scanf("%d %d", &a, &b);
								if (a > b) {
									printf("���ֵΪ%d\n", a);
								}
								else
									printf("���ֵΪ%d\n", b);*/
									/*char Input[8];
										printf("���������룺 ");
										scanf("%s", Input);
										if (strcmp(Input,"980127.")==0)
										{
											printf("������ȷ����ӭʹ��\n");
										}
										else
											printf("������󣬼����˳�����\n");*/
											/*int a, b;
												printf("��������������: ");
												scanf("%d %d", &a, &b);
												if (a*b > 5000)
													printf("�ó˻�����5000\n");
												else if (a*b == 5000)
													printf("�ó˻�����5000\n");
												else
													printf("�ó˻�С��5000\n");*/
													//int score;
													//printf("������ɼ�: ");
													//scanf("%d", &score);
													//if (score >= 90)
													//	printf("A\n");
													//else if (score >= 80 && score < 90)
													//	printf("B\n");
													//else if (score >= 70 && score < 80)
													//	printf("C\n");
													//else if (score >= 60 && score < 70)
													//	printf("D\n");
													//else
													//	printf("E\n");
													/*int a, b;
													printf("������������: ");
													scanf("%d %d", &a, &b);
													if ((b%a) == 0)
														printf("%d�ܱ�%d����\n", a, b);
													else
														printf("%d���ܱ�%d����\n", a, b);*/
														/*char c;
														printf("������һ���ַ�: ");
														scanf("%c", &c);
														if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
														{
															if ((c >= 97 && c <= 122))
															{
																printf("%c", c - 32);
															}
															else
															{
																printf("%c", c);
															}
														}
														else
															printf("������Ĳ��Ǵ�Сд��ĸ!\n");*/
															/*int a = 0, b = 0;
															char c;
															printf("������������: ");
															scanf("%d %d", &a, &b);
															printf("�����������: ");
															scanf("\n%c", &c);
															switch (c)
															{
															case '+':
																printf("%d + %d = %d\n", a, b, a + b);
																break;
															case '-':
																printf("%d - %d = %d\n", a, b, a - b);
																break;
															case '*':
																printf("%d * %d = %d\n", a, b, a*b);
																break;
															case '/':
																printf("%d / %d = %d\n", a, b, a / b);
																break;
															default :
																printf("����Ĳ��������Ϸ���\n");
															}*/
															/*int num = 0;
															int temp = 0;
															int i = 0;
															printf("������һ����: ");
															scanf("%d", &num);
															for (i = 1; i <= num; i++)
															{
																if (num%i == 0)
																	temp++;
															}
															if (temp == 2)
																printf("%d������!\n", num);
															else
																printf("%d��������!\n", num);*/
																/*char c;
																printf("������һ���ַ�: ");
																scanf("%c", &c);
																if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
																	printf("YES\n");
																else
																	printf("NO\n");*/
																	/*char chFirst;
																	char chSec;
																	printf("�����뵥�ʵ�����ĸ: ");
																	scanf("%c", &chFirst);
																	switch (chFirst)
																	{
																	case 'm':
																	case 'M':
																		printf("Monday\n");
																		break;
																	case	'w':
																	case 'W':
																		printf("Wednesday\n");
																		break;
																	case 'f':
																	case 'F':
																		printf("Friday\n");
																		break;
																	case 't':
																	case 'T':
																		printf("�����뵥�ʵĵڶ�����ĸ: ");
																		scanf("\n%c", &chSec);
																		if ((chSec == 'u')||(chSec == 'U'))
																		{
																			printf("Tuesday\n");
																			break;
																		}
																		else if ((chSec == 'h')||(chSec == 'H'))
																		{
																			printf("Thursday\n");
																			break;
																		}
																		else {
																			printf("������ַ����Ϸ�\n");
																			break;
																		}
																	case 's':
																	case 'S':
																		printf("�����뵥�ʵĵڶ�����ĸ: ");
																		scanf("\n%c", &chSec);
																		if ((chSec == 'a') || (chSec == 'A'))
																		{
																			printf("Saturday\n");
																			break;
																		}
																		else if ((chSec == 'u') || (chSec == 'U'))
																		{
																			printf("Sunday\n");
																			break;
																		}
																		else
																		{
																			printf("������ַ����Ϸ�\n");
																			break;
																		}
																	default:
																		printf("������ַ����Ϸ�!\n");
																	}*/
																	/*int month, day;
																	printf("�������·ݺ�����: ");
																	scanf("%d %d", &month, &day);
																	if (month < 1 || month >12)
																		printf("������·ݲ��Ϸ�!\n");
																	if (day < 1 || day>31)
																		printf("��������ڲ��Ϸ�!\n");
																	if (month == 2)
																	{
																		if (day > 28)
																		{
																			printf("��������ڲ��Ϸ�!\n");
																		}
																	}
																	else if (month == 4 || month == 6 || month == 9 || month == 11)
																	{
																		if (day > 30)
																		{
																			printf("��������ڲ��Ϸ�!\n");
																		}
																	}
																	else if ((month == 3 && day >= 21) || (month == 4 && day <= 20))
																	{
																		printf("������!\n");
																	}
																	else if ((month == 4 && day >= 21) || (month == 5 && day <= 20))
																	{
																		printf("��ţ��!\n");
																	}
																	else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
																	{
																		printf("˫����!\n");
																	}
																	else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
																	{
																		printf("��з��!\n");
																	}
																	else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
																	{
																		printf("ʨ����!\n");
																	}
																	else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
																	{
																		printf("��Ů��!\n");
																	}
																	else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
																	{
																		printf("�����!\n");
																	}
																	else if ((month == 10 && day >= 23) || (month == 11 && day <= 22))
																	{
																		printf("��Ы��!\n");
																	}
																	else if ((month == 11 && day >= 23) || (month == 12 && day <= 22))
																	{
																		printf("������!\n");
																	}
																	else if ((month == 12 && day >= 23) || (month == 1 && day <= 20))
																	{
																		printf("Ħ����!\n");
																	}
																	else if ((month == 1 && day >= 21) || (month == 2 && day <= 20))
																	{
																		printf("ˮƿ��!\n");
																	}
																	else if ((month == 2 && day >= 21) || (month == 3 && day <= 20))
																	{
																		printf("˫����!\n");
																	}*/
																	/*int money, year;
																	printf("�����뱾�������: ");
																	scanf("%d %d", &money, &year);

																	switch (year)
																	{
																	case 1:
																		printf("��Ϣ�� = %1f\n", money + money * 0.0063 * 12 * year);
																		break;
																	case 2:
																		printf("��Ϣ�� = %1f\n", money + money * 0.0066 * 12 * year);
																		break;
																	case 3:
																		printf("��Ϣ�� = %1f\n", money + money * 0.0069 * 12 * year);
																		break;
																	case 5:
																		printf("��Ϣ�� = %1f\n", money + money * 0.0075 * 12 * year);
																		break;
																	case 8:
																		printf("��Ϣ�� = %1f\n", money + money * 0.0084 * 12 * year);
																		break;
																	}*/
																	/*int num;
																	printf("������һ������: ");
																	scanf("%d", &num);
																	if (num >= 0 && num >= 9)
																	{
																		printf("Yes\n");
																	}
																	else
																		printf("No\n");*/
																		/*int num;
																		printf("������һ������: ");
																		scanf("%d", &num);
																		if (num >= 0)
																			printf("|num| = %d\n", num);
																		else
																			printf("|num| = %d\n", -num);*/
																			/*int num;
																			printf("������һ������: ");
																			scanf("%d", &num);
																			if (num % 2 == 0)
																				printf("%d��һ��ż��\n", num);
																			else
																				printf("%d����һ��ż��\n", num);*/
																				/*char c;
																				printf("������һ���ַ�: ");
																				scanf("%c", &c);
																				if (c >= 97 && c <= 122)
																					printf("%c\n", c - 32);
																				else
																					printf("%c", c);*/
																					/*int i = 0;
																					int sum = 0;
																					for (i = 0; i <= 100; i++)
																					{
																						sum = sum + i;
																					}
																					printf("%d\n", sum);*/
																					/*int i = 0;
																					int sum = 0;
																					for (i = 0; i <= 100; i += 2)
																					{
																						sum = sum + i;
																					}
																					printf("100����ż���ĺ�Ϊ: %d", sum);*/
																					/*int i = 0;
																					int sum = 0;
																					for (i = 0; i <= 100; i += 3)
																					{
																						sum = sum + i;
																					}
																					printf("100����3�ı���֮��Ϊ: %d", sum);*/
																					/*int i = 0;
																					int j = 0;
																					int sum = 0;
																					for (i = 1,j = -2; i <= 100; i += 2,j -= 2)
																					{
																						sum += i + j;
																					}
																					printf("%d", sum);*/
																					/*int i = 0, j = 0;
																					for (i = 1; i <= 9; i++)
																					{
																						for (j = i; j <= 9; j++)
																						{
																							printf("%d ", j);
																						}
																						printf("\n");
																					}*/
																					/*int i = 0, j = 0;
																					for (i = 1; i <= 9; i++)
																					{
																						for (j = 1; j <= i; j++)
																						{
																							printf("%d * %d = %d ", j, i, j*i);
																						}
																						printf("\n");
																					}*/
																					/*char pswd[8];
																					int times = 1;
																					printf("��������λ����: ");
																					scanf("%s", pswd);
																					do
																					{
																						if (strcmp(pswd, "980127.") == 0)
																						{
																							printf("����������ȷ!\n");
																							return 0;
																						}
																						else
																						{
																							printf("���������������������: ");
																							scanf("%s", pswd);
																						}
																						times++;
																					} while (times < 3);
																					printf("�����������δ��󣬼����˳�����!\n");*/
																					/*int num = 0;
																					printf("������һ����: ");
																					scanf("%d", &num);
																					if ((num >= -100 && num <= 100) && num != 0)
																					{
																						for (int i = 1; i <= 100; i++)
																						{
																							if (i % num == 0)
																							{
																								printf("%d ", i);
																							}
																						}
																					}
																					else
																						printf("����������Ϸ�!\n");*/
																						/*int i = 0, j = 0;
																						for (i = 0; i <= 88; i++)
																						{
																							for (j = 0; j <= 88; j++)
																							{
																								if ((i + j) == 88 && (i * 2 + j * 4) == 244)
																								{
																									printf("��%dֻ����%dֻ\n", i, j);
																								}
																							}
																						}*/
																						/*int m, n;
																						int sum = 1;
																						printf("��������������: ");
																						scanf("%d %d", &m, &n);
																						if (n == 0)
																						{
																							printf("m^n = %d\n", 1);
																						}
																						else if (m == 0)
																						{
																							printf("m^n = %d\n", 0);
																						}
																						else
																						{
																							for (int i = 1; i <= n; i++)
																							{
																								sum = sum * m;
																							}
																							printf("m^n = %d\n", sum);
																						}*/
																						/*int num = 1;
																						while (num)
																						{
																							if ((num % 3 == 2) && (num % 5 == 3) && (num % 7) == 4)
																							{
																								printf("���ʿ������%d��!\n",num);
																								break;
																							}
																							num++;
																						}*/
																						/*int num;
																						int sum = 0;
																						int temp = 0;
																						printf("������һ����λ��: ");
																						scanf("%d", &num);
																						temp = num;
																						for (int i = 1;i<=3; i++)
																						{
																							sum = sum + (num % 10) * (num % 10) * (num % 10);
																							num = num / 10;
																						}
																						if (temp == sum)
																						{
																							printf("%d��ˮ�ɻ���!\n", temp);
																						}
																						else{
																							printf("%d����ˮ�ɻ���!\n", temp);
																						}*/
																						/*int i, j;
																						int sum = 0;
																						for (int i = 2; i <= 100; i++)
																						{
																							sum = 0;
																							for (j = i; j >= 1; j--)
																							{
																								if (i%j == 0)
																									sum++;
																							}
																							if (sum == 2)
																							{
																								printf("%d ", i);
																							}
																						}*/
																						/*int i;
																						for (i = 1900; i <= 2014; i++)
																						{
																							if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
																							{
																								printf("%d ", i);
																							}
																						}*/
																						/*int i;
																						int sum = 0;
																						for (i = 1; i <= 100; i++)
																						{
																							sum = sum + i;
																						}
																						printf("%d", sum);*/
																						/*int i = 0;
																						int sum = 0;
																						for (int i = 2; i <= 100; i += 2)
																						{
																							sum = sum + i;
																						}
																						printf("%d", sum);*/
																						/*char ch[8];
																						printf("�������ַ���: ");
																						scanf("%s", ch);
																						for (int i = 0; i < 7; i++)
																						{
																							printf("%c", ch[i]);
																						}*/
																						/*int a, b, c, d, e, f;
																						printf("������������: ");
																						scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
																						int sum[6] = { a,b,c,d,e,f };
																						int Max = sum[0];
																						for (int i = 0; i < 5; i++)
																						{
																							if (Max < sum[i])
																							{
																								Max = sum[i];
																							}
																						}
																						printf("�����Ϊ%d\n", Max);*/
																						/*int i, j;
																						for (i = 2; i >= 0; i--)
																						{
																							for (j = 0; j <= 4; j++)
																							{
																								if ((j >= i) && (j < (5-i)))
																									printf("*");
																								else
																									printf(" ");
																							}
																							printf("\n");
																						}*/
																						/*for (int i = 100; i <= 999; i++)
																						{
																							int a = i / 100;
																							int b = i / 10%10;
																							int c = i % 10;
																							if ((a*a*a + b * b*b + c * c*c) == i)
																							{
																								printf("%d ",i);
																							}
																						}*/
																						/*int num;
																						int sum = 1;
																						int temp;
																						printf("������һ������: ");
																						scanf("%d", &num);
																						temp = num;
																						while (num != 0)
																						{
																							sum = sum * num;
																							num--;
																						}
																						printf("%d�Ľ׳�Ϊ%d\n", temp, sum);*/
																						/*int num;
																						int sum ;
																						printf("������һ������: ");
																						scanf("%d", &num);
																						for (int i = 1; i <= num; i++)
																						{
																							int temp = i;
																							sum = 1;
																							while (temp)
																							{
																								sum = sum * temp;
																								temp--;
																							}
																							printf("%d�Ľ׳�Ϊ%d\n", i, sum);
																						}*/
																						/*int hour, minute, second;
																						printf("������ʱ��: ");
																						scanf("%d %d %d", &hour, &minute, &second);
																						if ((hour < 0 || hour>23) || (minute < 0 || minute>59) || (second < 0 || second>59))
																						{
																							printf("�����ʱ�䲻�Ϸ�!\n");
																							return;
																						}
																						printf("��ʱ��ʱ��Ϊ: %d:%d:%d\n", hour, minute, second);
																						if (second == 59)
																						{
																							if (minute == 59)
																							{
																								if (hour == 23)
																								{
																									printf("��һ���ʱ��Ϊ:%d:%d:%d\n", 00, 00, 00);
																								}
																								else
																								{
																									printf("��һ���ʱ��Ϊ:%d:%d:%d\n", hour + 1, 00, 00);
																								}
																							}
																							else
																							{
																								printf("��һ���ʱ��Ϊ:%d:%d:%d\n", hour , minute+1, 00);
																							}
																						}
																						else
																						{
																							printf("��һ���ʱ��Ϊ:%d:%d:%d\n", hour, minute , second+1);
																						}*/
																						/*int x;
																						printf("������x��ֵ: ");
																						scanf("%d", &x);
																						if (x <= 0)
																						{
																							printf("y = %d", 2 * x - 10);
																						}
																						else if (x > 0 && x < 5)
																							printf("y = %d", 3);
																						else
																							printf("y = %d", 4 * x + 3);*/
																							/*int num;
																							printf("������һ����λ��: ");
																							scanf("%d", &num);
																							if ((num / 100) == (num % 10))
																								printf("%d��һ���Գ���!", num);
																							else
																								printf("%d����һ���Գ���!", num);*/
																								/*int a[10];
																								for (int i = 0; i < 10; i++)
																								{
																									a[i] = i;
																									printf("%d,", a[i]);
																								}*/
																								/*int arr[10];
																								int sum = 0;
																								printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 10; i++)
													{
														sum = sum + arr[i];
													}
													printf("ʮ�����ĺ�Ϊ:%d", sum);*/

													/*int arr[10];
													int sum = 0;
													printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 10; i++)
													{
														if (arr[i] % 2 == 0)
															sum = sum + arr[i];
													}
													printf("ʮ������ż���ĺ�Ϊ: %d", sum);*/
													/*int arr[10];
													int num = 1;
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													while (1)
													{
														int flag = 0;
														for (int i = 0; i < 10; i++)
														{
															if (num%arr[i] != 0)
															{
																flag = 1;
															}
														}
														if (flag == 0)
														{
															printf("��С������Ϊ: %d", num);
															break;
														}
														num++;
													}*/
													/*int arr[10];
													int num = 1;
													printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													int max = arr[0];
													for (int i = 0; i < 10; i++)
													{
														if (arr[i] > max)
														{
															max = arr[i];
														}
													}
													num = max;
													while (1)
													{
														int flag = 0;
														for (int i = 0; i < 10; i++)
														{
															if (arr[i] % num != 0)
															{
																flag = 1;
															}
														}
														if (flag == 0)
														{
															printf("���Լ��Ϊ: %d", num);
															break;
														}
														num--;
													}*/
													/*int arr[10];
													int temp = 0;
													printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													printf("�ƶ�ǰ��˳��: ");
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}
													for (int i = 9; i >0; i--)
													{
														if (i == 9)
														{
															temp = arr[i];
														}
														arr[i] = arr[i - 1];
														if (i == 1)
														{
															arr[i - 1] = temp;
														}
													}
													printf("\n�ƶ����˳��: ");
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}*/
													/*int arr[10];
													int num1, num2;
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													printf("�ƶ�ǰ��˳��: ");
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}
													for (int i = 9; i > 1; i--)
													{
														if (i == 9)
														{
															num1 = arr[i];
														}
														if (i == 8)
														{
															num2 = arr[i];
														}
														arr[i] = arr[i - 2];
													}
													arr[0] = num2;
													arr[1] = num1;
													printf("\n�ƶ����˳��: ");
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}*/
													/*int arr[10];
													int sum = 0;
													printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 10; i++)
													{
														if (arr[i] % 2 == 0)
														{
															sum = sum + arr[i];
														}
													}
													printf("ʮ������ż����Ϊ: %d", sum);*/
													/*int arr[5] = { 8,7,3,2,6 };
													int num = 0;
													int temp = 1;
													for (int i = 4; i > 0; i--)
													{
														temp = 1;
														for (int j = i; j > 0; j--)
														{
															temp = temp* 10;
														}
														num = num + temp * arr[i];
													}
													printf("%d", num + arr[0]);*/
													/*int arr1[5];
													int arr2[5];
													printf("����arr1[5]�����������: ");
													for (int i = 0; i < 5; i++)
													{
														scanf("%d", &arr1[i]);
													}
													for (int i = 0; i < 5; i++)
													{
														arr2[i] = arr1[i];
													}
													printf("����֮��arr2[5]�е���Ϊ:");
													for (int i = 0; i < 5; i++)
													{
														printf("%d ", arr2[i]);
													}*/
													/*int arr[6] = { 1,2,3,4,5,6 };
													int temp;
													for (int i = 0; i < 6 / 2; i++)
													{
														temp = arr[i];
														arr[i] = arr[6-1-i];
														arr[6-1 - i] = temp;
													}
													for (int i = 0; i < 6; i++)
													{
														printf("%d", arr[i]);
													}*/
													/*int arr[10];
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 8; i >=4; i--)
													{
														arr[i + 1] = arr[i];
													}
													arr[4] = 5;
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}*/
													/*int arr[10];
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 2; i < 9; i++)
													{
														arr[i] = arr[i + 1];
													}
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}*/
													/*int arr[10];
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													int Max = 0;
													for (int i = 0; i < 10; i++)
													{
														if (Max < arr[i])
														{
															Max = arr[i];
														}
													}
													for (int i = 0; i < 10; i++)
													{
														if (Max == arr[i])
														{
															printf("���ֵ���±�Ϊ:%d", i);
														}
													}*/
													/*int arr[10];
													printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													int Max = arr[0] + arr[1] + arr[2];
													int idnex = 0;
													for (int i = 0; i < 8; i++)
													{
														if (Max < arr[i] + arr[i + 1] + arr[i + 2])
														{
															Max = arr[i] + arr[i + 1] + arr[i + 2];
															idnex = i;
														}
													}
													for (int j= idnex; j <= idnex + 2;j++)
													{
														printf("%d", arr[j]);
													}*/
													/*int arr[10];
													int temp;
													printf("������ʮ����: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 9; i++)
													{
														for (int j = 0;j<9-i;j++)
														{
															if (arr[j] > arr[j + 1])
															{
																temp = arr[j];
																arr[j] = arr[j + 1];
																arr[j + 1] = temp;
															}
														}
													}
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", arr[i]);
													}*/
													/*int arr[10];
													int temp = 0;
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 9; i++)
													{
														for (int j = 0; j < 9 - i; j++)
														{
															if (arr[j] > arr[j + 1])
															{
																temp = arr[j];
																arr[j] = arr[j + 1];
																arr[j + 1] = temp;
															}
														}
													}
													int arr1[10],arr2[10];
													int num1 = 0, num2 = 0;
													for (int i = 0; i < 10; i++)
													{
														if (arr[i] % 2 == 0)
														{
															arr2[num2] = arr[i];
															num2++;
														}
														else
														{
															arr1[num1] = arr[i];
															num1++;
														}
													}
													int Array[10];
													for (int i = 0; i < num1; i++)
													{
														Array[i] = arr1[i];
													}
													for (int i = 0; i < num2; i++)
													{
														Array[num1+i] = arr2[i];
													}
													for (int i = 0; i < 10; i++)
													{
														printf("%d ", Array[i]);
													}*/
													/*int arr[10];
													int temp = 0;
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 9; i++)
													{
														for (int j = 0; j < 9 - i; j++)
														{
															if (arr[j] > arr[j + 1])
															{
																temp = arr[j];
																arr[j] = arr[j + 1];
																arr[j + 1] = temp;
															}
														}
													}
													int i = 0;
													int count = 1;
													do
													{
														count = 1;
														while (1)
														{
															if (arr[i] == arr[i + 1])
															{
																count++;
																i = i + 1;
															}
															else {
																printf("%d������%d��\n", arr[i], count);
																break;
															}
														}
														i++;
													} while (i < 10);*/
													/*int arr[10];
													int temp = 0;
													printf("������ʮ������: ");
													for (int i = 0; i < 10; i++)
													{
														scanf("%d", &arr[i]);
													}
													for (int i = 0; i < 9; i++)
													{
														if (arr[i] == arr[i + 1])
														{
															printf("�������������ͬ����!\n");
															return;
														}
													}*/
													/*int arr1[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
													int arr2[3][4] = { {12,11,10,9},{8,7,6,5},{4,3,2,1} };
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 4; j++)
														{
															printf("%d ", arr1[i][j]);
														}
														printf("\n");
													}
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 4; j++)
														{
															printf("%d ", arr2[i][j]);
														}
														printf("\n");
													}
													int arr3[3][4];
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 4; j++)
														{
															arr3[i][j] = arr1[i][j] + arr2[i][j];
														}
													}
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 4; j++)
														{
															printf("%d ", arr3[i][j]);
														}
														printf("\n");
													}*/
													/*int arr[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 4; j++)
														{
															printf("%d ", arr[i][j]);
														}
														printf("\n");
													}
													for (int i = 2; i >= 0; i--)
													{
														for (int j = 3; j >= 0; j--)
														{
															printf("%d ", arr[i][j]);
														}
														printf("\n");
													}
													int Max = arr[0][0];
													for (int i = 0; i < 3; i++)
													{
														for (int j = 0; j < 4; j++)
														{
															if (Max < arr[i][j])
															{
																Max = arr[i][j];
															}
														}
													}
													printf("���ֵΪ: %d", Max);*/
													/*int arr[2][3] = { 9,5,3,2,7,1 };
													int array[6];
													int index = 0;
													for (int i = 0; i < 2; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															array[index++] = arr[i][j];
														}
													}
													for (int i = 0; i < 5; i++)
													{
														int flag = 0;
														for (int j = 0; j < 5 - i; j++)
														{
															if (array[j] > array[j + 1])
															{
																int temp = array[j];
																array[j] = array[j + 1];
																array[j + 1] = temp;
																flag = 1;
															}
														}
														if (flag == 0)
															break;
													}
													index = 0;
													for (int i = 0; i < 2; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															arr[i][j] = array[index++];
														}
													}
													for (int i = 0; i < 2; i++)
													{
														for (int j = 0; j < 3; j++)
														{
															printf("%d ", arr[i][j]);
														}
														printf("\n");
													}*/
													/*
													<string.h>
													����ַ��� �ַ�����ʼ������
														memset(�������������ڴ�ʹ�õ����ݣ�������ַ�����)
													���ַ�������
														strlen(������)
													*/
													/*char c[] = "It's a computer";
													int j = 0;
													for (int i = 0; i < strlen("computer"); i++)
													{
														j = i + 7;
														printf("%c", c[j]);
													}*/
													/*
													�ַ������������
													char temp = getchar()
													putchar(�ַ�)

													�ַ��������������
													gets(�ַ�������)
													puts(�ַ�������||�ַ�������)
													*/
													/*char str1[100] = "";
													gets(str1);
													puts(str1);*/
													/*
													�ַ�����ֵ����memset(��������ֵ������)��
													�ַ����󳤺���strlen(������);
													�ַ����ȽϺ���strcmp(�ַ���A���ַ���B)��
														��ȷ���0��A>B����������A<B���ظ���
													�ַ������ƺ���strcpy(�ַ���A,�ַ���B||�ַ�������)
													�ַ������ƺ���strncpy(�ַ���A���ַ���B��int n)
													�ַ���ƴ�Ӻ���strcat(�ַ���A���ַ���B)��
													�ַ���ƴ�Ӻ���strncat(�ַ���A���ַ���B��int n��
													*/
													/*char s1[20] = "abc";
													char s2[] = "123";
													strcat(s1, s2);
													printf("%s", s1);*/
													/*char s[100] = "";
													scanf("%s", s);
													printf("%d", strlen(s));*/
													/*char s1[100] = "";
													char s2[100] = "";
													printf("�������һ���ַ���: ");
													scanf("%s", s1);
													printf("������ڶ����ַ���: ");
													scanf("%s", s2);
													if (strlen(s1) <= strlen(s2))
													{
														printf("����ĵ�һ���ַ�������Ӧ���ڵڶ����ַ�������!\n");
														return;
													}
													else
													{
														strcpy(s1, s2);
													}
													printf("%s", s1);*/
													/*char s1[101] = "";
													char s2[101] = "";
													printf("�������һ���ַ���: ");
													scanf("%s", s1);
													printf("������ڶ����ַ���: ");
													scanf("%s", s2);
													strcat(s2, s1);
													printf("%s", s2);*/
													/*char address[20] = "";
													memset(address, '\0', sizeof(address));
													printf("������һ���ַ���: ");
													scanf("%s", address);
													char findChar;
													printf("������һ���ַ�: ");
													scanf("\n%c", &findChar);
													int count = 0;
													for (int i = 0; i < strlen(address); i++)
													{
														if (address[i] == findChar)
														{
															count++;
														}
													}
													if (count == 0)
													{
														printf("û���ҵ�!\n");
													}
													else
													{
														printf("��%d��!\n", count);
													}*/
													//char str[20];
													//memset(str, '\0', sizeof(str));//memset�������
													//printf("������һ���ַ���: ");
													//scanf("%s", str);         //�����ַ���
													//for (int i = strlen(str) - 1; i >= 0; i--)
													//{
													//	printf("%c", str[i]);
													//}
													/*char s1[20] = "";
													char s2[20] = "";
													printf("������������: ");
													scanf("%s", s1);
													printf("������������: ");
													scanf("%s", s2);
													strcat(s1, " ");
													strcat(s1, s2);
													printf("��������Ϊ: %s", s1);
													printf("\n����Ϊ: %d", (int)strlen(s1));*/
													/*char str[] = "s5f8c6dd99v57";
													int count = 0;
													for (int i = 0; i < strlen(str); i++)
													{
														if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A'&&str[i] <= 'Z'))
														{
															count++;
														}
													}
													if (count == 0)
													{
														printf("���ַ�����û��Ӣ����ĸ!\n");
													}
													else
														printf("���ַ����е�Ӣ����ĸ����Ϊ: %d", count);*/
														/*char s[] = { '2','1','3','2','1' };
														int sum = 0;
														for (int i = 0; i <sizeof(s); i++)
														{
															int num = s[i] - '0';
															sum = sum * 10 + num;
														}
														printf("%d", sum);*/
														/*char str[] = "aBcdDD";
														for (int i = 0; i < strlen(str); i++)
														{
															if (str[i] >= 'a'&&str[i] <= 'z')
																str[i] = str[i] - 32;
															else
																str[i] = str[i] + 32;
														}
														printf("%s", str);*/
														/*char str[] = "abCDel";
														for (int i = 0; i < strlen(str); i++)
														{
															if ((i % 2 == 0) && (str[i] <= 'z') && (str[i] >= 'a'))
															{
																str[i] = str[i] - 32;
															}
														}
														printf("%s", str);*/
														/*char str[] = "sifmYCmsaozEZkd";
														printf("����ǰ: %s", str);
														for (int i = 0; i < strlen(str); i++)
														{
															if (str[i] != 'z'&&str[i] != 'Z')
															{
																str[i] = str[i] + 1;
															}
															else if (str[i] == 'z')
																str[i] = 'a';
															else
																str[i] = 'A';
														}
														printf("\n���ܺ�: %s", str);*/
														/*char str[] = "abcdef";
														int nLength = (int)strlen(str);
														char C1 = str[nLength - 1];
														char C2 = str[nLength - 2];
														for (int i = nLength - 3; i >= 0; i--)
														{
															str[i + 2] = str[i];
														}
														str[0] = C2;
														str[1] = C1;
														printf("%s", str);*/
														/*char str[] = "aaceffecd";
														int nLength = strlen(str);
														for (int i = 0; i < nLength - 1; i++)
														{
															int flag = 0;
															for (int j = nLength - 1; j > i; j--)
															{
																if (str[i] == str[j])
																{
																	flag = 1;
																	break;
																}
															}
															if (flag == 0)
															{
																printf("%c", str[i]);
																return;
															}
														}*/
														/*char str1[20] = "";
														char str2[20] = "";
														printf("�������һ���ַ���: ");
														gets(str1);
														printf("������ڶ����ַ���: ");
														gets(str2);
														int nLength1 = (int)strlen(str1);
														int nLength2 = (int)strlen(str2);
														int i = 0;
														int flag = 0;
														while (i<nLength1)
														{
															flag = 0;
															for (int j = 0; j < nLength2; j++)
															{
																if (str1[i] == str2[j])
																{
																	flag = 1;
																	for (int k = i; k < nLength1; k++)
																	{
																		str1[k] = str1[k + 1];
																	}
																}
															}
															if (flag == 0)
															{
																i++;
															}
															else
																continue;
														}

														printf("%s", str1);*/
														/*char str1[] = "abcdefgh78";
														char str2[] = "defg";
														int nLength1 = (int)strlen(str1);
														int nLength2 = (int)strlen(str2);
														int i = 0;
														int j = 0;
														int count = 0;
														while (i < nLength1)
														{
															if (str1[i] == str2[0])
															{
																while (j < nLength2)
																{
																	if (str1[i] == str2[j])
																	{
																		count++;
																	}
																	i++;
																	j++;
																}
																if (count == nLength2)
																{
																	printf("�ַ���1�����ַ���2!\n");
																	return;
																}
															}
															else
																i++;
														}*/
														/*char number[12] = "";
														int flag = 0;
														printf("�������ֻ���: ");
														gets(number);
														if (strlen(number) != 11)
														{
															printf("������ֻ�������!\n");
														}
														else
														{
															for (int i = 1; i < strlen(number); i++)
															{
																if ((number[0] != '1') || number[i] > '9'||number[i] < '0')
																{
																	printf("������ֻ�������!\n");
																	return;
																}
															}
															printf("%s", number);
														}*/
														/*
														�����ķ���
														��1�����ݺ����Ķ��巽ʽ�ɷ�Ϊ
																�⺯��		�û��Զ��庯��
														��2�������Ƿ��в����ɷ�Ϊ
																�вκ���	�޲κ���
														��3�������Ƿ��з���ֵ�ɷ�Ϊ
																�з���ֵ����		�޷���ֵ����
														*/
														/*
														������˵��
														��1����������Ƕ�׶���
														��2������Ƕ�׵��ã���һ�������е�����һ��������
														��3������ݹ���ã��ں����е����Լ�����
														��4��C����������ֻ��һ��main������ϵͳ�������main���������Ҵ�main������ʼִ��
														��5��main�������Ե�����������������������ȻҲ���Ե���main����������Ӧ����ô��
														*/
	printf("hello\n");
}
