#include<stdio.h>
//int main()
//{
//	printf("hehehe\n");
//	return 0;
//}
//学习调节scanf的可用问题
//#define_CRT_SECURE_NO_WARNINGS 1
//# include<stdio.h>
//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	pfintf("sum=%d\n", sum);
//	return 0;
//}
//学习局部，全局变量的用法
//int a = 10;
//void test()
//{  
//	printf("a= %d\n", a);
//  }
//int main()
//{
//	{
//		printf("a= %d\n", a);
//	}
//	printf("a= %d\n", a);
//	test();
//	return 0;
//}//全局变量不安全
//学习常量
//int main()
//{
//  1.字面常量   
//	int num = 10;
//	num = 20;
//	printf("num=%d\n", num);
//	return 0;
//}
//2.const修饰的常变量
//3.define定义的标识符常量
//4.枚举常量（关键字enum）
#include<string.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//string length
	return 0;
}//求字符串长度（切记字符串求长度\0不算字符串长度只是结束标志）