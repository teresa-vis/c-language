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
//������a��n���������෴��˳���š�
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
//��ϰ�������βθ�Ϊָ�������
//int main()
//{
//	void inv(int* x, int n);
//	int i, a[5] = { 1,2,3,4,5 };
//	printf("��ʼֵΪ:\n");
//	for (i = 0; i < 5; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	inv(a, 5);
//	printf("����ֵΪ:\n");
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
//��ָ�뷽����10����������С˳�������
//int main()
//{
//	void sort(int* x, int n);
//	int a[10], i, * p = a;
//	printf("please enter ten integer numbers:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", p++);//ע��scanf����"%d"�Ŀո�
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
//ͨ��ָ�������ַ�����
//int main()
//{
//	int a;
//	char words[] = "I love China!";
//	a = words[7];
//	printf("%s %c\n", words,*(words+7));
//	return 0;
//}
//ͨ���ַ�ָ��������һ���ַ�����
//int main()
//{
//	char words[14] = "I love China!";//������������ô���ģ����Ƕ����ַ�������ָ�������һ����������
//										//ϸ�ڱ��ط����ܻ����в�ͬ���������ǲ���ģ���ַ,ָ�룩
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
//���ַ���a���Ƶ�b�У�Ȼ��������õ�ַ�������Ԫ�ص�ֵ��
//int main()
//{
//	char a[] = "I love China!", b[20];
//	int i;
//	//for (i = 0; *(a + i) != '\0'; i++)//ע:����a[i]<==>*(a+i)����ʽ�������õ�ַ���Ĺؼ���
//	for (i = 0; a[i] != '\0'; i++)
//		//*(b + i) = *(a + i);
//		b[i] = a[i];
//	//*(b + i) = '\0';
//	printf("string a is:%s\n", a);
//	printf("string b is:");
//	*(b + i) = '\0';//��һ���Ǹ�ֵ�ַ�������ֹ��䣬���û�и���䣬�����������ٵ�ַ�������롣
//						//ֻҪ�þ����ѭ����ֵ��ǰ���û���⡣
//	for (i = 0; b[i] != '\0'; i++)
//		printf("%c", b[i]);
//	return 0;
//}//���ǰ���ַ����������ڸ�������Ĺ����У������ַ�����ģ���Ҳ�������ַ����ķ�ʽ��������£�
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
//}//Ҳ���������±�
//��ָ������������ַ����������⡣
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
//����һ��forѭ�������
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
//�ַ�ָ���������Ĳ�����
//���ַ���������Ϊ�����Ĳ���
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
//���ַ���ָ�������������
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
//	int i = 0;//��������i��Ϊ������һ���ô�
//				//һ���������Ϊ�����ַ�Ԫ�ص�δ֪��������һ�������Ϊ�ڶ��������ۼӡ�
//	while (p1[i] != '\0')
//	{
//		p2[i] = p1[i];
//		i++;
//		p2[i] = '\0';
//	}
//}
//���ַ���ָ��������βκ�ʵ��
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
	//��ѭ������Ż�1.0
	/*while ((*p2 = *p1) != '\0')
	{
		*p1++, p2++;
	}*/
	//��ѭ��������Ż�2.0
	/*while ((*p2++ = *p1++) != '\0');*/
	//��ѭ��������Ż�3.0
	/*while (*p2 != '\0')
	{
		*p2++ = *p1++;
	}*/
	//��ѭ��������Ż�4.0
	// ��ASCII�룩�߼��ж�ת��
	//while (*p1)//��������Ϊ��
	//{
	//	*p2++ = *p1++;
	//}
	//��ѭ��������Ż�5.0
	//while (*p2++ = *p1++);//ѭ���������ʽ�������ж�Ϊ�Ƿ�Ϊ����߼١�//Ϊ��Ļ�ѭ������������ʡ�ԣ�����5.0����.
	//��ѭ��������Ż�6.0(������while����⻹������for���)
	//for (; (*p2++ = *p1++) != 0;);//for���ѭ���ж������ƺ�������'/0'��Ϊ�ж�
	//��ѭ��������Ż�7.0
	//for (; *p2++ = *p1++;);
	//��ѭ��������Ż�7.0
