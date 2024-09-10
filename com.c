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
//将数组a中n个整数按相反的顺序存放。
//int main()
//{
//	void inv(int x[], int n);
//	int i,a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("the original array:\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	inv(a, 10);
//	printf("the array has been inverted:\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//void inv(int x[], int n)
//{
//	int temp, i, j, m = (n - 1) / 2;
//	for (i = 0; i <= m; i++)
//	{
//		j = n - 1 - i;
//		temp = x[i];
//		x[i] = x[j];
//		x[j] = temp;
//	}
//	return;
//}
//练习二（将形参改为指针变量）
//int main()
//{
//	void inv(int* x, int n);
//	int i, a[5] = { 1,2,3,4,5 };
//	printf("初始值为:\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	inv(a, 5);
//	printf("最终值为:\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//void inv(int* x, int n)
//{
//	int temp, * p, * i, * j, m = (n - 1) / 2;
//	i = x;
//	j = x + n - 1;
//	p = x + m;
//	for (; i <= p; i++, j--)
//	{
//		temp = *i;
//		*i = *j;
//		*j = temp;
//	}
//	return;
//}
//用指针方法对10个整数按大小顺序输出。
//int main()
//{
//	void sort(int* x, int n);
//	int a[10], i, * p = a;
//	printf("please enter ten integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);//注意scanf里面"%d"的空格
//	p = a;
//	sort(p, 10);
//	for (p = a, i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int* x, int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (*(x + j) > *(x + k))k = j;
//		if (k != i)
//		{
//			t = *(x + i);
//			*(x + i) = *(x + k);
//			*(x + k) = t;
//		}
//	}
//}
//int main()
//{
//	void sort(int x[], int n);
//	int i, * p, a[10];
//	p = a;
//	printf("please enter 10 integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	p = a;
//	sort(p, 10);
//	for (p = a, i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	printf("\n");
//	return 0;
//}
//void sort(int x[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (x[j] > x[k])k = j;
//		if (k != i)
//		{
//			t = x[i];
//			x[i] = x[k];
//			x[k] = t;
//		}
//	}
//}
//通过指针引用字符串。
//int main()
//{
//	int a;
//	char words[] = "I love China!";
//	a = words[7];
//	printf("%s %c\n", words,*(words+7));
//	return 0;
//}
//通过字符指针变量输出一个字符串。
//int main()
//{
//	char words[14] = "I love China!";//按流程来是这么表达的，但是对于字符串引用指针变量这一概念内容在
//										//细节表达地方可能会略有不同，但本质是不变的（地址,指针）
//	char* string;
//	string = &words;
//	printf("%s", string);
//	return 0;
//}
//int main()
//{
//	char* string = "I love China!";
//	printf("%s", string);
//	return 0;
//}
//将字符串a复制到b中，然后输出，用地址法算出个元素的值。
//int main()
//{
//	char a[] = "I love China!", b[20];
//	int i;
//	//for (i = 0; *(a + i) != '\0'; i++)//注:这里a[i]<==>*(a+i)的形式，这是用地址法的关键。
//	for (i = 0; a[i] != '\0'; i++)
//		//*(b + i) = *(a + i);
//		b[i] = a[i];
//	//*(b + i) = '\0';
//	printf("string a is:%s\n", a);
//	printf("string b is:");
//	*(b + i) = '\0';//这一句是赋值字符串的终止语句，如果没有该语句，后面会随机开辟地址生成乱码。
//						//只要该句放在循环赋值的前面就没问题。
//	for (i = 0; b[i] != '\0'; i++)
//		printf("%c", b[i]);
//	return 0;
//}//输出前是字符串，但是在复制输出的过程中，是以字符输出的，但也可以用字符串的方式输出，如下：
//int main()
//{
//	char a[] = "I am a student!", b[20];
//	int i;
//	for (i = 0; *(a + i) != '\0'; i++)
//		*(b + i) = *(a + i);
//	*(b + i) = '\0';
//	printf("string a is:%s\n",a);
//	printf("\n");
//	printf("string a is:%s\n",b);
//	return 0;
//}//也可以用以下表达。
//用指针变量来处理字符串复制问题。
//int main()
//{
//	char a[] = "I am a boy", b[20], * p1, * p2;
//	p1 = a; p2 = b;
//	for (; *p1 != '\0'; p1++, p2++)
//		*p2 = *p1;
//	*p2 = '\0';
//	printf("%s\n", a);
//	printf("%s", b);
//	return 0;
//}
//用另一种for循环来表达
//int main()
//{
//	char a[] = "I love you", b[20], * p1, * p2;
//	p1 = a, p2 = b;
//	for (; *p1 != '\0'; p1++)
//	{
//		*p2 = *p1;
//		p2++;
//	}
//	*p2 = '\0';
//	printf("%s", a);
//	printf("\n");
//	printf("%s", b);
//	return 0;
//}
//字符指针做函数的参数。
//用字符数组名作为函数的参数
//int main()
//{
//	void copy_string(char from[], char to[]);
//	char a[] = "I am a teacher.";
//	char b[] = "You are a student.";
//	printf("string a=%s\nstring b=%s\n", a, b);
//	printf("\ncopy string a to string b:\n");
//	copy_string(a, b);
//	printf("string a=%s\nstring b=%s\n", a, b);
//	return 0;
//}
//void copy_string(char from[], char to[])
//{
//	int i = 0;
//	while (from[i] != '\0')
//	{
//		to[i] = from[i];
//		i++;
//	}
//	to[i] = '\0';
//}
//用字符型指针变量作参数。
//int main()
//{
//	void copy_str(char* p1, char* p2);
//	char a[] = "I love you";
//	char b[] = "You love me";
//	printf("%s\n%s", a, b);
//	char* p1, * p2;
//	p1 = a, p2 = b;
//	copy_str(p1,p2);
//	printf("\n");
//	printf("%s\n%s", p1, p2);
//	return 0;
//}
//void copy_str(char* p1, char* p2)
//{
//	int i = 0;//这里设置i作为变量有一个好处
//				//一方面可以作为两个字符元素的未知变量，另一方面可以为第二个变量累加。
//	while (p1[i] != '\0')
//	{
//		p2[i] = p1[i];
//		i++;
//		p2[i] = '\0';
//	}
//}
//用字符型指针变量作形参和实参
// 1.0
//int main()
//{
//	void copy_str(char* p1, char* p2);
//	char *a = "I love you";
//	char b[] = "You love me";
//	printf("%s\n%s", a, b);
//	char* p2 = b;
//	printf("\n");
//	copy_str(a, p2);
//	printf("%s\n%s", a, b);
//	return 0;
//}
//void copy_str(char* p1, char* p2)
//{
//	for (; *p1 != '\0'; p1++, p2++)
//	{
//		*p2 = *p1;
//	}
//	*p2 = '\0';
//}
//2.0
//int main()
//{
//	void copy_str(char* p1, char* p2);
//	char a[] = "I love you";
//	char b[] = "You love me";
//	printf("%s\n%s", a, b);
//	char* p1 = a, * p2 = b;
//	printf("\n");
//	copy_str(p1, p2);
//	printf("%s\n%s", a, b);
//	return 0;
//}
//void copy_str(char* p1, char* p2)
//{
	/*for (; *p1 != '\0'; p1++, p2++)
	{
		*p2 = *p1;
	}
	*p2 = '\0';*/
	//对循环体进优化1.0
	/*while ((*p2 = *p1) != '\0')
	{
		*p1++, p2++;
	}*/
	//对循环体进行优化2.0
	/*while ((*p2++ = *p1++) != '\0');*/
	//对循环体进行优化3.0
	/*while (*p2 != '\0')
	{
		*p2++ = *p1++;
	}*/
	//对循环体进行优化4.0
	// （ASCII码）逻辑判断转化
	//while (*p1)//最终推理为真
	//{
	//	*p2++ = *p1++;
	//}
	//对循环体进行优化5.0
	//while (*p2++ = *p1++);//循环条件表达式，最终判断为是否为真或者假。//为真的话循环条件语句可以省略，上面5.0即是.
	//对循环体进行优化6.0(除了用while语句外还可以用for语句)
	//for (; (*p2++ = *p1++) != 0;);//for语句循环判断条件似乎不能用'/0'作为判断
	//对循环体进行优化7.0
	//for (; *p2++ = *p1++;);
	//对循环体进行优化7.0
