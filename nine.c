#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	void sort(int arry[], int n);
//	int a[10], i;
//	printf("input array:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	sort(a, 10);
//	printf("output array:\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//void sort(int arry[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)//j=k+1或者j=i+i在理论上来说都成立，不过后者更不容易error。
//		{
//			k = j;
//			if (arry[j] < arry[k])
//			{
//				k = j;
//			}
//			t = arry[k];
//			arry[k] = arry[i];
//			arry[i] = t;
//		}
//	}
//}
//int main()
//{
//	void print(char* name[], int n);
//	void sort(char* name[], int n);
//	char* name[] = { "BASIC","Great Wall","Follow me","FORTRAN","Computer design" };
//	int n = 5;
//	sort(name, n);
//	print(name, 5);
//	return 0;
//}
//void sort(char* name[], int n)
//{
//	char* temp;
//	int i, j, k;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(name[k], name[j]) > 0)
//			{
//				k = j;
//			}
//			if (k != i)
//			{
//				temp = name[i];
//				name[i] = name[k];
//				name[k] = temp;
//			}
//		}
//	}
//}
//void print(char* name[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", name[i]);
//	}
//}
//第二次练习中...
//int main()
//{
//	void sort(char* name[], int n);
//	void print(char* name[], int n);
//	char* name[] = { "Love you","That girl","Express nana" };
//	int n = 3;
//	sort(name, 3);
//	print(name, 3);
//	return 0;
//}
//void sort(char* name[], int n)
//{
//	char* temp;
//	int i, j, k;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (strcmp(name[k], name[j]) > 0)
//			{
//				k = j;
//			}
//			if (k != i)
//			{
//				temp = name[i];
//				name[i] = name[k];
//				name[k] = temp;
//			}
//		}
//	}
//}
//void print(char* name[], int n)
//{
//	int i = 0;
//	char* p;
//	p = name[0];
//	while (i < n)
//	{
//		p = *(name + i++);
//		printf("%s\n", p);
//	}
//}
//练习成功(^ @ ^)
//指向指针数据的指针变量(即所谓的指向指针的指针变量)
//注：
//1.0第一个指向是利用指针本质性质人为定义的指针变量(方便输出)
//2.0第二个指向是对字符串输出是利用指针数组特有概念的本性表达。
//int main()
//{
//	char* name[] = { "BASIC","Great Wall","Follow me","FORTRAN","Computer design" };
//	char** p;
	//int i;
	//1.0的for循环
	/*for (i = 0; i < 5; i++)
	{
		p = name + i;
		printf("%s\n", *p);
	}*/
	//2.0的for循环
	//for (i = 0; i < 5;)
	//{
	//	p = *(name + i++);//这种表达也可以，如果你在这里不指向的话，下面就的输出*p
	//	printf("%s\n", p);
	//}
	//3.0的while循环
	/*int i = 0;//注意这里用while循环的话，在外面的提前定义号初始变量如:int i = 0;
	while (i < 5)
	{
		p = name + i++;
		printf("%s\n", *p);
	}*/
