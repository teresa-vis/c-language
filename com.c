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

//输入三个整数a,b,c要求按由大到小的顺序输出，用swap函数交换两个变量的值
//用exchange函数改变这三个数的值。
//int main()
//{
//	void exchange(int* x, int* y, int* z);
//	int a, b, c;
//	printf("please enter three integer number:\n");
//	scanf("%d,%d,%d", &a, &b, &c);
//	int* A = &a, * B = &b, * C = &c;
//	exchange(A, B, C);
//	printf("exchange%d,%d,%d\n", a, b, c);
//	return 0;
//}
//void exchange(int* x, int* y, int* z)
//{
//	void swap(int* m, int* n);
//	if (*x < *y)swap(x, y);//注意：这里函数参数是值的传递，不是地址（指针）的传递。
//	if (*x < *z)swap(x, z);
//	if (*y < *z)swap(y, z);
//}
//void swap(int* m, int* n)
//{
//	int temp;
//	temp = *m;
//	*m = *n;
//	*n = temp;
//}
// 练习two
//int main()
//{
//	void exchange(int* q1, int* q2, int* q3);
//	int a, b, c,* p1, * p2, * p3;
//	printf("please enter three number:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	p1 = &a; p2 = &b; p3 = &c;
//	exchange(p1, p2, p3);
//	printf("the order is:%d,%d,%d\n", a, b, c);
//	return 0;
//}
//void exchange(int* q1, int* q2, int* q3)
//{
//	void swap(int* pt1, int* pt2);
//	if (*q1 < *q2)swap(q1, q2);
//	if (*q1 < *q3)swap(q1, q3);
//	if (*q2 < *q3)swap(q2, q3);
//}
//void swap(int* pt1, int* pt2)
//{
//	int temp;
//	temp = *pt1;
//	*pt1 = *pt2;
//	*pt2 = temp;
//}
//练习three
//int main()
//{
//	void exchange(int* q1, int* q2, int* q3);
//	int a, b, c;
//	printf("please enter three integer number:");
//	scanf("%d,%d,%d", &a, &b, &c);
//	int* p1 = &a, * p2 = &b, * p3 = &c;
//	exchange(p1, p2, p3);
//	printf("the order is:%d,%d,%d", a, b, c);
//	return 0;
//}
//void exchange(int* q1, int* q2, int* q3)
//{
//	void swap(int* pt1, int* pt2);
//	if (*q1 < *q2)swap(q1 , q2);
//	if (*q1 < *q3)swap(q1, q3);
//	if (*q2 < *q3)swap(q2, q3);
//}
//void swap(int* pt1, int* pt2)
//{
//	int temp;
//	temp = *pt1;
//	*pt1 = *pt2;
//	*pt2 = temp;
//}
//通过指针引用数组
//int main()
//{
//	int a[5] = { 1,3,5,7,9 };
//	//int* p;
//	int* p = &a[1];
//	p = &a[1];
//	//p = a;
//	printf("%d", *p);
//	return 0;
//}
//如上语句分析
//1.引用数组元素可以用下标法，也可以用指针法，即通过指向数组元素的指针找到所需的元素。
//2.使用指针法能使目标程序质量更高（占内存少，运行速度快）
//3.程序中数组名不代表整个数组，只代表数组元素的首元素的地址，如上述“p=a”;d的作用是把a数组的首元素的地址
//赋值给指针变量p,而不是“把数组a各个元素的值赋值给p”。
//int main()
//{
//	int a[5] = { 1,3,5,7,9 };
//	int* p1 = &a[0];
//	int* p2 = &a[4];
//	//(p2 - p1) / 5;
//	//p1++;
//	//p2+=2;
//	//p = a;
//	/*printf("%d\n", *p2);
//	printf("%d", *(p1+3));
//	printf("\n");
//	printf("%d %d", *p1,*p2);*/
//	printf("%d", (p2 - p1) / 5);
//	return 0;
//}
//实际上，在编译时，对数组元素就是按照*（a+1）处理的，即按数组元素的首元素加上相对位移量得到要找的元素的地址
//然后找出该单元中的内容。
//有一个整型数组a,有十个元素，要求输出数组中全部元素。
//1.下标法
//int main()
//{
//	int a[10];
//	printf("please enter ten integer numbers:\n");
//	int i;
//	for(i=0;i<10;i++)
//	scanf("%d", &a[i]);
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//2.指针法（通过数组名计算数组元素地址，找出元素的值）
//int main()
//{
//	int a[10];
//	printf("please enter ten integer number:\n");
//	int i;
//	for (i = 0; i < 10; i++)//数组结合指针简直无敌，可以省去定义变量，指针变量，以及存放地址等步骤
//							//其实在定义数组的时候已经以某种形式把它定义出去了。
//		scanf("%d", &a[i]);//[]实际上是变址运算符，即将a[i]按a+i计算地址，然后找出此地址单元中的值。
//	//（int* p;
//	//p = a;）
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(a+i));
//	return 0;
//}
//指针法优化中...
//int main()
//{
//	int a[10], i;
//	printf("please enter ten integer number:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", (a+i));//a+i就等于&a[i],这里a+i有无括号都行。
//		for (i = 0; i < 10; i++)
//		printf("%d ", *(a + i));
//	return 0;
//}
////优化成功(^ * ^)
//3.用指针变量指向数组元素
//int main()
//{
//	int a[10];
//	int* p;
//	//int i;
//	printf("please enter ten integer number:\n");
//	//for(i=0;i<10;i++)
//	//scanf("%d", &a[i]);
//
//	for (p = a; p < a + 10; p++)//用指针变量表示当前元素的地址。
//		scanf("%d", p);//这一点就是以取地址变量时的本质表达。（注：可以用到涉及取地址的有关用法）
//
//	for (p = a; p < a + 10; p++)
//		printf("%d ", *p);
//	return 0;
//}
//通过指针变量输出整型数组a的10个元素。（验证对照组）
//int main()
//{
//	int* p, i, a[10];
//	p = a;
//	printf("enter ten integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	for (i = 0; i < 10; i++, p++)
//		printf("%d ", *p);
//	printf("\n");//上面的for语句等价于下面的两个for语句。
//	for (i = 0; i < 10; i++)
//	{
//		p++;
//		printf("%d ", *p);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *p++);
//	return 0;
//}
//更正中...
//int main()
//{
//	int i, a[10], * p = a;//这里有个小细节，就是先定义数组a,然后再引用数组名称。
//	printf("enter ten integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	p = a;
//	for (i = 0; i < 10; i++, p++)//第二个for和第三个for等价。
//		printf("%d ", *p);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *p++);
//	return 0;
//}
////优化成功(^ @ ^)
//用指针变量输出a的100个元素的地址。（这里为了方便理解，没有个数组元素赋具体的值，所以结果输出的是100个值的随机地址）
//int main()
//{
//	int a[100],i=0, * p = a;
//	while (p < a + 100)
//	{
//		printf("%d ", *p++);
//		i++;
//	}
//	
//	printf("数目为:%d", i);
//	return 0;
//}