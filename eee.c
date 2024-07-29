#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000;
#include <stdio.h>

//1.字面常量
//3.14
// 20；
// 2.const修饰的常变量
//int main() {
//	const int num = 20;
//	//num = 30;
//	printf("%d", num);
//	int arr[10] = { 0,1,2,3,4 };
//	//int i = 10;
//	//int arr[n] = { 0 };
//	printf("%d", arr[0]);
//	return 0;
//}
//3define定义的标识符常量
//int main() {
//	int c = MAX;
//	printf("%d\n", c);
//	return 0;
//}
//4.枚举常量
//int main()
//{
//	enum Sex {
//		MALE = 4,
//		FAMALE,
//		SECRET
//	};
//   enum	Sex a = MALE;
//   printf("%d\n", MALE);
//   printf("%d\n", FAMALE);
//   printf("%d\n", SECRET);
//
//	return 0;
//}
// ************************************************
//#include <string.h>
//int main()
//{	
//	char arr1[] = "fhjskdhfs";
//	char arr2[] = { 'a','b','c','\0'};
//	//int len =strlen("abc");
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//printf("%d\n", len);
//	
//	return 0;
//}
//int main()
//{	
//	char arr[] = "code/test1/test.c";
//	printf("%s", arr);
//	return;
//}
//int main()
//{	
//	
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("生活中的你是否遇到过困难:>\n");
//	printf("遇到过(0/1)?>");
//	scanf("%d", &input);
//	{
//		if (input == 1)
//
//		printf( "遇到过");
//	else
//		printf( "没遇到过");
//	}
//	
//	return 0;
//}
//***************************************
//int main()
//{	
//	int study = 0;
//	
//	while (study < 3000)
//	{
//		printf("不吃饭%d\n",study);
//		study++;
//	}
//	if (study == 3000)
//	{
//		printf("吃饭\n");
//	}
//	return 0;
//}
//***********************************
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{	
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d",&num1, &num2);
//	//int sum = num1 + num2;
//	int sum =Add (num1,num2);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//***************************************
//数组是用下标访问的，下标是从0开始的
//int main()
//{
//	int arr[3] = {1,2,3};
//	//char ch[5] = {'a','b','c'};
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%d",arr[i]);
//
//		i++;
//	}
//	return 0;
//
//}
//int main()
//{	
//	int i = 0;
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
// arr后面的[]是下标引用操作符，它不是上面数组表示的那个[],尽管连个符号相同，但是表示的含义却不同。
// *****************************************************
//	}
//		printf("\n");
//
//	return 0;
//}
//int main()
//{	
//	int a = 0;
//	printf("%d\n", ! a);
//	
//	return 0;
//	
//}
//********************************
//int main()
//{	
//	//sizeof是一个操作符，它可以计算类型和变量的大小
//	//sizeof后面的括号可以省略说明sizeof是一个操作符，不是函数。
//	int a = 10;
//	printf("%d\n",sizeof(int));
//	printf("%d\n", sizeof(a));
//	return 0;
//}
//********************************
//C语言计算数组元素大小及个数
//int main()
//{	
//	int arr[10] = {0};
//	//计算的是数组的总大小，单位是字节
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		printf("%d\n", sz);
//	return 0;
//}
//************************************************************************
// ~按二进制位取反，把所有二进制中的数字，1变成0，0变成1.
//整数a 0 
//二进制位
//00000000000000000000000000000000
//11111111111111111111111111111111 --> ~a
//整数在内存中存取的是补码~
//一个整数的二进制表示有三种：
//原码
//反码
//补码
// 负数的计算方式（对于正整数来说它的原码，补码，反码相同）
//example:-1
// 10000000000000000000000000000001 (-1的原码)
// //第一个1是符号位，符号位不变，剩下的给它取反
// 最高位是1，则表示负数
// 11111111111111111111111111111110（-1的反码）
//反码的二进制数加以就变成补码
// 11111111111111111111111111111111 （-1的补码）
//三者关系是：原码取反得到反码，反码+1得到补码
//int main()
//{	
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
//*******************************************************
//int main()
//{	
//	//int a = 10;
//	//int b = ++a;// 前置++，先++，后使用
//	//printf("%d\n", b);
//	//printf("%d\n", a);
//	int a = 10;
//	int b = a++;// 前置++，先使用，后++
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}
//***********************************
//int main()
//{	
//	/*int a = 6;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);*/
//
//	int a = 4;
//	int b = 7;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//条件操作符（三目操作符）exp1 ? exp2 : exp3
//	// exp1成立，计算exp2，整个表达式的结果是：exp2的结果。
//	// exp1不成立，计算exp3,整个表达式的结果是：exp3的结果。
//	//max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{	
//	int a = 0;
//	int b = 3;
//	int c = 2;
//	//逗号表达式是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	int d = (a = b + 2, c = a - 1, b = c + 1);
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{	
//	//函数调用操作符（）
//	//调用函数的时候，函数名后面的（）就是函数调用操作符
//	printf("abc\n");
//	printf("%d", 100);
//	return 0;
//}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//关键字：
//1. C语言提供的关键字，不能自己创建关键字
//2. 变量名不能是关键字
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//关键字：
//（define，include）不是关键字，它们是预处理指令
//int main()
//{	
//	int a = 3;//自动创建，自动销毁的 -自动变量
//	// auto省略掉了，针对局部变量，在新的C语言语法中有新的用法。
//	//extern 是用来申明外部符号的
//	//register 寄存器关键字
//	//意义：大量且频繁被使用的数据，想存放在寄存器中，以便提升效率。
//	register int num = 100;//建议num的值存放在寄存器中
//	return 0;
//}
//typedef类型定义，可以理解为类型重命名/类型重定义。（也就是可以使类型变得简单去使用它，即别名）
//typedef unsigned int u_int;
//int main()
//{	
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}
//static -静态的
// 1.static修饰局部变量
// 2.static修饰全局变量
// 3.static修饰函数
//
//
//void test()
//{
//	//a被static修饰后，出了局部范围后，a不销毁。（注：通常来说局部变量被创建后，出了它所属的范围后是会自动销毁的）
//	//此段代码没有被static修饰时，打印结果是10个2.
//	//static修饰局部变量，改变了局部变量的生命周期。（本质上改变了变量的存储类型）
//	//example：栈区-->堆区-->静态区
//	//栈区：局部变量、函数的参数
//	//堆区：动态内存的分配
//	//静态区：全局变量、static修饰的静态变量
//	//！！！！！！！！！！！！！！！！！！！！！！！！
//	//static修饰全局变量，使得这个全局变量只能在自己所在的源文件（.c）内部可以使用，其它源文件不能使用！
//	// 
//	// 全局变量在其它源文件内部可以被使用，是用为全局变量具有外部链接属性，但是被static修饰之后，就变成了内部链接属性，其它
//	// 源文件就不能链接到这个静态的全局变量了。
//	//！！！！！！！！！！！！！！！！！！！！！！！！
//	//static修饰函数，使得函数只能在自己所在的源文件内部使用，不能在其它源文件内部使用
//	//本质上：static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样！）
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{	
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	
//	return 0;
//}
//define定义常量和宏
//#define MAX 1000
//int main()
//{	
//	printf("%d\n", MAX);
//	return 0;
//}
//#define ADD(X , Y) ((X) + (Y))
//int main()
//{	
//	printf("%d\n", 4*ADD(2 , 3));
//	return 0;
//}
//int main()
//{	
//	int a = 10;//a在内存空间要分配 -4 空间的字节
//	printf("%p\n", &a);//%p专门用来打印地址的
//	//在这里分配的空间地址也是一个值，是值就得给它存放到一个空间（变量）里面
//	int * pa = &a;//pa用来存放地址的，在C语言中pa就叫指针变量（指针变量是用来存放地址的）
//	// * 说明pa是指针变量
//	// int 说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char * pc = &ch;
//	printf("%p\n", &ch);
//	return 0;
//}
//**************************************************************************
//int main()
//{	
//	int a = 5;
//	int* pa = &a;
//	*pa = 20;//*解引操作符（单目操作符）， *pa就是通过pa里面的地址找到a
//	//这样可以不通过a来直接来改变a的值，而是通过（“根”）地址间接改变a的值，而这种过程不是在代码层面直接可以
//	//观察到的，而是在程序驱动层面来改变值的
//	//*pa的时候就是把指针指向a的值改变为20
//	//指针变量是用来存放地址的，存放的是别的数据的地址，指针也有类型
//	//所以指针就是地址，使用指针变量存地址，就是使用地址，就是指向地址，所以指针就是地址
//	printf("%d\n", a);
//	return 0;
//}
//指针变量的大小
//（算指针变量大小的时候，算它的类型也一样）
//int main()
//{	
//	//指针是用来存放地址的，指针需要多大空间，取决于地址的存储需要多大空间
//	//32位 32bit -4byte
//	//64位 64bit -8byte
//	//结论：指针大小在32位平台是4个字节，64位平台是8个字节
//	printf("%d\n", sizeof(char *));
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(long *));
//	printf("%d\n", sizeof(long long *));
//	printf("%d\n", sizeof(float *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
// *******************************************************
//结构体可以让C语言创建新的类型出来
//创建一个学生类型
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
////创建一本书的类型
//struct Book
//{	
//	char book_name[20];//成员变量
//	float price;
//	int page;
//};
//int main()
//{	
//	struct Book b = {"三体",35,450};//结构体的创建和初始化  struct Book是b的类型，相当于int,char这是人为定义的一个变量类型
//	printf("1: %s %f %d \n",b.book_name ,b.price ,b.page);//结构体变量.成员变量
//	 struct Book *ps=&b;
//	 printf("2: %s %f %d \n",(*ps).book_name,(*ps).price,(*ps).page);
//	 printf("3: %s %f %d", ps->book_name, ps->price, ps->page);//结构体指针->成员变量名
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{	
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	 int m= Max(a,b);
//	 printf("%d\n", m);
//	return 0;
//}注：函数不能嵌套定义，但是可以互相调用，每个函数都是独立的个体。
