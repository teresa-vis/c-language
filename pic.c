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
int main()
{//1.�����ַ�ʽ��ﲻ���������ʽ������֤�����������߼��ϵĸ��
 //2.����֪�����ڴ��У���Ԫ����������ŵģ����Ƕ�ά�������Եġ�
	int i=0,j=0;
	int a[3][4] = { {1},{2},{3} };
	printf("%d", a[i][j]);
	return 0;
}