//}
//int main()
//{
//	char* a = "I love China!";
//	printf("%s", a + 7);//以string类型，即字符串形式输出为：China.
//	printf("\n");
//	printf("%c", *(a + 7));//(指针变量法)以char类型，即字符形式输出为：C.
//	printf("\n");//可以单用下标
//	printf("%c", a[7]);//(也可以定义指针变量加下标)
//	return 0;
//}
//用指针变量指向一个格式字符串，可以用它来代替printf函数中的格式字符串
//它相当于printf("a=%d,b=%f\n",a,b);
//因此只要改变指针变量format所指向的字符串，就可以改变输入输出的格式。
//这种printf函数称为可改变格式输出函数。
//int main()
//{
//	int a = 3;
//	float b = 3;
//	char* format;
//	format = "a=%d,b=%f\n";
//	printf(format, a, b);
//	return 0;
//}
//也可以写为：
//int main()
//{
//	//char* format = "%d,%f";
//	int a = 1;
//	float b = 1;
//	//printf(format, a, b);
////或者还可以另一种方式书写
//	char format[] = "%d,%f";
//	printf(format, a, b);
//	return 0;
//}
//指向函数的指针变量

//int main()
//{
//	int max(int x, int y);
//	int min(int x, int y);
//	static int (*p)(int, int);
//	int a, b, c, n;
//	printf("please enter a and b:");
//	scanf("%d,%d", &a, &b);
//	printf("please choose 1 or 2:");
//	scanf("%d", &n);
//	if (n == 1)
//	{
//		p = max;
//	}
//	else if (n == 2)
//	{
//		p = min;
//	}
//	printf("a=%d,b=%d\n", a, b);
//	c = (*p)(a, b);
//	if (n == 1)
//	{
//		printf("max=%d", c);
//	}
//	else {
//		printf("min=%d", c);
//	}
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	return(x > y ? x : y);
//}
//int min(int x, int y)
//{
//	int z;
//	return(x < y ? x : y);
//}
//int (*p)(int, int);
//int main()
//{
//	int max(int , int );
//	int min(int x, int y);
//	int a, b, c, n;
//	printf("please enter a and b:");
//	scanf("%d ,%d", &a, &b);
//	printf("please choose 1 or 2:");
//	scanf("%d", &n);
//	if (n == 1)p = max;
//	else if (n == 2)p = min;
//	c = (*p)(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	if (n == 1)printf("max=%d\n", c);
//	else printf("min=%d\n", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)z = x;
//	else z = y;
//	return z;
//}
//int min(int x, int y)
//{
//	int z;
//	if (x < y)z = x;
//	else z = y;
//	return z;
//}
//int main()
//{	
//	int max(int x, int y);
//	int (*p)(int, int);
//	int a, b, c;
//	p = max;
//	printf("输入a，b:");
//	scanf("%d%d", &a, &b);
//	c = (*p)(a, b);
//	printf("%d", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	if (x > y)z = x;
//	else z = y;
//	return z;
//}
//用指向函数的指针作函数参数
//int main()
//{
//	int fun(int x, int y, int(*p)(int, int));
//	int max(int x, int y);
//	int min(int x, int y);
//	int sum(int x, int y);
//	int a = 34, b = -21, n;
//	printf("please choose 1,2 or 3:");
//	scanf("%d", &n);
//	if (n == 1)fun(a, b, max);//4.0最后再返回到主调函数中fun去,此时fun的值为最终值。
//	else if (n == 2)fun(a, b, min);//这种定义似乎可以省去再次定义变量的麻烦来存放主调函数的值。
//	else if (n == 3)fun(a, b, sum);
//	return 0;
//}
//int fun(int x, int y, int(*p)(int, int))//1.0程序走到这里暂时不执行通用指针函数，仅仅是把a,b的值输入下去。
//{//通用指针函数就是指下面这三个自定义函数，只不过没有具体指定要取谁作为输出结果。
//	int result;
//	result = (*p)(x, y);//3.0比较后的值返回到这里
//	printf("%d\n", result);
//}
//int max(int x, int y)//2.0然后跳到这里进行数值比较
//{
//	int z;
//	printf("max=");
//	return(x > y ? x : y);
//}
//int min(int x, int y)
//{
//	int z;
//	printf("min=");
//	return(x < y ? x : y);
//}
//int sum(int x, int y)
//{
//	int z;
//	z = x + y;
//	printf("sum=");
//	return(z);
//}
//返回指针类型的函数
//int main()
//{
//	float score[][4] = { {60,70,80,90},{56,89,67,88},{34,78,90,66} };
//	float* search(float* pointer[4], int n);
//	float* p;
//	int i, k;
//	printf("enter the number of student:");
//	scanf("%d", &k);
//	printf("The scores of No.%d are:\n",k);
//	p = search(score, k);
//	for (i = 0; i < 4; i++)
//		printf("%f\t", *(p + i));
//	return 0;
//}
//float* search(float(* pointer)[4], int n)
//{
//	float* pt;
//	pt = *(pointer + n);
//	return pt;
//}
//练习一
//int main()
//{
//	float* find(float* (point)[4], int n);
//	float score[][4] = { {24,23,25,26},{34,35,36,37},{40,41,42,43} };
//	float* p;
//	int i, k;
//	printf("输入学号:");
//	scanf("%d", &k);
//	printf("%d", k);
//	p = find(score, k);
//	for (i = 0; i < 4; i++)
//		printf("%f", *(p + i));
//	return 0;
//}
//float* find(float(*point)[4], int n) 
//{
//	float* pt;
//	pt = *(point + n);
//	return pt;
//}
//指向多维数组元素的指针变量
//指向数组元素的指针变量
//int main()
//{
//	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,1,5,2} };
//	int* p;
//	for (p = a[0]; p < a[0] + 12; p++)
//	{
//		if ((p - a[0]) % 4 == 0)
//		{
//			printf("\n");
//		}
//		printf("%d ", *p);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int* p;
//	for (p = a[0][0]; p < a[0][0] + 2; p++)
//		printf("%d", a[2][2]);
//	return 0;
//}
//int main()
//{
//	int a[][3] = { {9,8,7},{6,5,4},{3,2,1} };
//	int(*p)[3], i, j;//指针变量p三个整型元素的一维数组
//	p = a;//p指向二维数组的0行
//	printf("输入两个数:");
//	scanf("%d,%d", &i, &j);
//	printf("%d\n", *(*(p + i) + j));
//	printf("%d", a[i][j]);
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,3,5,7 };
//	int(*p)[4];
//	p = &a;
//	printf("%d", (*p)[3]);//注意其不能写为"p=a;",因为这样写表示p的值是&a[0],指向首元素a[0].(首元素地址相同，但他们的基类型不同)
//	printf("\n");//"p=&a;"表示p指向一维数组的行(指向行的意义才表达正确)，(*p)[3]是p所指向的（行）号中序号为3的元素。
//	printf("%d", *(a+3));
//	printf("\n");
//	printf("%d", a[3]);
//	return 0;
//}
//平均值有点问题。
//int main()
//{
//	void average(float* p, int n);
//	void search(float(*p)[4], int n);
//	float score[3][4] = { {65,67,70,60},{80,87,90,81},{90,99,100,98} };
//	average(*score, 12);
//	search(score, 2);
//	return 0;
//}
//void average(float* p, int n)
//{
//	float* pt;
//	float sum = 0, aver;
//	pt = p + n - 1;
//	for (; p < pt; p++)
//	{
//		sum = sum + (*p);
//	}
//	aver = sum / n;
//	printf("aver=%5.2f\n", aver);
//}
//void search(float(*p)[4], int n)
//{
//	int i;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%5.2f\n", *(*(p + n) + i));
//	}
//}
//int main()
//{
//	void search(float(*p)[4], int n);
//	float score[3][4]= { {65,67,70,60},{58,87,90,81},{90,99,100,98} };
//	search(score, 3);
//	return 0;
//}
//void search(float(*p)[4], int n)
//{
//	int i, j, flag;
//	for (j = 0; j < n; j++)
//	{
//		flag = 0;
//		for (i = 0; i < 4; i++)
//			if (*(*(p + j) + i) < 60)flag = 1;
//		if (flag == 1)
//		{
//			printf("%d\n", j);
//			for (i = 0; i < 4; i++)
//				printf("%5.1f", *(*(p + j) + i));
//		}
//	}
//}
//int main()
//{
//	float* search(float(*pt)[4], int n);
//	float score[][4] = { {75,85,94,64},{56,68,79,62},{88,67,93,81} };
//	float* p;
//	int i, k;
//	printf("输入数字:");
//	scanf("%d", &k);
//	//printf("%d", k);
//	p = search(score, k);
//	for (i = 0; i < 4; i++)
//		printf("%5.2f\t", *(p + i));
//	return 0;
//}
//float* search(float(*pt)[4], int n)
//{
//	float* m;
//	m = *(pt + n);
//	return m;
//}
//int main()
//{
//	float* search(float(*point)[4]);
//	float score[][4] = { {74,85,59,71},{78,55,93,88},{80,77,66,87} };
//	int i, j;
//	float* p;
//	for (i = 0; i < 3; i++)
//	{
//		p = search(score + i);
//		if (p == *(score + i))
//		{
//			printf("No.%d score:", i);
//			for (j = 0; j < 4; j++)
//				printf("%5.2f ", *(p + j));
//			printf("\n");
//		}
//	}
//	return 0;
//}
//float *search(float(*point)[4])
//{
//	int i = 0;
//	float* pt;
//	pt = NULL;
//	for (; i < 4; i++)
//	{
//		if (*(*point + i) < 60)
//			pt = *point;
//	}
//	return pt;
//}
//返回指针值的函数
//int main()
//{
//	float* search(float(*pointer)[4]);
//	float score[][4]= { {74,85,59,71},{78,55,93,88},{80,77,66,87} };
//	int i, j;
//	float* p;
//	for (i = 0; i < 3; i++)
//	{
//		p = search(score + i);
//		if (p == *(score + i))
//		{
//			printf("No.%d score:", i);
//			for (j = 0; j < 4; j++)
//			{
//				printf("%5.2f ", *(p + j));
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//float *search(float(*pointer)[4])
//{
//	int i = 0;
//	float* pt;
//	pt = NULL;
//	for (; i < 4; i++)
//	{
//		if (*(*pointer + i) < 60)
//		{
//			pt = *pointer;
//		}
//	}
//	return pt;
//}
//再练习一次
//现在一赋分制进行运算，满分30分，低于15分，则需要进一步加强学习。
//int main()
//{
//	int *search(int(*pointer)[3]);
//	int score[][3] = { {12,16,18},{21,25,19},{17,22,14} };
//	int* p, i, j;
//	for (i = 0; i < 3; i++)//定义的是是3行3列的二维数组，所以要进行循环三次行依次查找，然后逐个打印。
//	{
//		p = search(score + i);//然后返回给主函数，进行该行数据的打印。
//		if (p == *(score + i))//return后进行地址匹配，匹配成功后依次循环打印输出。
//		{
//			printf("No.%d score:", i);
//			for (j = 0; j < 3; j++)
//			
//				printf("%d ", *(p + j));
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int *search(int(*pointer)[3])//注意这里的函数定义为指针型函数，因为它的返回值是指针值，要取其低分的地址
//							
//{
//	int i=0,*pt;
//	pt = NULL;//如若满足条件返回空值，不满足的话进行下面的条件查找，若小于该条件的话，将该值的地址进行return即可。
//	for (; i < 3; i++)
//	{
//		if (*(*pointer + i) < 15)
//		
//			pt = *pointer;
//	}
//	return pt;
//}