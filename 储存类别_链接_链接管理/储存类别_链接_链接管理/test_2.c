#pragma once
#include<stdio.h>
#include"test_2.h"

void set_mode(int m)
{
	if (m != 0 && m != 1)
		printf("���벻��ȷ!ʹ����һ�ε�ģʽ: %d\n", Mode);
	else
		Mode = m;
}
void get_info()
{
	if (Mode == 0)
	{
		printf("���������: ");
		scanf("%f", &length);
		printf("�����������: ");
		scanf("%f", &oil);
	}
	else
	{
		printf("���������: ");
		scanf("%f", &length);
		printf("�����������: ");
		scanf("%f", &oil);
	}
}
void show_info()
{
	if (Mode == 0)
	{
		printf("�����ͺ�: %.2f��/�ٹ���\n", oil / length);
	}
	else
	{
		printf("�����ͺ�: %.2f����/Ӣ��\n", oil / length);
	}
}