//}
//int main()
//{
//	char* a = "I love China!";
//	printf("%s", a + 7);//��string���ͣ����ַ�����ʽ���Ϊ��China.
//	printf("\n");
//	printf("%c", *(a + 7));//(ָ�������)��char���ͣ����ַ���ʽ���Ϊ��C.
//	printf("\n");//���Ե����±�
//	printf("%c", a[7]);//(Ҳ���Զ���ָ��������±�)
//	return 0;
//}
//��ָ�����ָ��һ����ʽ�ַ�������������������printf�����еĸ�ʽ�ַ���
//���൱��printf("a=%d,b=%f\n",a,b);
//���ֻҪ�ı�ָ�����format��ָ����ַ������Ϳ��Ըı���������ĸ�ʽ��
//����printf������Ϊ�ɸı��ʽ���������
//int main()
//{
//	int a = 3;
//	float b = 3;
//	char* format;
//	format = "a=%d,b=%f\n";
//	printf(format, a, b);
//	return 0;
//}
//Ҳ����дΪ��
//int main()
//{
//	//char* format = "%d,%f";
//	int a = 1;
//	float b = 1;
//	//printf(format, a, b);
////���߻�������һ�ַ�ʽ��д
//	char format[] = "%d,%f";
//	printf(format, a, b);
//	return 0;
//}
//ָ������ָ�����

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
//	printf("����a��b:");
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
//��ָ������ָ������������
//int main()
//{
//	int fun(int x, int y, int(*p)(int, int));
//	int max(int x, int y);
//	int min(int x, int y);
//	int sum(int x, int y);
//	int a = 34, b = -21, n;
//	printf("please choose 1,2 or 3:");
//	scanf("%d", &n);
//	if (n == 1)fun(a, b, max);//4.0����ٷ��ص�����������funȥ,��ʱfun��ֵΪ����ֵ��
//	else if (n == 2)fun(a, b, min);//���ֶ����ƺ�����ʡȥ�ٴζ���������鷳���������������ֵ��
//	else if (n == 3)fun(a, b, sum);
//	return 0;
//}
//int fun(int x, int y, int(*p)(int, int))//1.0�����ߵ�������ʱ��ִ��ͨ��ָ�뺯���������ǰ�a,b��ֵ������ȥ��
//{//ͨ��ָ�뺯������ָ�����������Զ��庯����ֻ����û�о���ָ��Ҫȡ˭��Ϊ��������
//	int result;
//	result = (*p)(x, y);//3.0�ȽϺ��ֵ���ص�����
//	printf("%d\n", result);
//}
//int max(int x, int y)//2.0Ȼ���������������ֵ�Ƚ�
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
//����ָ�����͵ĺ���
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
//��ϰһ
//int main()
//{
//	float* find(float* (point)[4], int n);
//	float score[][4] = { {24,23,25,26},{34,35,36,37},{40,41,42,43} };
//	float* p;
//	int i, k;
//	printf("����ѧ��:");
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
//ָ���ά����Ԫ�ص�ָ�����
//ָ������Ԫ�ص�ָ�����
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
//	int(*p)[3], i, j;//ָ�����p��������Ԫ�ص�һά����
//	p = a;//pָ���ά�����0��
//	printf("����������:");
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
//	printf("%d", (*p)[3]);//ע���䲻��дΪ"p=a;",��Ϊ����д��ʾp��ֵ��&a[0],ָ����Ԫ��a[0].(��Ԫ�ص�ַ��ͬ�������ǵĻ����Ͳ�ͬ)
//	printf("\n");//"p=&a;"��ʾpָ��һά�������(ָ���е�����ű����ȷ)��(*p)[3]��p��ָ��ģ��У��������Ϊ3��Ԫ�ء�
//	printf("%d", *(a+3));
//	printf("\n");
//	printf("%d", a[3]);
//	return 0;
//}
//ƽ��ֵ�е����⡣
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
//	printf("��������:");
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
//����ָ��ֵ�ĺ���
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
//����ϰһ��
//����һ�����ƽ������㣬����30�֣�����15�֣�����Ҫ��һ����ǿѧϰ��
//int main()
//{
//	int *search(int(*pointer)[3]);
//	int score[][3] = { {12,16,18},{21,25,19},{17,22,14} };
//	int* p, i, j;
//	for (i = 0; i < 3; i++)//���������3��3�еĶ�ά���飬����Ҫ����ѭ�����������β��ң�Ȼ�������ӡ��
//	{
//		p = search(score + i);//Ȼ�󷵻ظ������������и������ݵĴ�ӡ��
//		if (p == *(score + i))//return����е�ַƥ�䣬ƥ��ɹ�������ѭ����ӡ�����
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
//int *search(int(*pointer)[3])//ע������ĺ�������Ϊָ���ͺ�������Ϊ���ķ���ֵ��ָ��ֵ��Ҫȡ��ͷֵĵ�ַ
//							
//{
//	int i=0,*pt;
//	pt = NULL;//���������������ؿ�ֵ��������Ļ�����������������ң���С�ڸ������Ļ�������ֵ�ĵ�ַ����return���ɡ�
//	for (; i < 3; i++)
//	{
//		if (*(*pointer + i) < 15)
//		
//			pt = *pointer;
//	}
//	return pt;
//}