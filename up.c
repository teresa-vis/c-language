#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("���Խ���һ�����ڹػ����������룺��Ƥ\n");
//		scanf("%s", input);
//		if (strcmp(input, "��Ƥ") == 0) {
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

//�����Ķ���
//�Զ��庯�����������������ֵ��
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
//	++++++++++++++++++++++++++�����ĵ���
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//�����������ͱ���������
//�����������͵ĵط�д����void,��ʾ��������������κ�ֵ��Ҳ����Ҫ����
//д��������
// exc_math�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ�������ı��βΣ����ܸı�ʵ�Ρ�
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
//	printf("����ǰ��a=%d c=%d\n", a, c);
//	exc_math(a, c);//��ֵ����
//	printf("������a=%d c=%d\n", a, c);
//	return 0;
//}
//----------------------------------------------------
//int main()
//{	
//	int a = 10;
//	int* pa = &a;//pa����һ��ָ�����
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
//	printf("��ӡǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);//��ַ����
//	printf("��ӡ��a=%d b=%d\n", a, b);
//	return 0;
//}
//������������������������������������������������
//�����ĵ��ã�
// ��ֵ����
// �������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
// ��ַ����
// 1����ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
// 2�����ִ��η�ʽ�����ú����ͺ�����ߵı����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����

//#include <math.h>
//int is_prime(int n)
//{
//	//2->n-1֮�����ȥ�Գ�
//	int j = 0;
//	for (j = 2; j < n; j++)//j<=sqrt(n);����sqrt()�⺯���������˼Ҷ���õ�ͷ�ļ�
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
//	//100-200֮�������
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
//дһ���������ж�ĳһ���ǲ������ꡣ**********************��������������������������Ż���
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
//is_leap_year()*******************************************�Ż���
//����ж������꣬�򷵻�1
//�������귵��0
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
//int math_year(int x)//*****************************�����޸ĺ�
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
//һ�����������д�������ͣ�Ĭ�Ϸ���int����
// 
//дһ��������ʵ��һ������������Ķ��ֲ��ҡ�
//int binary_search(int brr[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (brr[mid] > k)//��ǰ�����ҵ������м�Ԫ��
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
//	return -1;//�Ҳ�����
//}
//int main()
//{	
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ����ͷ���-1
// ����arr���Σ�ʵ�ʴ��ݵĲ������鱾����������ȥ������Ԫ�صĵ�ַ���ں����ڲ���
// ��������ڲ���Ҫ�������ִ�����ĳ�������Ԫ�ظ�����Ҫ�����ⲿ���Ԫ�ظ��������Բ�������ʽ�Ѳ�������ȥ
//	int ret = binary_search(arr,key,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else 
//	{
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//************************************************��д
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
//		printf("�Ҳ���\n");
//	}
//	else 
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//дһ��������ÿ����һ������������ͻὫnumֵ����1.
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
//������Ƕ�׵��ú���ʽ����
// ����֮�䲻��Ƕ�׶��塣
//�����ͺ���֮������л���ϡ�

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
//	printf("����a,b,c:");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)a = b;
//	if (a < c)a = c;
//	printf("���ֵ��%d ", a);
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
//{	//�ַ�����Ҳ�����������ͣ���˽�һ���ַ������ַ������ͽ��ַ���ASCII���븳���ַ�������������ȫ��ͬ��
//	//����Ӧ��ע�⣬�������ݵķ�ΧΪ0~127
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
//��С���������������
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
//�ɴ�С�����������
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