#include<stdio.h>

#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive.-Oscar Wilde"               //反斜杠把该定义延续到下一行
#define FOUR TWO*TWO
#define PX printf("X is %d.\n",x)
#define FMT "X is %d.\n"

#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n",X)

void func();
int main()
{
	printf("The file is %s.\n", __FILE__);
	printf("The date is %s.\n", __DATE__);
	printf("The time is %s.\n", __TIME__);
	printf("The version is %ld.\n",__STDC_SECURE_LIB__);
	printf("The file is %d.\n", __LINE__);
	printf("The function is %s.\n", __func__);
	func();
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
