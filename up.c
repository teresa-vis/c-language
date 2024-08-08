#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("电脑将在一分钟内关机，否则输入：哈皮\n");
//		scanf("%s", input);
//		if (strcmp(input, "哈皮") == 0) {
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//#include <string.h>
//int main()
//{	
//	/*char arr1[20] = {0};
//	char arr2[] = "hello air";
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);*/
//	char arr[] = "good morning";
//	memset(arr, 'y', 4);
//	printf("%s\n", arr);
//	return 0;
//}
//**************************************************

//函数的定义
//自定义函数（求两个数的最大值）
//int get_max(int a ,int b) {
//	int c = 0;
//	if (a > b) {
//		c = a;
//	}
//	else {
//		c = b;
//	}
//	return c;
//}
//int main()
//{	
//	int a = 10;
//	int b = 20;
//	++++++++++++++++++++++++++函数的调用
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//交换两个整型变量的内容
//函数返回类型的地方写出：void,表示这个函数不返回任何值，也不需要返回
//写出问题了
// exc_math在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝，改变形参，不能改变实参。
//void exc_math(int x, int y)
//{
//	int d = 0;
//	d = x;
//	x = y;
//	y = d;
//}
//int main()
//{	
//	int a = 3;
//	int c = 5;
//	printf("交换前：a=%d c=%d\n", a, c);
//	exc_math(a, c);//传值调用
//	printf("交换后：a=%d c=%d\n", a, c);
//	return 0;
//}
//----------------------------------------------------
//int main()
//{	
//	int a = 10;
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//------------------------------------------------------

//void Swap(int *pa, int *pb)
//{
//	int c = 0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//int main()
//{	
//	int a = 10;
//	//int* pa = &a;
//	int b = 20;
//	//int* pb = &b;
//	printf("打印前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);//传址调用
//	printf("打印后：a=%d b=%d\n", a, b);
//	return 0;
//}
//………………………………………………………………
//函数的调用：
// 传值调用
// 函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参。
// 传址调用
// 1：传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
// 2：这种传参方式可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量。

