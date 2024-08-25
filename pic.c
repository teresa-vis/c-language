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
//int main()
//{//1.以这种方式表达不出矩阵的形式，足以证明它仅仅是逻辑上的概念。
// //2.可以知道在内存中，各元素是连续存放的，不是二维的是线性的。
//	int i=0,j=0;
//	int a[3][4] = { {1},{2},{3} };
//	printf("%d", a[i][j]);
//	return 0;
//}
//将一个二维数组行和列的元素进行互换，存到另一个二维数组中。
//int main()
//{	
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2], i, j;
//	printf("array a:\n");
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			printf("%d ", a[i][j]);
//			b[j][i] = a[i][j];//在打印输出的过程中把它们之间的值进行转换。
//		}
//		printf("\n");
//	}
//	printf("array b:\n");//下面也就不需要进行i,j,下标之间的形式转化，因为下面在输出的时候，逻辑代码已经表示清楚了
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 1; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//有一个3 X 4的矩阵，求出其中最大的那个元素的值，以及其所在的行列号。
//int main()
//{	
//	int i,j, max, row = 0, column = 0;
//	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
//	max = a[0][0];
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				row = i;
//				column = j;
//			}
//		}
//	}
//	printf("max=%d\nrow=%d\ncolumn=%d\n", max, row, column);
//	return 0;
//}
//int main()
//{
//	int i, j, row = 0, column = 0, max;
//	int a[4][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };
//	max = a[0][0];
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				row = i;
//				column = j;
//			}
//		}
//	}
//	printf("max=%d\nrow=%d\ncolumn=%d\n", max, row, column);
//	return 0;
//}
//int main()
//{	
//	char a[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%c ", a[i][j]);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{	
//	char a[8] = "china";
//	/*puts(a);
//	gets();
//	strlen("china");*/
//	printf("%d",strlen("china"));
//	return 0;
//}
//函数的调用
//int main()
//{	
//	void print_star();
//	void print_msg();
//	print_star();
//	print_msg();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("*******************\n");
//}
//void print_msg()
//{
//	printf("this is a book\n");
//}
//输入两个数，要求输出其中值较大者。要求用函数来找到大数。
//int main()
//{	
//	int max(int x, int y);
//	int a, b, c;
//	printf("输入两个数:");
//	scanf("%d%d", &a, &b);
//	c = max(a, b);
//	printf("最大值是=%d ", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return (z);
//}
//函数返回值的类型与指定的函数类型不同。
//int max(float x, float y)
//{
//	float z;
//	return(z = x > y ? x : y);
//}
//int main()
//{	
//	int max(float x,float y);
//	float a, b;
//	int c;
//	scanf("%f%f", &a, &b);
//	c = max(a, b);
//	printf("%d", c);
//	return 0;
//}
//输入两个实数，用一个函数求出它们之和。
//int main()
//{	
//	float add(float , float );
//	float a, b, c;
//	printf("enter a and b:\n");
//	scanf("%f,%f", &a, &b);
//	c = add(a, b);
//	printf("sum is %f\n", c);
//	return 0;
//}
//float add(float x, float y)
//{
//	float z;
//	z = x + y;
//	return(z);
//}
//求出4个数的最大值，要求用函数嵌套的方式
//int main()
//{
//	int max4(int a, int b, int c, int d);
//	int a, b, c, d, max;
//	printf("please enter four integer numbers:\n");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	max = max4(a, b, c, d);
//	printf("max=%d", max);
//	return 0;
//}
//int max4(int a, int b, int c, int d)
//{
//	int max2(int a, int b);
//	int m;
//	m = max2(a, b);
//	m = max2(m, c);
//	m = max2(m, d);
//	return m;
//}
//int max2(int a, int b)
//{
//	if (a >= b)
//	{
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//程序改进
//int main()
//{
//	int max4(int a, int b, int c, int d);
//	int a, b, c, d, max;
//	printf("please enter four integer numbers:\n");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	max = max4(a, b, c, d);
//	printf("max=%d", max);
//	return 0;
//}
//int max4(int a, int b, int c, int d)
//{
//	int max2(int a, int b);
//	return max2(max2(max2(a, b), c), d);//把函数调用作为函数的参数
//}
//int max2(int a, int b)
//{
//	return(a >= b ? a : b);//运用条件表达式进行简化
//}
//理解函数的递归调用
//int main()
//{	
//	int age(int n);
//	/*int m;
//	m = age(5);
//	printf("NO.5,age:%d\n", m);*/
//	printf("NO.5,age:%d\n", age(5));
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if (n == 1)
//	{
//		c = 10;
//	}
//	else {
//		c = age(n - 1) + 2;
//	}
//	return c;
//}
//用递归的方法求n!
//int main()
//{	
//	int fac(int n);
//	int n, m;
//	printf("input an integer number:\n");
//	scanf("%d", &n);
//	m = fac(n);
//	printf("%d!=%d\n", n,m);
//	return 0;
//}
//int fac(int n)
//{
//	int f;
//	if (n < 0)
//	{
//		printf("n<0,data error!");
//	}
//	else if (n == 0 || n == 1)
//	{
//		f = 1;
//	}
//	else
//	{
//		f = fac(n - 1) * n;
//	}
//	return (f);
//}
//
//练习一
//int main()
//{
//	int toup(int n);
//	int n, m;
//	printf("input an integer number:\n");
//	scanf("%d", &n);
//	m = toup(n);
//	printf("%d!=%d\n", n, m);
//	return 0;
//}
//int toup(int n)
//{
//	int c;
//	if (n < 0)
//	{
//		printf("n<0,data error:\n");
//	}
//	else if (n == 0 || n == 1)
//	{
//		c = 1;
//	}
//	else {
//		c = toup(n - 1) * n;
//	}
//	return c;
//}
//Hanoi(汉诺)塔问题。
//int main()
//{	
//	void mot(int n, char one, char two, char three);
//	int m;
//	printf("输入盘数:");
//	scanf("%d", &m);
//	printf("移动的步数%d为:\n", m);
//	mot(m, 'A', 'B', 'C');
//	return 0;	
//}
//void mot(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)
//	{
//		move(one, three);
//	}
//	else
//	{
//		mot(n - 1, one, three, two);
//		move(one, three);
//		mot(n - 1, two, one, three);
//	}
//}
//void move(char x, char y)
//{
//	printf("%c-->%c\n", x, y);
//}
// 数组元素做函数的参数。
//输入十个数，并求出其中最大的元素和该数是第几个数。
//int main()
//{	
//	int compare(int x, int y);
//	int a[10],m,n,i;
//	printf("输入十个数:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("\n");
//	for (i = 1, m = a[0], n = 0; i < 10; i++)
//	{
//		if (compare(m, a[i]) > m)
//		{
//			m = compare(m, a[i]);
//			n = i;
//		}
//	}
//	printf("最大的数是:%d\n第%d个是最大的数:\n", m, n + 1);
//	return 0;
//}
//int compare(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int max(int x, int y);
//	int a[10], m, n, i;
//	printf("输入十个数:\n");
//	for(i=0;i<10;i++)
//	scanf("%d", &a[i]);
//	printf("\n");
//	for (i = 1, n = 0,m = a[0]; i < 10; i++)
//	{
//		if (max(a[i], m)>m)
//		{
//			m = max(a[i], m);
//			n = i;
//		}
//	}
//	printf("输出的最大值是:%d\n第%d个数是最大值\n", m,n+1);
//	return 0;
//}
//int max(int x, int y)
//{
//	return(x > y ? x : y);
//}
// 一维数组名作函数的参数
// 求十名学生的成绩并返回。
//int main()
//{	
//	float average(float arr[10]);
//	float score[10], aver;
//	int i;
//	printf("输入十名学生的成绩:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &score[i]);
//	aver = average(score);
//	printf("%5.2f", aver);
//	return 0;
//}
//float average(float arr[10])
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//		aver = sum / 10;
//	}
//	return aver;
//}
//练习
//int main()
//{	
//	float averge(float arr[10]);
//	float score[10], aver;
//	int i;
//	printf("输入十名学生的成绩:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &score[i]);
//	printf("\n");
//	aver = averge(score);
//	printf("平均成绩为%5.2f", aver);
//	return 0;
//}
//float averge(float arr[10])
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//		aver = sum / 10;
//	}
//	return aver;
//}
//设两个班级学生人数为5人和10人，调用一个average函数，分别求出两个班级的平均成绩
//int main()
//{	
//	float average(float arr[], int n);
//	float score1[5] = { 98.5,97,91.5,60,55 };
//	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
//	printf("平均成绩A是%6.2f\n", average(score1, 5));
//	printf("平均成绩B是%6.2f\n", average(score2, 10));
//	return 0;
//}
//float average(float arr[], int n)
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		sum = sum + arr[i];
//		aver = sum / n;
//	}
//	return (aver);
//}
//************************************用选择法对数组中的10个整数按由小到大排序。
//int main()
//{	
//	void sort(int array[], int n);
//	int i, a[10];
//	printf("输入十个整数:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	sort(a, 10);
//	printf("排序后的数组为:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//void sort(int array[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (array[j] < array[k])
//			{
//				k = j;
//				
//			}
//		}
//		t = array[k];
//		array[k] = array[i];
//		array[i] = t;
//	}
//}
//多维数组名做函数的参数
//int main()
//{
//	int max_value(int arr[][4]);
//	int arr[3][4] = { {12,15,17,3},{4,9,8,3},{7,21,42,62} };
//	printf("最大值是:%d\n",max_value(arr));
//	return 0;
//}
//int max_value(int arr[][4])
//{
//	int i, j, max;
//	max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	return(max);
//}
//写一个函数，当主函数调用此函数后，能求出平均分，最高分，最低分。(程序有误)
//float Max = 0, Min = 0;
//int main()
//{	
//	float average(float array[], int n);
//	float ave, score[10];
//	int i;
//	printf("enter 10 scores:");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &score[i]);
//	ave = average(score, 10);
//	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
//	return 0;
//}
//float average(float array[], int n)
//{
//	int i;
//	float aver, sum = array[0];
//	Max = Min = array[0];
//	for (i = 1; i < n; i++)
//	{
//		if (array[i] > Max)Max = array[i];
//		else if (array[i] < Min)Min = array[i];
//		sum = sum + array[i];
//	}
//	aver = sum / n;
//	return aver;
//}
//int a = 100; b = 29;
//int main()
//{	
//	int max(int x, int y);
//	int a = 8;
//	//max(a,b);
//	printf("%d", max(a, b));
//	return 0;
//}
//int max(int x, int y)
//{
//	int c;
//	c = x > y ? x : y;
//	return(c);
//}
//自动变量（auto变量)，静态局部变量(static局部变量)
//int main()
//{
//	int f(int a);
//	int a = 2, i;
//	for (i = 0; i < 3; i++)
//		printf("%d\n", f(a));
//	return 0;
//}
//int f(int a)
//{
//	auto int b = 1;
//	//static int c = 3;
//	//这里static变量存储类型，函数调用结束后值不消失而继续保留原值
//	//即占用的存储单元不释放，在下一次调用该函数时，该变量以有值，就是上一次函数调用
//	//结束的值。
//	 int c = 3;
//
//	b = b + 1;
//	c = c + 1;
//	return(a + b + c);//这里return这三个参数作为一个值传到f函数里面，然后执行i++;
//}
//利用静态变量的特性求n!.
//int main()//第一种写法用for循环体进行。
//{	
//	int f(int n);
//	int i,a;
//	for (i = 1; i <= 5; i++)
//	{
//		a = i;
//		printf("%d!=%d\n", i, f(a));
//	}
//	return 0;
//}
//int f(int n)
//{
//	static int f = 1;
//	f = f * n;
//	return f;
//}
//第二种写法利用自动变量i本身的特性进行求解。
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//		printf("%d!=%d\n", i, f(i));
//	return 0;
//}
//int f(int n)
//{
//	static int f = 1;
//	f = f * n;
//	return f;
//}
//用extern声明外部变量，扩展外部变量在外部程序中的作用域。
//int A, B, C;
//int main()
//{	
//	int max();
//	extern int A, B, C;
//	printf("please enter three integer number:\n");    
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d", max());
//	return 0;
//}
//
//int A, B, C;
//
//int max()
//{
//	int m;
//	m = A > B ? A : B;
//	if (C > m)m = C;      
//	return m;
//}
//给定b的值，输入a和m,求a*b和a的m次的值。
//int A;
//int main()
//{
//	int squr(int n);//编译系统只关心参数个数和参数类型，而不检查参数名(形参参数名和函数参数名一样)。
//					//如pic.c和com.c做对比可得知。
//	int b = 3, c, d, m;
//	printf("enter in numbers:\n");
//	scanf("%d%d", &A, &m);
//	c = A * b;
//	printf("%d*%d=%d\n",A,b,c);
//	d = power(m);
//	printf("%d**%d=%d\n", A, m, d);
//	return 0;
//}

