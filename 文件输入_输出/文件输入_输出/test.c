#include<stdio.h>
#include<stdlib.h>         //�ṩexit()��ԭ��
#include<string.h>       //�ṩstrcpy()��strcat()��ԭ��

#define LEN 40
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *sourc, FILE *dest);
char *s_gets(char *st, int n);

int main(/*int argc,char *argv[]*/)
{
	
	FILE *fa, *fs;            //faָ��Ŀ���ļ���fsָ��Դ�ļ�
	int files = 0;           //���ӵ��ļ�����
	char file_app[SLEN];    //Ŀ���ļ���
	char file_src[SLEN];     //Դ�ļ���
	int ch;
	printf("������Ŀ���ļ�������: \n");
	s_gets(file_app, SLEN);

	if ((fa = fopen(file_app, "a+")) == NULL)
	{
		fprintf(stderr, "%sû�д�\n", file_app);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("����������ʧ��\n", stderr);
	}
	puts("�������һ��Դ�ļ�������(��������˳�): ");
	while (s_gets(file_src, SLEN) && file_src[0] != '\n')
	{
		if (strcmp(file_src, file_app) == 0)
			fputs("�޷����ļ����������\n", stderr);
		else if ((fs = fopen(file_src, "r")) == NULL)
			fprintf(stderr, "%dû�д�\n", file_src);
		else
		{
			if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("����������ʧ��\n", stderr);
				continue;
			}
			append(fs, fa);
			if (ferror(fs) != 0)
				fprintf(stderr, "��%s�ļ���������\n", file_src);
			if (ferror(fa) != 0)
				fprintf(stderr, "д%s�ļ���������\n", file_app);
			fclose(fs);
			files++;
			printf("�ļ�%s�����\n", file_src);
			puts("��������һ���ļ�(���뻻���˳�): ");
		}
	}
	printf("�����%d���ļ�\n", files);
	rewind(fa);
	printf("%s ����: \n", file_app);
	/*
	FILE *in, *out;                //��������ָ��FILE��ָ��
	int ch;
	char name[LEN];               //��������ļ���
	int count = 0;
	//��������в���
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//��������
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	//�������
	strncpy(name, argv[1], LEN - 5);               //�����ļ���
	name[LEN - 5] = '\0';
	strcat(name, ".red");                            //���ļ��������.red
	if ((out = fopen(name, "w")) == NULL)        //��дģʽ���ļ�
	{
		fprintf(stderr, "Can't creat output file.\n");
		exit(3);
	}
	//��������
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
		{
			putc(ch, out);       //��ӡ�����ַ��еĵ�һ���ַ�
		}
	}
	//��β
	if (fclose(in) != 0 || fclose(out) != 0)
		printf(stderr, "Error in closing files\n");
	*/
	//printf("hello world");
	return 0;
}