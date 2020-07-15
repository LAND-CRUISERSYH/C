#include<stdio.h>
#define SIZE 5
#define ROWS 3
#define COLS 4
#define MONTHS 12
#define YEARS 5

int sum(int* arr, int n);
void func1(double *arr, int n, double num);
void func2(const double *arr, int n);
void func_rows(int (*p)[COLS], int n);
void func_cols(int (*p)[COLS], int n);
int func_in(int(*p)[COLS], int n);
void func2_1(double arr1[], double arr[], int n);
void func2_2(double arr2[], double arr[], int n);
void func2_3(double arr3[], double arr[], double *p);
int func_3(int arr[], int n);
int func_4(double arr[], int n);
double func_5(double arr[], int n);
void func_6(double arr[], int n);
void func_10(int arr1[], int arr2[], int arr3[], int n);
void func11_1(int arr[][5], int n);
void func11_2(int arr[][5], int n);
void func13_1(double arr[][5], int n);
double func13_2(double arr[],int n);
double func13_3(double arr[][5], int n);
double func13_4(double arr[][5], int n);
void func13_5(double arr[][5], int n);

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

	/*
	int arr[4][2];
	int **p;
	p = arr;
	printf("%p\n", arr);
	printf("%p\n", *arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0][0]);
	*/

	/*
	int arr[ROWS][COLS] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	func_rows(arr, ROWS);
	func_cols(arr, ROWS);
	printf("数组总和为: %d", func_in(arr, ROWS));
	/*

	/*
	int i= 3;
	float arr[5];
	arr[1] = i;
	*/

	/*
	int arr[] = { 1,2,3,4 };
	printf("%p\n", arr);
	*/

	/*
	//编程练习1
	float rain[YEARS][MONTHS]=
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	float num = 0;

	for (int i = 0; i < YEARS; i++)
	{
		float sum = 0;
		for(int j = 0; j < MONTHS; j++)
		{
			sum = sum + *(*(rain+i)+j);	
		}
		num = sum + num;
		printf("第%d年的降水量为: %.2f\n", i + 1, sum);
	}
	printf("总降水量为: %.2f\n", num);
	for (int i = 0; i < MONTHS; i++)
	{
		float sum = 0;
		for (int j = 0; j < YEARS; j++)
		{
			sum = sum + *(*(rain + j)+i);
		}
		printf("第%d月的降水量为: %.2f\n", i + 1, sum);
	}
	*/

	/*
	//编程练习2
	double arr[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double arr1[5];
	double arr2[5];
	double arr3[5];
	for (int i = 0; i < 5; i++)
		printf("%.2f ", arr[i]);
	putchar('\n');
	func2_1(arr1, arr, 5);
	func2_2(arr2, arr, 5);
	func2_3(arr3, arr, arr + 5);
	//printf("Hello world!\n");
	*/

	/*
	//编程练习3
	int arr[5] = { 66,75,84,2,55 };
	printf("最大值为: %d\n", func_3(arr, 5));
	*/

	/*
	//编程练习4
	double arr[5] = { 66.7,88.2,44.9,62.8,50.6 };
	printf("最大值的下标为: %d\n", func_4(arr, 5));
	*/

	/*
	//编程练习5
	double arr[5] = { 66.7,88.2,44.9,62.8,50.6 };
	printf("最大值和最小值的差值为: %.2f\n", func_5(arr, 5));
	*/

	/*
	//编程练习6
	double arr[6] = { 66.7,88.2,44.9,62.8,50.6,12.9 };
	for (int i = 0; i < 6; i++)
	{
		printf("%.2f ", arr[i]);
	}
	putchar('\n');
	func_6(arr, 6);
	for (int i = 0; i < 6; i++)
	{
		printf("%.2f ", arr[i]);
	}
	*/
	
	/*
	//编程练习7
	double arr[2][3] = { 1.1,2.2,3.3,4.4,5.5,6.6 };
	double arr1[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("%.2f ", arr[i][j]);
	}
	putchar('\n');
	putchar('\n');
	for (int i = 0; i < 2; i++)
	{
		func2_1(arr1[i], arr[i], 3);
	}
	*/

	/*
	//编程练习8
	double arr[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	double arr1[3];
	func2_1(arr1,&arr[2], 3);
	for (int i = 0; i < 3; i++)
		printf("%.2f ", arr1[i]);
	*/

	/*
	//编程练习10
	int arr1[4] = { 2,4,5,8 };
	int arr2[4] = { 1,0,4,6 };
	int arr3[4];
	func_10(arr1, arr2, arr3, 4);
	*/
	
	/*
	//编程练习11
	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	func11_1(arr, 3);
	putchar('\n');
	func11_2(arr, 3);
	*/

	//编程练习13
	double arr[3][5];
	func13_1(arr, 3);
	for (int i = 0; i < 3; i++)
	{
		printf("第%d组数据的平均值为: %.2f\n", i + 1, func13_2(arr[i], 5));
	}
	printf("所有数据的平均值为: %.2f\n", func13_3(arr, 3));
	printf("所有数据的最大值为: %.2f\n", func13_4(arr, 3));
	func13_5(arr, 3);
	return 0;
}

