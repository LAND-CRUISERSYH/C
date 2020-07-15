#include<stdio.h>
#define SIZE 20

int main()

{

	char ch[14];
	fgets(ch, 14, stdin);
	puts(ch);
	fputs(ch, stdout);
	/*
	char ch[SIZE];
	gets(ch);
	printf("%s\n", ch);
	puts(ch);
	*/
	/*
	char *p = "Hello";
	p[0] = 'L';
	printf("Hello");
	*/
	//printf("%p,%c", "are", *"Hello");
	//printf("Hello world");
	return 0;
}