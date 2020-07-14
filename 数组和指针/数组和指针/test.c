#include<stdio.h>
#define SIZE 5


int sum(int* arr, int n);
void func1(double *arr, int n, double num);
void func2(const double *arr, int n);

int main()
{
	/*
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int number = sum(arr, SIZE);
	printf("数组元素之和为: %d\n", number);
	printf("实参的大小为: %d", sizeof(arr));
	*/

	/*
	int arr1[2] = { 1,8 };
	int arr2[2] = { 3,4 };
	int* p1, *p2, *p3,*p4;
	double a = 5.0;
	p1 = p2 = arr1;
	p3 = arr2;
	p4 = &arr1[1];
	p4 = &a;
	printf("*p1 = %d,*p2 = %d,*p3 = %d\n", *p1, *p2, *p3);
	printf("*p1++=%d,*++p2 = %d,(*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf("*p1 = %d,*p2 = %d,*p3 = %d\n", *p1, *p2, *p3);
	p1 = p2 = arr1;
	printf("%d", p4 - p1);
	*/

	/*
	int *p;
	*p = 5;
	*/

	/*
	double arr[SIZE] = { 1.0,2.0,3.0,4.0,5.0 };
	func2(arr, SIZE);
	func1(arr, SIZE, 2.5);
	func2(arr, SIZE);
	*/

	int arr[4][2];
	int **p;
	p = arr;
	printf("%p\n", arr);
	printf("%p\n", *arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0][0]);

	//printf("Hello world!\n");
	return 0;
}

void func1(double *arr, int n, double num)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] *= num;
	}
}

void func2(const double *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%.2f  ", arr[i]);
	}
	putchar('\n');
}

int sum(int* arr, int n)
{
	int num = 0;
	for (int i = 0; i < n; i++)
		num += arr[i];
	printf("形参的大小为: %d\n", sizeof(arr));
	return num;
}