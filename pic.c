#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//输入一大写字母转换为小写字母，否则为小写字母
//int main() {
//	char ch;
//	scanf("%c", &ch);
//	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
//	printf("%c", ch);
//	return 0;
//}
//阶跃函数（方案一）
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = -1;
//	}
//	else
//		if (x == 0)
//			y = 0;
//		else
//			y = 1;
//	printf("x=%d y=%d", x, y);
//	return 0;
//}
//（方案二）
//int main()
//{	
//	int x, y;
//	scanf("%d", &x);
//	if (x >= 0)
//	{
//		if (x > 0)
//		{
//			y = 1;
//		}
//		else
//		{
//			y = 0;
//		}
//	}
//	else
//	{
//		y = -1;
//	}
//	printf("x = %d y = %d", x, y);
//	return 0;
//}
//switch语句处理多分支选择
//int main()
//{	
//	char grade;
//	scanf("%c", &grade);
//	printf("Your score:");
//	switch (grade)
//	{
//	case 'A':printf("85~100");
//		break;
//	case 'B':printf("70~84");
//		break;
//	case 'C':printf("60~69");
//		break;
//	case 'D':printf("<60\n");
//		break;
//	default:printf("enter data err!\n");
//	}
//	return 0;
//}
//判断100~200不能被3整除的数(方法一)
//int main()
//{	
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//		{
//			continue;
//			
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}
//方法二
//int main()
//{	//continue是跳过本次作用域
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//输出一个4 X 5的矩阵
//int main()
//{	
//	int i, j, n = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0)printf("\n");
//			printf("%d\t", i * j);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//假设遇到第3行第1列终止内循环
//int main()
//{	
//	int i, j, n = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0)
//				printf("\n");
//			if (3 == i && 1 == j) {
//				break;
//				//continue;
//			}
//			printf("%d\t", i * j);
//		}
//	}
//	return 0;
//}
//int main()
//{	//上机操作就是最好的答案。
//	double x = 3.4, y = 3.2;
//	printf("%lf", (int)x * 0.5);
//	printf("%lf", y+=x++);
//	return 0;
//}
//int main()
//{	//逗号表达式的值为逗号表达式中最后一个表达式的值。
//	int a = 10, b = 10;
//	printf("%d\n", (a, b));
//	printf("%d\n", a -= 8);
//	printf("%d\n", a%b);
//	return 0;
//}
//int main()
//{
//	char a = 'A';
//	printf("%c", a+++2);
//	return 0;
//}
//int main()
//{	
//	int a = 10;
//	a += a -= a * a;
//	printf("%d", a);
//	return 0;
//}
//对十个有序元素进行依次赋值，并按逆序输出。
//int main()
//{	
//	int i,a[10];
//	for (i = 0; i <= 9; i++)
//	{
//		a[i] = i;
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//---------------------------错误示范
//int main()
//{
//	int i, a[10];
//	for (i = 1; i <= 10; i++)
//	{
//		a[i] = i;
//	}
//	for (i = 10; i >= 1; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//Fibonacci数列用数组形式表达
//int main()
//{	
//	int i;
//	int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++)
//		f[i] = f[i - 2] + f[i - 1];
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)printf("\n");
//		printf("%12d", f[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{	
//	int i;
//	int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++) {
//		f[i] = f[i - 2] + f[i - 1];
//	}
//	for (i = 0; i < 20; i++) {
//		if (i % 5 == 0) printf("\n");//printf("\n")的位置影响排列的位置的横纵；
//		
//		printf("%12d", f[i]);
//	}
//	printf("\n");
//	return 0;
//}
//冒泡排序
//int main()
//{	
//	int a[10];
//	int i, j, t;
//	printf("输入的数是：\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	for(j=0;j<9;j++)
//		for(i=0;i<9-j;i++)
//			if (a[i] > a[i + 1]) {
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//	printf("输出的数是\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
// 二次写冒泡
//int main()
//{	
//	int a[10], i, j, k;
//	printf("你输入的数值：\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (j = 0; j < 9; j++)
//	{
//		for (i = 0; i < 9 - j; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = k;
//			}
//		}
//	}
//	printf("你输入的数字是：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//把第一次外循环改写成while循环的形式。
//int main()
//{
//	int a[10], i, j=0, k;
//	printf("你输入的数值：\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	while (j < 9)
//	{//这样改写会发现从第二个for到j++是冒泡排序的核心
//		for (i = 0; i < 9 - j; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = k;
//			}
//		}
//		j++;
//	}
//	printf("你输入的数字是：\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
int main()
{//1.以这种方式表达不出矩阵的形式，足以证明它仅仅是逻辑上的概念。
 //2.可以知道在内存中，各元素是连续存放的，不是二维的是线性的。
	int i=0,j=0;
	int a[3][4] = { {1},{2},{3} };
	printf("%d", a[i][j]);
	return 0;
}