#include<stdio.h>
#include<limits.h>              //�ṩCHAR_BIT�Ķ��壬CHAR_BIT��ʾÿ�ֽڵ�λ��
#include<stdbool.h>             //C99������bool��true��false
         
//�ߵ���ʽ
#define SOLID 0
#define DOTTED 1
#define DASHED 2
//��ԭɫ
#define BLUE 4                //100
#define GREEN 2             //010
#define RED 1                //001
//���ɫ
#define BLACK 0
#define YELLOW (RED|GREEN)
#define MAGENTA (RED|BLUE)
#define CYAN (GREEN|BLUE)
#define WHITE (RED|GREEN|BLUE)

const char* colors[8] = { "black","red","green","yellow","blue","magenta","cyan","white" };

struct box_props {
	bool opaque : 1;              //�����Ƿ�͸��
	unsigned int fill_color : 3;    //�����ɫ
	unsigned int : 4;                //���
	bool show_border : 1;      //�߿�ɼ�������
	unsigned int border_color : 3;   //�߿���ɫ
	unsigned int bor_style : 2;      //�߿���ʽ
	unsigned int : 2;           //���
};

void show_settings(const struct box_props *p);
void func(int num, char *p);
void show(const char *p);

//int main()
//{
//	int a = 5;
//	printf("%p \n", &a);
//	printf("%p \n", &a + 1);
	/*
	double dx;
	char ca;
	char cx;
	double dz;
	char cb;
	char _Alignas(double) cz;
	printf("char alignment: %zd\n", __Alignof(char));
	printf("double alignment: %zd\n", __Alignof(double));
	printf("&dx: %p\n", &dx);
	printf("&ca: %p\n", &ca);
	printf("&cx: %p\n", &cx);
	printf("&dz: %p\n", &dz);
	printf("&cb: %p\n", &cb);
	printf("&cz: %p\n", &cz);
	*/
	/*
	struct box_props box = { true,YELLOW,true,GREEN,DASHED };
	printf("Original box settings: \n");
	show_settings(&box);
	box.opaque = false;
	box.fill_color = WHITE;                //��λ�ֶγ�Ա��ֵ
	box.border_color = MAGENTA;
	box.bor_style = SOLID;
	printf("\nModified box settings: \n");
	show_settings(&box);
	*/
	/*
	char arr[CHAR_BIT * sizeof(int) + 1];
	int number;
	while (scanf("%d", &number) == 1)
	{
		func(number, arr);
		printf("%d is", number);
		show(arr);
		putchar('\n');
	}
	*/
	//printf("hello world");
//	return 0;
//}

void show_settings(const struct box_props *p)
{
	printf("Box is %s.\n", p->opaque == true ? "opaque" : "transparent");
	printf("The fill color is %s.\n", colors[p->fill_color]);    //λ�ֶγ�Ա�����������±�
	printf("Borde %s.\n", p->show_border == true ? "shown" : "not shown");
	printf("The border color is %s.\n", colors[p->border_color]);
	printf("The border style is ");
	switch (p->bor_style)
	{
	case SOLID:printf("solid.\n"); break;
	case DOTTED:printf("dotted.\n"); break;
	case DASHED:printf("dashed.\n"); break;
	default:printf("unknown type.\n");
	}
}

void func(int num, char *p)
{
	const static int size = CHAR_BIT * sizeof(int);
	for (int i = size - 1; i >= 0; i--, num >>= 1)
		p[i] = (01 & num) + '0';
	p[size] = '\0';
}
void show(const char *p)
{
	int i = 0;
	while (p[i])
	{
		putchar(p[i]);
		i++;
		if (i % 4 == 0 && p[i])
			putchar(' ');
	}
}