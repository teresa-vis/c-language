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
//ͨ��ָ����������
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
//����������
//1.��������Ԫ�ؿ������±귨��Ҳ������ָ�뷨����ͨ��ָ������Ԫ�ص�ָ���ҵ������Ԫ�ء�
//2.ʹ��ָ�뷨��ʹĿ������������ߣ�ռ�ڴ��٣������ٶȿ죩
//3.�������������������������飬ֻ��������Ԫ�ص���Ԫ�صĵ�ַ����������p=a��;d�������ǰ�a�������Ԫ�صĵ�ַ
//��ֵ��ָ�����p,�����ǡ�������a����Ԫ�ص�ֵ��ֵ��p����
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
//ʵ���ϣ��ڱ���ʱ��������Ԫ�ؾ��ǰ���*��a+1������ģ���������Ԫ�ص���Ԫ�ؼ������λ�����õ�Ҫ�ҵ�Ԫ�صĵ�ַ
//Ȼ���ҳ��õ�Ԫ�е����ݡ�
//��һ����������a,��ʮ��Ԫ�أ�Ҫ�����������ȫ��Ԫ�ء�
//1.�±귨
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
//2.ָ�뷨��ͨ����������������Ԫ�ص�ַ���ҳ�Ԫ�ص�ֵ��
//int main()
//{
//	int a[10];
//	printf("please enter ten integer number:\n");
//	int i;
//	for (i = 0; i < 10; i++)//������ָ���ֱ�޵У�����ʡȥ���������ָ��������Լ���ŵ�ַ�Ȳ���
//							//��ʵ�ڶ��������ʱ���Ѿ���ĳ����ʽ���������ȥ�ˡ�
//		scanf("%d", &a[i]);//[]ʵ�����Ǳ�ַ�����������a[i]��a+i�����ַ��Ȼ���ҳ��˵�ַ��Ԫ�е�ֵ��
//	//��int* p;
//	//p = a;��
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(a+i));
//	return 0;
//}
//ָ�뷨�Ż���...
//int main()
//{
//	int a[10], i;
//	printf("please enter ten integer number:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", (a+i));//a+i�͵���&a[i],����a+i�������Ŷ��С�
//		for (i = 0; i < 10; i++)
//		printf("%d ", *(a + i));
//	return 0;
//}
////�Ż��ɹ�(^ * ^)
//3.��ָ�����ָ������Ԫ��
//int main()
//{
//	int a[10];
//	int* p;
//	//int i;
//	printf("please enter ten integer number:\n");
//	//for(i=0;i<10;i++)
//	//scanf("%d", &a[i]);
//
//	for (p = a; p < a + 10; p++)//��ָ�������ʾ��ǰԪ�صĵ�ַ��
//		scanf("%d", p);//��һ�������ȡ��ַ����ʱ�ı��ʱ���ע�������õ��漰ȡ��ַ���й��÷���
//
//	for (p = a; p < a + 10; p++)
//		printf("%d ", *p);
//	return 0;
//}
//ͨ��ָ����������������a��10��Ԫ�ء�����֤�����飩
//int main()
//{
//	int* p, i, a[10];
//	p = a;
//	printf("enter ten integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	for (i = 0; i < 10; i++, p++)
//		printf("%d ", *p);
//	printf("\n");//�����for���ȼ������������for��䡣
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
//������...
//int main()
//{
//	int i, a[10], * p = a;//�����и�Сϸ�ڣ������ȶ�������a,Ȼ���������������ơ�
//	printf("enter ten integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);
//	p = a;
//	for (i = 0; i < 10; i++, p++)//�ڶ���for�͵�����for�ȼۡ�
//		printf("%d ", *p);
//	printf("\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", *p++);
//	return 0;
//}
////�Ż��ɹ�(^ @ ^)
//��ָ��������a��100��Ԫ�صĵ�ַ��������Ϊ�˷�����⣬û�и�����Ԫ�ظ������ֵ�����Խ���������100��ֵ�������ַ��
//int main()
//{
//	int a[100],i=0, * p = a;
//	while (p < a + 100)
//	{
//		printf("%d ", *p++);
//		i++;
//	}
//	
//	printf("��ĿΪ:%d", i);
//	return 0;
//}