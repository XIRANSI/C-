#include<stdio.h>
//ʵ�����������Ľ���
int main()
{
	int a=1;
	int b=2;
	int c=0;
	printf("a=%d b=%d\n", a, b);
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d\n", a, b);
        return 0;
}
//ʵ�ֲ��ò����������������Ľ���
int main()
{
	int a = 1;
	int b = 2;
	printf("a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
       return 0;
}
//���������ȱ���ǲ��ܽ��д�����֣��������
//�Ż��汾��
int main()
{
	int a = 1;
	int b = 2;
	printf("a= %d b= %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a= %d b= %d\n", a, b);
     return 0;
}
//���հ