void func13_5(double arr[][5], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%.2f ", arr[i][j]);
		}
		putchar('\n');
	}
}

double func13_4(double arr[][5], int n)
{
	double MAX = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] > MAX)
				MAX = arr[i][j];
		}
	}
	return MAX;
}

double func13_3(double arr[][5], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
			sum = sum + arr[i][j];
	}
	return sum / (5 * n);
}

double func13_2(double arr[],int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum / n;
}

void func13_1(double arr[][5], int n)
{
	printf("请输入三组数据，每组数据包含5个double数: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%lf", &arr[i][j]);
		}
	}
}

void func11_1(int arr[][5], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}
}

void func11_2(int arr[][5], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]*2);
		}
		putchar('\n');
	}
}

void func_10(int arr1[], int arr2[], int arr3[], int n)
{
	for (int i = 0; i < n; i++)
		arr3[i] = arr1[i] + arr2[i];
	for (int i = 0; i < n; i++)
		printf("%d ", arr1[i]);
	putchar('\n');
	for (int i = 0; i < n; i++)
		printf("%d ", arr2[i]);
	putchar('\n');
	for (int i = 0; i < n; i++)
		printf("%d ", arr3[i]);
	putchar('\n');
}

void func_6(double arr[], int n)
{
	double num;
	for (int i = 0; i < n / 2; i++)
	{
		num = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = num;
	}
}

double func_5(double arr[], int n)
{
	double Max = arr[0];
	double Min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > Max)
			Max = arr[i];
		if (arr[i] < Min)
			Min = arr[i];
	}
	return Max - Min;
}

int func_4(double arr[], int n)
{
	double MAX = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > MAX)
			MAX = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (MAX == arr[i])
			return i;
	}
	return 0;
}

int func_3(int arr[], int n)
{
	int MAX = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > MAX)
			MAX = arr[i];
	}
	return MAX;
}

void func2_1(double arr1[], double arr[], int n)
{
	for (int i = 0; i < n; i++)
		arr1[i] = arr[i];
	/*
	for (int i = 0; i < n; i++)
		printf("%.2f ", arr1[i]);
	putchar('\n');
	*/
}

void func2_2(double arr2[], double arr[], int n)
{
	double *p = arr;
	double *p1 = arr2;
	int count = 0;
	while (count<n)
	{
		*p1 = *p;
		p++;
		p1++;
		count++;
	}
	for (int i = 0; i < n; i++)
		printf("%.2f ", arr2[i]);
	putchar('\n');
}

void func2_3(double arr3[], double arr[], double *p)
{
	int count = 0;
	while (p != arr)
	{
		p--;
		count++;
	}
	for (int i = 0; i < count; i++)
		arr3[i] = arr[i];
	for (int i = 0; i < count; i++)
		printf("%.2f ", arr[i]);
	putchar('\n');
}

void func_rows(int(*p)[COLS], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < COLS; j++)
		{
			sum = sum + p[i][j];
		}
		printf("第%d行的和为: %d\n", i + 1, sum);
	}
}

void func_cols(int(*p)[COLS], int n)
{
	for (int j = 0; j < COLS; j++)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum = sum + p[i][j];
		}
		printf("第%d列的和为: %d\n", j + 1, sum);
	}
}
int func_in(int(*p)[COLS], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < COLS; j++)
			sum = sum + p[i][j];
	}
	return sum;
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