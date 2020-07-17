#include<stdio.h>
#include<stdlib.h>                    //提供rand()的原型
//static unsigned long int next = 1;
//void func();
//int rand1()            //返回0-32767之间的值
//{
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//void srand0(unsigned int seed)
//{
//	next = seed;
//}
/*
int rollem(int sides)
{
	int roll;
	roll = rand() % sides + 1;
	return roll;
}
*/
int main()

{
	printf("%d", sizeof(long));
	/*
	int n = 9;
	int *p;
	p = (int *)malloc(n * sizeof(int));
	*/
	/*unsigned seed;
	printf("请输入数字: ");
	while (scanf("%u", &seed) == 1)
	{
		srand0(seed);
		for (int i = 0; i < 5; i++)
			printf("%d ", rand1());
		printf("\n请继续输入: ");
	}*/
	/*
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("count = %d, ", count);
		func();
	}
	**/
	//int num;
	//printf("%d", num);
	//printf("hello world\n");
	return 0;
}

//void func()
//{
//	int a = 1;
//	static int b = 1;
//	printf("a = %d, b = %d\n", a++, b++);
//}