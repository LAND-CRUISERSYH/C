#include<stdio.h>
include<stdlib.h>
#include<string.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive.-Oscar Wilde"               //反斜杠把该定义延续到下一行
#define FOUR TWO*TWO
#define PX printf("X is %d.\n",x)
#define FMT "X is %d.\n"

#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n",X)

#define NUM 10

void fillarray(double arr[],int n);
void showarray(const double arr[], int n);
void show_array(const int arr[], int n);
int mycomp(const void *p1, const void *p2);   //从小到大排序

void func();

int main()
{

	int arr[NUM] = { 1,2,3,4,5,6,7,8,9,10 };
	int temp[NUM];
	show_array(arr, 10);
	putchar('\n');
	memcpy(temp, arr, NUM * sizeof(int));
	show_array(arr, 10);
	show_array(temp, 10);
	putchar('\n');
	memmove(temp+2, temp, NUM/2 * sizeof(int));
	show_array(arr, 10);
	show_array(temp, 10);
	/*
	double arr[NUM];
	fillarray(arr, NUM);
	puts("原始数组: ");
	showarray(arr, NUM);
	qsort(arr, NUM, sizeof(double), mycomp);
	puts("比较后的数组: ");
	showarray(arr, NUM);
	*/
	/*
	printf("The file is %s.\n", __FILE__);
	printf("The date is %s.\n", __DATE__);
	printf("The time is %s.\n", __TIME__);
	printf("The version is %ld.\n",__STDC_SECURE_LIB__);
	printf("The file is %d.\n", __LINE__);
	printf("The function is %s.\n", __func__);
	func();
	*/
	/*
	int x = 5;
	int z;
	printf("x = %d\n", x);
	z = SQUARE(x);
	printf("求值 SQUARE(x): ");
	PR(z);
	z = SQUARE(2);
	printf("求值 SQUARE(2): ");
	PR(z);
	printf("求值 SQUARE(x+2): ");
	PR(SQUARE(x + 2));
	printf("求值 100/SQUARE(2): ");
	PR(100 / SQUARE(2));
	printf("x = %d\n", x);
	printf("求值 SQUARE(++x): ");
	PR(SQUARE(++x));
	printf("x = %d\n", x);
	*/
	/*int x = TWO;
	PX;
	x = FOUR;
	printf(FMT, x);
	printf("%s\n", OW);
	printf("TWO: OW\n");*/
	return 0;
}
void func()
{
	printf("The file is %d.\n", __LINE__);
	printf("The function is %s.\n", __func__);
}

void show_array(const int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void fillarray(double arr[], int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = (double)rand() / ((double)rand() + 0.1);
}
void showarray(const double arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%.2f ", arr[i]);
	}
	putchar('\n');
}
int mycomp(const void *p1, const void *p2)
{
	const double *a1 = (const double *)p1;
	const double *a2 = (const double *)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}
