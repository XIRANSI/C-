#include<stdio.h>
//实现两个整数的交换
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
//实现不用参数进行两个整数的交换
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
//这个方法的缺点是不能进行大的数字（会溢出）
//优化版本三
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
//最终版