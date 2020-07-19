#include<stdio.h>
#include<stdlib.h>         //提供exit()的原型
#include<string.h>       //提供strcpy()、strcat()的原型

#define LEN 40
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *sourc, FILE *dest);
char *s_gets(char *st, int n);

int main(/*int argc,char *argv[]*/)
{
	
	FILE *fa, *fs;            //fa指向目标文件，fs指向源文件
	int files = 0;           //附加的文件数量
	char file_app[SLEN];    //目标文件名
	char file_src[SLEN];     //源文件名
	int ch;
	printf("请输入目标文件的名称: \n");
	s_gets(file_app, SLEN);

	if ((fa = fopen(file_app, "a+")) == NULL)
	{
		fprintf(stderr, "%s没有打开\n", file_app);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("缓冲区创建失败\n", stderr);
	}
	puts("请输入第一个源文件的名称(输入空行退出): ");
	while (s_gets(file_src, SLEN) && file_src[0] != '\n')
	{
		if (strcmp(file_src, file_app) == 0)
			fputs("无法将文件添加至自身\n", stderr);
		else if ((fs = fopen(file_src, "r")) == NULL)
			fprintf(stderr, "%d没有打开\n", file_src);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("缓冲区创建失败\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "读%s文件发生错误\n", file_src);
			if (ferror(fa) != 0)
				fprintf(stderr, "写%s文件发生错误\n", file_app);
			fclose(fs);
			files++;
			printf("文件%s已添加\n", file_src);
			puts("请输入下一个文件(输入换行退出): ");
		}
	}
	printf("已添加%d个文件\n", files);
	rewind(fa);
	printf("%s 内容: \n", file_app);
	/*
	FILE *in, *out;                //声明两个指向FILE的指针
	int ch;
	char name[LEN];               //储存输出文件名
	int count = 0;
	//检查命令行参数
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//设置输入
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//设置输出
	strncpy(name, argv[1], LEN - 5);               //拷贝文件名
	name[LEN - 5] = '\0';
	strcat(name, ".red");                            //在文件名后添加.red
	if ((out = fopen(name, "w")) == NULL)        //以写模式打开文件
	{
		fprintf(stderr, "Can't creat output file.\n");
		exit(3);
	}
	//拷贝数据
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
		{
			putc(ch, out);       //打印三个字符中的第一个字符
		}
	}
	//收尾
	if (fclose(in) != 0 || fclose(out) != 0)
		printf(stderr, "Error in closing files\n");
	*/
	//printf("hello world");
	return 0;
}