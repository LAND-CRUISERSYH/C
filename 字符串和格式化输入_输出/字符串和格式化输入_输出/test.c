#include<stdio.h>
#include<string.h>         //�ṩstrlen()������ԭ��
#define DENSITY 62.4          //�����ܶ�(��λ: ��/����Ӣ��)
#define INTRODUCE "����һ��������"
#define PI 3.14159            //������ų���PI

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
	return 0;
}