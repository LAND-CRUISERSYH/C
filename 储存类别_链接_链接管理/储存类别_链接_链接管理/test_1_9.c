#include<stdio.h>
//#include"test_2.h"

void func1(int *p);

int main()

{
	/*
	int mode;
	printf("��ѡ��ģʽ: 0Ϊ��ʽ,1Ϊ����: ");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("��ѡ��ģʽ: 0Ϊ��ʽ,1Ϊ����,-1�˳�: ");
		scanf("%d", &mode);
	}
	printf("�˳�!");
	*/
	/*
	//�����ϰ1
	int num;
	printf("���һ������: ");
	scanf("%d", &num);
	while (num != 56)
		func1(&num);
	printf("������ȷ!\n");
	*/
	return 0;
}

void func1(int *p)
{
	printf("���벻��ȷ������������: ");
	scanf("%d", p);
}