//	return 0;
//}
//指针数组的元素也可以不指向字符串，而指向整型数据或者实型数据。
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* num[5], i;
//	int** p;
//	p = num + 2;
//	for (i = 0; i < 5; i++)
//	{
//		num[i] = &a[i];
//		
//	}
//	printf("%d", *(*(num + 2)));//这种赋全值的方法改 一处的动全值的，较为繁琐。
//	printf("\n");
//	printf("%d", **p);//这种只需改变初始条件值，不需要改变输出时的表达式。
//	return 0;
//}
//nice!
// 修改了它的复杂赋值法，输出的形式。
//初始化单值循环的方式输出个值，进行两次循环即可，不需要在指针数组里面初始化。
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* num[5], i, j;
//	int** p;
//	p = num;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			num[j] = &a[i];
//		}
//		printf("%d ", **p);
//	}
//	return 0;
//}
//依次赋值法。
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* num[5] = { &a[0],&a[1], &a[2], &a[3], &a[4] };
//	int** p, i;
//	p = num;
//	for (i = 0; i < 5; i++,p++)
//	{
//		printf("%d ", **p);
//	}
//	return 0;
//}
//int main()
//{
//	int* p1, i;
//	p1 = (int*)malloc(5 * sizeof(int));//开辟动态内存区，将地址转换成int*型，然后放在p1中。
//									//malloc参数可以只写5，后面是为了使之更准确而补充的。
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", p1 + i);
//	}
//	check(p1);
//	return 0;
//}
//int check(int* p)
//{
//	int i;
//	printf("They are fail:");
//	for (i = 0; i < 5; i++)
//	{
//		if (p[i] < 60)printf("%d ", p[i]);
//	}
//}
//int main()
//{
//	struct Student
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[20];
//	}a = { 101010,"Li Ming",'M',"123 Beijing Road" };
//	printf("%d %s %c %s", a.num, a.name, a.sex, a.addr);
//	struct Student pass1= { "Li Ming",'M',"123 Beijing Road" };
//	printf("\n");
//	printf("%s", pass1);//引用结构体变量实质是引用所用的地址值。
//	return 0;
//}
//int main()
//{
//	struct Passage
//	{
//		long int num;
//		char name[20];
//		char sex;
//		char addr[20];
//	}a = { 101010,"Li Ming",'M',"123 Beijing Road" };
//	//struct Passage b = { .sex = 'm',.name = "kjhfgkj" };
//	//struct Passage b = { .name = "kjhfgkj"};
//	//printf("%c%s", b.sex,b.name);
//	//printf("%d %s %c %s", b.num, b.name, b.sex, b.addr);
//	//printf(" %d ", a.num);
//	//printf(" %d", number1.num=10101);
//	a.sex = 'm';
//	printf("%c", a.sex);
//	return 0;
//}
//结构体变量的初始化和引用
//int main()
//{
//	struct Student
//	{
//		int num;
//		char name[20];
//		float score;
//	}student1,student2;
//	scanf("%d%s%f", &student1.num, &student1.name, &student1.score);
//	scanf("%d%s%f", &student2.num, &student2.name, &student2.score);
//	printf("The higher score is:\n");
//	if (student1.score > student2.score)
//		printf("%d%s%6.2f", student1.num, student1.name, student1.score);
//	else if (student1.score < student2.score)
//		printf("%d%s%6.2f", student2.num, student2.name, student2.score);
//	else
//	{
//		printf("%d%s%6.2f", student1.num, student1.name, student1.score);
//		printf("%d%s%6.2f", student2.num, student2.name, student2.score);
//	}
//	return 0;
//}
//struct Person
//{
//	char name[20];
//	int score;
//}leader[3] = { "L",0,"Z",0,"S",0 };
//int main()
//{
//	int i, j;
//	char ldme[20];
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%s", ldme);
//		for (j = 0; j < 3; j++)
//			if (strcmp(ldme, leader[j].name) == 0)//请注意，if这是一条语句。
//			{
//				leader[j].score++;
//			}
//	}
//	printf("\nResult\n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("%5s:%d\n", leader[i].name, leader[i].score);
//	}
//	return 0;
//}
//struct Person
//{
//	char name[20];
//	int count;
//}leader[3] = { "li",0,"zhang",0,"sun",0 };
//int main()
//{
//	int i, j;
//	char lrne[20];
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%s", lrne);
//		for (j = 0; j < 3; j++)
//			if (strcmp(lrne, leader[j].name) == 0)leader[j].count++;
//	}
//	printf("\nResult\n");
//	for (i = 0; i < 3; i++)
//		printf("%5s%d\n", leader[i].name, leader[i].count);
//	return 0;
//}
//使用结构体数组。
//struct Student
//{
//	int num;
//	float score;
//	char name[20];
//};
//int main()
//{
//	struct Student stu[5] = { 1,13,"q",2,14,"w",3,15,"e",4,16,"r",5,17,"t" };
//	struct Student temp;
//	const int n = 30;
//	 int i, j, k;
//	printf("The order is:\n");
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//			if (stu[j].score > stu[k].score)
//				k = j;
//		temp = stu[k];
//		stu[k] = stu[i];
//		stu[i] = temp;//这里可以整体对换，但是不可以整体打印(使用结构体【类型】数组的好处)。
//	}
//	for (i = 0; i < n; i++)
//		printf("%6d%6.2f%8s\n", stu[i].num, stu[i].score, stu[i].name);
//	return 0;
//}
