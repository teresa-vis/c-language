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
//����ָ�������Ż�.
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
//����ָ������Ľ�һ���Ż���
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
// ����С˳������������������ú�������������ָ�����͵�������Ϊ�����Ĳ�����
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
//���Խ�һ���Ż���...
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
//(void swap(int x ,int y)//��·��ͨ
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
//	printf("���뼸����:");
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
//C������ʵ�α������βα���֮������ݴ����ǵ����"ֵ����"��ʽ����ָ������������Ĳ�����ͬ��Ҫ��ѭ��һԭ�򣬲�����ͨ��ִ�е��ú������ı�
//ʵ��ָ�������ֵ�����ǿ��Ըı�ʵ��ָ�������ָ������ֵ��

//������������a,b,cҪ���ɴ�С��˳���������swap������������������ֵ
//��exchange�����ı�����������ֵ��
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
//	if (*x < *y)swap(x, y);//ע�⣺���ﺯ��������ֵ�Ĵ��ݣ����ǵ�ַ��ָ�룩�Ĵ��ݡ�
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
// ��ϰtwo
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
//��ϰthree
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