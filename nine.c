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
//		for (j = i + 1; j < n; j++)//j=k+1����j=i+i����������˵���������������߸�������error��
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
//�ڶ�����ϰ��...
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
//��ϰ�ɹ�(^ @ ^)
//ָ��ָ�����ݵ�ָ�����(����ν��ָ��ָ���ָ�����)
//ע��
//1.0��һ��ָ��������ָ�뱾��������Ϊ�����ָ�����(�������)
//2.0�ڶ���ָ���Ƕ��ַ������������ָ���������и���ı��Ա�
//int main()
//{
//	char* name[] = { "BASIC","Great Wall","Follow me","FORTRAN","Computer design" };
//	char** p;
	//int i;
	//1.0��forѭ��
	/*for (i = 0; i < 5; i++)
	{
		p = name + i;
		printf("%s\n", *p);
	}*/
	//2.0��forѭ��
	//for (i = 0; i < 5;)
	//{
	//	p = *(name + i++);//���ֱ��Ҳ���ԣ�����������ﲻָ��Ļ�������͵����*p
	//	printf("%s\n", p);
	//}
	//3.0��whileѭ��
	/*int i = 0;//ע��������whileѭ���Ļ������������ǰ����ų�ʼ������:int i = 0;
	while (i < 5)
	{
		p = name + i++;
		printf("%s\n", *p);
	}*/
//	return 0;
//}
//ָ�������Ԫ��Ҳ���Բ�ָ���ַ�������ָ���������ݻ���ʵ�����ݡ�
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
//	printf("%d", *(*(num + 2)));//���ָ�ȫֵ�ķ����� һ���Ķ�ȫֵ�ģ���Ϊ������
//	printf("\n");
//	printf("%d", **p);//����ֻ��ı��ʼ����ֵ������Ҫ�ı����ʱ�ı��ʽ��
//	return 0;
//}
//nice!
// �޸������ĸ��Ӹ�ֵ�����������ʽ��
//��ʼ����ֵѭ���ķ�ʽ�����ֵ����������ѭ�����ɣ�����Ҫ��ָ�����������ʼ����
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
//���θ�ֵ����
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
//	p1 = (int*)malloc(5 * sizeof(int));//���ٶ�̬�ڴ���������ַת����int*�ͣ�Ȼ�����p1�С�
//									//malloc��������ֻд5��������Ϊ��ʹ֮��׼ȷ������ġ�
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
//	printf("%s", pass1);//���ýṹ�����ʵ�����������õĵ�ֵַ��
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
//�ṹ������ĳ�ʼ��������
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
//			if (strcmp(ldme, leader[j].name) == 0)//��ע�⣬if����һ����䡣
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
//ʹ�ýṹ�����顣
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
//		stu[i] = temp;//�����������Ի������ǲ����������ӡ(ʹ�ýṹ�塾���͡�����ĺô�)��
//	}
//	for (i = 0; i < n; i++)
//		printf("%6d%6.2f%8s\n", stu[i].num, stu[i].score, stu[i].name);
//	return 0;
//}
