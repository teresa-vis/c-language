#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//extern A;
//int power(int n)
//{
//	int i, j = 1;
//	for (i = 1; i <= n; i++)
//	{
//		j = j * A;
//	}
//	return j;
//}
//引用指针数组优化.
//int main()
//{
//	int *t, a, b;
//	printf("please enter two integer numbers:\n");								
//	scanf("%d %d", &a, &b);
//	int* m = &a, * n = &b;
//	if (a < b)
//	{
//		t = m;
//		m = n;
//		n = t;
//	}
//	printf("%d %d", *m, *n);
//	return 0;
//}
//引用指针变量的进一步优化。
//int main()
//{
//	int a, b;
//	printf("please enter two integer numbers:\n");
//	scanf("%d %d", &a, &b);
//	int* m = &a, * n = &b;
//	if (a < b)
//	{
//		m = &b;
//		n = &a;
//	}
//	printf("%d %d", *m, *n);
//	return 0;
//}
// 按大小顺序输出两个整数，现用函数处理，而且用指针类型的数据作为函数的参数。
//int main()
//{	
//	void swap(int* p1, int* p2);
//	int a, b;
//	printf("please enter two integer numbers:\n");
//	int* point1 = &a, * point2 = &b;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//	swap(point1, point2);
//	printf("%d %d", a, b);
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int *tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//尝试进一步优化中...
//int main()
//{
//	void swap(int* p1, int* p2);
//	int a, b;
//	printf("please enter two integer number:\n");
//	scanf("%d %d", &a, &b);
//	int* point_1 = &a, * point_2 = &b;
//	if (a < b)
//		swap(point_1, point_2);
//	printf("%d %d", a, b);
//	return 0;
//}
////void swap(int* p1, int* p2)
////{
////	int temp;
////	temp = *p1;
////	*p1 = *p2;
////	*p2 = temp;
////}
//(void swap(int x ,int y)//此路不通
//{
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;
//})
//int main()
//{
//	int swap(int* x, int* y, int* z, int* k);
//	int a=1, b=2, c=3, d=4;
//	printf("输入几个数:");
//	//scanf("%d %d %d %d", &a, &b, &c, &d);
//	int* A = &a, * B = &b, * C = &c, * D = &d;
//	swap(A, B, C, D);
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}
//int swap(int* x, int* y, int* z, int* k)
//{
//	//scanf("%d %d %d %d", &x, &y, &z, &z);
//	printf("%d %d %d %d\n", *k, *z, *y, *x);
//}
//C语言中实参变量和形参变量之间的数据传递是单项的"值传递"方式，用指针变量做函数的参数是同样要遵循这一原则，不可能通过执行调用函数来改变
//实参指针变量的值，但是可以改变实参指针变量所指变量的值。

