#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����һ��д��ĸת��ΪСд��ĸ������ΪСд��ĸ
//int main() {
//	char ch;
//	scanf("%c", &ch);
//	ch = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;
//	printf("%c", ch);
//	return 0;
//}
//��Ծ����������һ��
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < 0)
//	{
//		y = -1;
//	}
//	else
//		if (x == 0)
//			y = 0;
//		else
//			y = 1;
//	printf("x=%d y=%d", x, y);
//	return 0;
//}
//����������
//int main()
//{	
//	int x, y;
//	scanf("%d", &x);
//	if (x >= 0)
//	{
//		if (x > 0)
//		{
//			y = 1;
//		}
//		else
//		{
//			y = 0;
//		}
//	}
//	else
//	{
//		y = -1;
//	}
//	printf("x = %d y = %d", x, y);
//	return 0;
//}
//switch��䴦����֧ѡ��
//int main()
//{	
//	char grade;
//	scanf("%c", &grade);
//	printf("Your score:");
//	switch (grade)
//	{
//	case 'A':printf("85~100");
//		break;
//	case 'B':printf("70~84");
//		break;
//	case 'C':printf("60~69");
//		break;
//	case 'D':printf("<60\n");
//		break;
//	default:printf("enter data err!\n");
//	}
//	return 0;
//}
//�ж�100~200���ܱ�3��������(����һ)
//int main()
//{	
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//		{
//			continue;
//			
//		}
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}
//������
//int main()
//{	//continue����������������
//	for (int i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
//���һ��4 X 5�ľ���
//int main()
//{	
//	int i, j, n = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0)printf("\n");
//			printf("%d\t", i * j);
//		}
//	}
//	printf("\n");
//	return 0;
//}
//����������3�е�1����ֹ��ѭ��
//int main()
//{	
//	int i, j, n = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 5; j++, n++)
//		{
//			if (n % 5 == 0)
//				printf("\n");
//			if (3 == i && 1 == j) {
//				break;
//				//continue;
//			}
//			printf("%d\t", i * j);
//		}
//	}
//	return 0;
//}
//int main()
//{	//�ϻ�����������õĴ𰸡�
//	double x = 3.4, y = 3.2;
//	printf("%lf", (int)x * 0.5);
//	printf("%lf", y+=x++);
//	return 0;
//}
//int main()
//{	//���ű��ʽ��ֵΪ���ű��ʽ�����һ�����ʽ��ֵ��
//	int a = 10, b = 10;
//	printf("%d\n", (a, b));
//	printf("%d\n", a -= 8);
//	printf("%d\n", a%b);
//	return 0;
//}
//int main()
//{
//	char a = 'A';
//	printf("%c", a+++2);
//	return 0;
//}
//int main()
//{	
//	int a = 10;
//	a += a -= a * a;
//	printf("%d", a);
//	return 0;
//}
//��ʮ������Ԫ�ؽ������θ�ֵ���������������
//int main()
//{	
//	int i,a[10];
//	for (i = 0; i <= 9; i++)
//	{
//		a[i] = i;
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//---------------------------����ʾ��
//int main()
//{
//	int i, a[10];
//	for (i = 1; i <= 10; i++)
//	{
//		a[i] = i;
//	}
//	for (i = 10; i >= 1; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//Fibonacci������������ʽ���
//int main()
//{	
//	int i;
//	int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++)
//		f[i] = f[i - 2] + f[i - 1];
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)printf("\n");
//		printf("%12d", f[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{	
//	int i;
//	int f[20] = { 1,1 };
//	for (i = 2; i < 20; i++) {
//		f[i] = f[i - 2] + f[i - 1];
//	}
//	for (i = 0; i < 20; i++) {
//		if (i % 5 == 0) printf("\n");//printf("\n")��λ��Ӱ�����е�λ�õĺ��ݣ�
//		
//		printf("%12d", f[i]);
//	}
//	printf("\n");
//	return 0;
//}
//ð������
//int main()
//{	
//	int a[10];
//	int i, j, t;
//	printf("��������ǣ�\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	printf("\n");
//	for(j=0;j<9;j++)
//		for(i=0;i<9-j;i++)
//			if (a[i] > a[i + 1]) {
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//	printf("���������\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
// ����дð��
//int main()
//{	
//	int a[10], i, j, k;
//	printf("���������ֵ��\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (j = 0; j < 9; j++)
//	{
//		for (i = 0; i < 9 - j; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = k;
//			}
//		}
//	}
//	printf("������������ǣ�\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//�ѵ�һ����ѭ����д��whileѭ������ʽ��
//int main()
//{
//	int a[10], i, j=0, k;
//	printf("���������ֵ��\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	while (j < 9)
//	{//������д�ᷢ�ִӵڶ���for��j++��ð������ĺ���
//		for (i = 0; i < 9 - j; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				k = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = k;
//			}
//		}
//		j++;
//	}
//	printf("������������ǣ�\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{//1.�����ַ�ʽ��ﲻ���������ʽ������֤�����������߼��ϵĸ��
// //2.����֪�����ڴ��У���Ԫ����������ŵģ����Ƕ�ά�������Եġ�
//	int i=0,j=0;
//	int a[3][4] = { {1},{2},{3} };
//	printf("%d", a[i][j]);
//	return 0;
//}
//��һ����ά�����к��е�Ԫ�ؽ��л������浽��һ����ά�����С�
//int main()
//{	
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2], i, j;
//	printf("array a:\n");
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			printf("%d ", a[i][j]);
//			b[j][i] = a[i][j];//�ڴ�ӡ����Ĺ����а�����֮���ֵ����ת����
//		}
//		printf("\n");
//	}
//	printf("array b:\n");//����Ҳ�Ͳ���Ҫ����i,j,�±�֮�����ʽת������Ϊ�����������ʱ���߼������Ѿ���ʾ�����
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 1; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��һ��3 X 4�ľ���������������Ǹ�Ԫ�ص�ֵ���Լ������ڵ����кš�
//int main()
//{	
//	int i,j, max, row = 0, column = 0;
//	int a[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
//	max = a[0][0];
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				row = i;
//				column = j;
//			}
//		}
//	}
//	printf("max=%d\nrow=%d\ncolumn=%d\n", max, row, column);
//	return 0;
//}
//int main()
//{
//	int i, j, row = 0, column = 0, max;
//	int a[4][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };
//	max = a[0][0];
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				row = i;
//				column = j;
//			}
//		}
//	}
//	printf("max=%d\nrow=%d\ncolumn=%d\n", max, row, column);
//	return 0;
//}
//int main()
//{	
//	char a[][5] = { {' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'} };
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%c ", a[i][j]);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{	
//	char a[8] = "china";
//	/*puts(a);
//	gets();
//	strlen("china");*/
//	printf("%d",strlen("china"));
//	return 0;
//}
//�����ĵ���
//int main()
//{	
//	void print_star();
//	void print_msg();
//	print_star();
//	print_msg();
//	print_star();
//	return 0;
//}
//void print_star()
//{
//	printf("*******************\n");
//}
//void print_msg()
//{
//	printf("this is a book\n");
//}
//������������Ҫ���������ֵ�ϴ��ߡ�Ҫ���ú������ҵ�������
//int main()
//{	
//	int max(int x, int y);
//	int a, b, c;
//	printf("����������:");
//	scanf("%d%d", &a, &b);
//	c = max(a, b);
//	printf("���ֵ��=%d ", c);
//	return 0;
//}
//int max(int x, int y)
//{
//	int z;
//	z = x > y ? x : y;
//	return (z);
//}
//��������ֵ��������ָ���ĺ������Ͳ�ͬ��
//int max(float x, float y)
//{
//	float z;
//	return(z = x > y ? x : y);
//}
//int main()
//{	
//	int max(float x,float y);
//	float a, b;
//	int c;
//	scanf("%f%f", &a, &b);
//	c = max(a, b);
//	printf("%d", c);
//	return 0;
//}
//��������ʵ������һ�������������֮�͡�
//int main()
//{	
//	float add(float , float );
//	float a, b, c;
//	printf("enter a and b:\n");
//	scanf("%f,%f", &a, &b);
//	c = add(a, b);
//	printf("sum is %f\n", c);
//	return 0;
//}
//float add(float x, float y)
//{
//	float z;
//	z = x + y;
//	return(z);
//}
//���4���������ֵ��Ҫ���ú���Ƕ�׵ķ�ʽ
//int main()
//{
//	int max4(int a, int b, int c, int d);
//	int a, b, c, d, max;
//	printf("please enter four integer numbers:\n");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	max = max4(a, b, c, d);
//	printf("max=%d", max);
//	return 0;
//}
//int max4(int a, int b, int c, int d)
//{
//	int max2(int a, int b);
//	int m;
//	m = max2(a, b);
//	m = max2(m, c);
//	m = max2(m, d);
//	return m;
//}
//int max2(int a, int b)
//{
//	if (a >= b)
//	{
//		return a;
//	}
//	else {
//		return b;
//	}
//}
//����Ľ�
//int main()
//{
//	int max4(int a, int b, int c, int d);
//	int a, b, c, d, max;
//	printf("please enter four integer numbers:\n");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	max = max4(a, b, c, d);
//	printf("max=%d", max);
//	return 0;
//}
//int max4(int a, int b, int c, int d)
//{
//	int max2(int a, int b);
//	return max2(max2(max2(a, b), c), d);//�Ѻ���������Ϊ�����Ĳ���
//}
//int max2(int a, int b)
//{
//	return(a >= b ? a : b);//�����������ʽ���м�
//}
//��⺯���ĵݹ����
//int main()
//{	
//	int age(int n);
//	/*int m;
//	m = age(5);
//	printf("NO.5,age:%d\n", m);*/
//	printf("NO.5,age:%d\n", age(5));
//	return 0;
//}
//int age(int n)
//{
//	int c;
//	if (n == 1)
//	{
//		c = 10;
//	}
//	else {
//		c = age(n - 1) + 2;
//	}
//	return c;
//}
//�õݹ�ķ�����n!
//int main()
//{	
//	int fac(int n);
//	int n, m;
//	printf("input an integer number:\n");
//	scanf("%d", &n);
//	m = fac(n);
//	printf("%d!=%d\n", n,m);
//	return 0;
//}
//int fac(int n)
//{
//	int f;
//	if (n < 0)
//	{
//		printf("n<0,data error!");
//	}
//	else if (n == 0 || n == 1)
//	{
//		f = 1;
//	}
//	else
//	{
//		f = fac(n - 1) * n;
//	}
//	return (f);
//}
//
//��ϰһ
//int main()
//{
//	int toup(int n);
//	int n, m;
//	printf("input an integer number:\n");
//	scanf("%d", &n);
//	m = toup(n);
//	printf("%d!=%d\n", n, m);
//	return 0;
//}
//int toup(int n)
//{
//	int c;
//	if (n < 0)
//	{
//		printf("n<0,data error:\n");
//	}
//	else if (n == 0 || n == 1)
//	{
//		c = 1;
//	}
//	else {
//		c = toup(n - 1) * n;
//	}
//	return c;
//}
//Hanoi(��ŵ)�����⡣
//int main()
//{	
//	void mot(int n, char one, char two, char three);
//	int m;
//	printf("��������:");
//	scanf("%d", &m);
//	printf("�ƶ��Ĳ���%dΪ:\n", m);
//	mot(m, 'A', 'B', 'C');
//	return 0;	
//}
//void mot(int n, char one, char two, char three)
//{
//	void move(char x, char y);
//	if (n == 1)
//	{
//		move(one, three);
//	}
//	else
//	{
//		mot(n - 1, one, three, two);
//		move(one, three);
//		mot(n - 1, two, one, three);
//	}
//}
//void move(char x, char y)
//{
//	printf("%c-->%c\n", x, y);
//}
// ����Ԫ���������Ĳ�����
//����ʮ�������������������Ԫ�غ͸����ǵڼ�������
//int main()
//{	
//	int compare(int x, int y);
//	int a[10],m,n,i;
//	printf("����ʮ����:");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("\n");
//	for (i = 1, m = a[0], n = 0; i < 10; i++)
//	{
//		if (compare(m, a[i]) > m)
//		{
//			m = compare(m, a[i]);
//			n = i;
//		}
//	}
//	printf("��������:%d\n��%d����������:\n", m, n + 1);
//	return 0;
//}
//int compare(int x, int y)
//{
//	return(x > y ? x : y);
//}
//int main()
//{
//	int max(int x, int y);
//	int a[10], m, n, i;
//	printf("����ʮ����:\n");
//	for(i=0;i<10;i++)
//	scanf("%d", &a[i]);
//	printf("\n");
//	for (i = 1, n = 0,m = a[0]; i < 10; i++)
//	{
//		if (max(a[i], m)>m)
//		{
//			m = max(a[i], m);
//			n = i;
//		}
//	}
//	printf("��������ֵ��:%d\n��%d���������ֵ\n", m,n+1);
//	return 0;
//}
//int max(int x, int y)
//{
//	return(x > y ? x : y);
//}
// һά�������������Ĳ���
// ��ʮ��ѧ���ĳɼ������ء�
//int main()
//{	
//	float average(float arr[10]);
//	float score[10], aver;
//	int i;
//	printf("����ʮ��ѧ���ĳɼ�:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &score[i]);
//	aver = average(score);
//	printf("%5.2f", aver);
//	return 0;
//}
//float average(float arr[10])
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//		aver = sum / 10;
//	}
//	return aver;
//}
//��ϰ
//int main()
//{	
//	float averge(float arr[10]);
//	float score[10], aver;
//	int i;
//	printf("����ʮ��ѧ���ĳɼ�:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &score[i]);
//	printf("\n");
//	aver = averge(score);
//	printf("ƽ���ɼ�Ϊ%5.2f", aver);
//	return 0;
//}
//float averge(float arr[10])
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		sum = sum + arr[i];
//		aver = sum / 10;
//	}
//	return aver;
//}
//�������༶ѧ������Ϊ5�˺�10�ˣ�����һ��average�������ֱ���������༶��ƽ���ɼ�
//int main()
//{	
//	float average(float arr[], int n);
//	float score1[5] = { 98.5,97,91.5,60,55 };
//	float score2[10] = { 67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5 };
//	printf("ƽ���ɼ�A��%6.2f\n", average(score1, 5));
//	printf("ƽ���ɼ�B��%6.2f\n", average(score2, 10));
//	return 0;
//}
//float average(float arr[], int n)
//{
//	int i;
//	float aver, sum = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		sum = sum + arr[i];
//		aver = sum / n;
//	}
//	return (aver);
//}
//************************************��ѡ�񷨶������е�10����������С��������
//int main()
//{	
//	void sort(int array[], int n);
//	int i, a[10];
//	printf("����ʮ������:\n");
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	sort(a, 10);
//	printf("����������Ϊ:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//void sort(int array[], int n)
//{
//	int i, j, k, t;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (array[j] < array[k])
//			{
//				k = j;
//				
//			}
//		}
//		t = array[k];
//		array[k] = array[i];
//		array[i] = t;
//	}
//}
//��ά�������������Ĳ���
//int main()
//{
//	int max_value(int arr[][4]);
//	int arr[3][4] = { {12,15,17,3},{4,9,8,3},{7,21,42,62} };
//	printf("���ֵ��:%d\n",max_value(arr));
//	return 0;
//}
//int max_value(int arr[][4])
//{
//	int i, j, max;
//	max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	return(max);
//}
//дһ�������������������ô˺����������ƽ���֣���߷֣���ͷ֡�(��������)
//float Max = 0, Min = 0;
//int main()
//{	
//	float average(float array[], int n);
//	float ave, score[10];
//	int i;
//	printf("enter 10 scores:");
//	for (i = 0; i < 10; i++)
//		scanf("%f", &score[i]);
//	ave = average(score, 10);
//	printf("max=%6.2f\nmin=%6.2f\naverage=%6.2f\n", Max, Min, ave);
//	return 0;
//}
//float average(float array[], int n)
//{
//	int i;
//	float aver, sum = array[0];
//	Max = Min = array[0];
//	for (i = 1; i < n; i++)
//	{
//		if (array[i] > Max)Max = array[i];
//		else if (array[i] < Min)Min = array[i];
//		sum = sum + array[i];
//	}
//	aver = sum / n;
//	return aver;
//}
//int a = 100; b = 29;
//int main()
//{	
//	int max(int x, int y);
//	int a = 8;
//	//max(a,b);
//	printf("%d", max(a, b));
//	return 0;
//}
//int max(int x, int y)
//{
//	int c;
//	c = x > y ? x : y;
//	return(c);
//}
//�Զ�������auto����)����̬�ֲ�����(static�ֲ�����)
//int main()
//{
//	int f(int a);
//	int a = 2, i;
//	for (i = 0; i < 3; i++)
//		printf("%d\n", f(a));
//	return 0;
//}
//int f(int a)
//{
//	auto int b = 1;
//	//static int c = 3;
//	//����static�����洢���ͣ��������ý�����ֵ����ʧ����������ԭֵ
//	//��ռ�õĴ洢��Ԫ���ͷţ�����һ�ε��øú���ʱ���ñ�������ֵ��������һ�κ�������
//	//������ֵ��
//	 int c = 3;
//
//	b = b + 1;
//	c = c + 1;
//	return(a + b + c);//����return������������Ϊһ��ֵ����f�������棬Ȼ��ִ��i++;
//}
//���þ�̬������������n!.
//int main()//��һ��д����forѭ������С�
//{	
//	int f(int n);
//	int i,a;
//	for (i = 1; i <= 5; i++)
//	{
//		a = i;
//		printf("%d!=%d\n", i, f(a));
//	}
//	return 0;
//}
//int f(int n)
//{
//	static int f = 1;
//	f = f * n;
//	return f;
//}
//�ڶ���д�������Զ�����i��������Խ�����⡣
//int main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//		printf("%d!=%d\n", i, f(i));
//	return 0;
//}
//int f(int n)
//{
//	static int f = 1;
//	f = f * n;
//	return f;
//}
//��extern�����ⲿ��������չ�ⲿ�������ⲿ�����е�������
//int A, B, C;
//int main()
//{	
//	int max();
//	extern int A, B, C;
//	printf("please enter three integer number:\n");    
//	scanf("%d %d %d", &A, &B, &C);
//	printf("%d", max());
//	return 0;
//}
//
//int A, B, C;
//
//int max()
//{
//	int m;
//	m = A > B ? A : B;
//	if (C > m)m = C;      
//	return m;
//}
//����b��ֵ������a��m,��a*b��a��m�ε�ֵ��
//int A;
//int main()
//{
//	int squr(int n);//����ϵͳֻ���Ĳ��������Ͳ������ͣ�������������(�ββ������ͺ���������һ��)��
//					//��pic.c��com.c���Աȿɵ�֪��
//	int b = 3, c, d, m;
//	printf("enter in numbers:\n");
//	scanf("%d%d", &A, &m);
//	c = A * b;
//	printf("%d*%d=%d\n",A,b,c);
//	d = power(m);
//	printf("%d**%d=%d\n", A, m, d);
//	return 0;
//}

