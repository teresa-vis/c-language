#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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