//#include <math.h>
//int is_prime(int n)
//{
//	//2->n-1之间的数去试除
//	int j = 0;
//	for (j = 2; j < n; j++)//j<=sqrt(n);引用sqrt()库函数得引用人家定义好的头文件
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//			
//	}
//	return 1;
//}
//int main()
//{	
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{	
//		if (is_prime(i) == 1) 
//		{
//			count++;
//			printf("%d ", i);
//		}
//	
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}
//写一个函数来判断某一年是不是闰年。**********************可以输出闰年数，但方法不够优化。
//int math_year(int x)
//{
//	if ((x%400==0)||(x%4==0)&&(x%100!=0))
//	{
//		printf("%d ", x);
//		
//	}
//}
//int main()
//{	
//	int a = 0;
//	int count = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		math_year(a);
//	}
//	return 0;
//}
//is_leap_year()*******************************************优化后
//如果判断是闰年，则返回1
//不是闰年返回0
// int is_leap_year(x)
//{
//	if ((x % 400 == 0) || (x % 4 == 0) && (x % 100 != 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{	
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			count++;
//			printf("%d ", y);
//		}
//	}
//	printf("\ncount:%d ", count);
//	return 0;
//}
//int math_year(int x)//*****************************重新修改后。
//{
//	if ((x%400==0)||(x%4==0)&&(x%100!=0))
//	{
//		return 1;
//		
//	}
//	else {
//		return 0;
//	}
//	
//}
//int main()
//{	
//	int a = 0;
//	int count = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (math_year(a))
//		{
//			count++;
//			printf("%d ", a);
//		}
//	}
//	printf("\ntotal:%d ", count);
//	return 0;
//}
// 
//一个函数如果不写返回类型，默认返回int类型
// 
//写一个函数，实现一个整型有序组的二分查找。
//int binary_search(int brr[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (brr[mid] > k)//当前被查找的数的中间元素
//		{
//			right = mid - 1;
//		}
//		else if (brr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到的位置的下标
//	//找不到就返回-1
// 数组arr传参，实际传递的不是数组本身，仅仅传过去了数组元素的地址（在函数内部）
// 如果函数内部需要参数部分传来的某个数组的元素个数，要先在外部求好元素个数，在以参数的形式把参数传过去
//	int ret = binary_search(arr,key,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else 
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	return 0;
//}
//************************************************再写
//binary_search(int arr[],int fin,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > fin)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < fin)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int fin_val = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,fin_val,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else 
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//写一个函数，每调用一次这个函数，就会将num值增加1.
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{	
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//***************************************************
//函数的嵌套调用和链式访问
// 函数之间不能嵌套定义。
//函数和函数之间可以有机结合。

//void test2()
//{
//	printf("hehe\n");
//	return 0;
//}
//void test1()
//{
//	test2();
//	return 0;
//}
//int main()
//{	
//	test1();
//	return 0;
//}
//int main()
//{	
//	int maxm (int x, int y);
//	int a, b, c;
//	scanf("%d %d", &a, &b);
//	c = maxm(a, b);
//	printf("max= %d \n", c);
//	return 0;
//}
//int maxm(int x, int y)
//{
//	int z;
//	if (x > y)z = x;
//	else z = y;
//	return (z);
//}
//int main()
//{	
//	int a, b, c;
//	printf("输入a,b,c:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)a = b;
//	if (a < c)a = c;
//	printf("最大值：%d ", a);
//	return 0;
//}
//int main()
//{	
//	
//	int a = 1;
//	for (int i = 1; i <= 5; i++)
//	{
//		a = a * i;
//	}
//	
//	printf("%d ", a);
//	
//	return 0;
//}
//int main()
//{	
//	int i = 1;
//	int j = 2;
//	while(j <= 5)
//	{
//		i = i * j;
//		j++;
//	}
//	printf("%d ", i);
//	return 0;
//}
//int main()
//{	
//	int sign = 1;
//	double deno = 2.0, sum = 1.0, term;
//	while (deno <= 100)
//	{
//		sign = -sign;
//		term = sign / deno;
//		sum = sum + term;
//		deno = deno + 1;
//	}
//	printf("%f\n", sum);
//	return 0;
//}
//#include <math.h>
//int main()
//{	
//	double a, b, c, s, area;
//	a = 3.67;
//	b = 5.43;
//	c = 6.21;
//	s = (a + b + c) / 2;
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("a=%f\tb=%f\tc=%f\t\n", a, b, c);
//	printf("area=%f\n", area);
//	return 0;
//} 
//int main()
//{
//	double a;
//	a = 10000;
//	printf("%f\n", a / 3.0);
//	printf("%-25.15f%25.15f\n", a / 3,a/3);
//	printf("%e", 123.456);
//	printf("%15.2e", 123.456);
//	printf("%15.2E", 123.456);
//	return 0;
//}
//int main()
//{	
//	int a = 377;
//		int b = -1;
//	printf("%c", a);
//	printf("%20o%%", b);
//	return 0;
//}
//int main()
//{	//字符类型也属于整数类型，因此将一个字符赋给字符变量和将字符的ASCII代码赋给字符变量作用是完全相同的
//	//但是应该注意，整型数据的范围为0~127
//	/*char a = 'B', b = 'O', c = 'Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	putchar(c);*/
//	int a = 66, b = 79, c = 89;
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}
//int main()
//{	
//	/*char a, b, c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');*/
//
//	putchar(getchar());
//	putchar(getchar());
//	putchar(getchar());
//	putchar('\n');
//	return 0;
//}
//int main()
//{	
//	char a1, b2;
//	a1 = getchar();
//	b2 = a1 + 32;
//	putchar(b2);
//	putchar('\n');
//	return 0;
//}
//int main()
//{	
//	int x = 0302, y = 302;
//	printf("%o%o\n", x, y);
//	return 0;
//}
//由小到大输出三个数。
//int main()
//{	
//	int a, b, c, t;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a > c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b > c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//由大到小输出三个数。
//int main()
//{	
//	double a, b, c, t;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%f %f %f", a, b, c);
//	return 0;
//}