#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{	
////Ҫ��д����ʵ������������С�����������
//	//1.������������
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//2.������������˳��
//	if (a < b) {
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}if (a < c) {
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c) {
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//3.�����������
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{	
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		//�ж�i�Ƿ���3�ı���
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	*for (i = 3; i <= 100; i+=3) {
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{	
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int max = 0;
//	//�������Լ��max����m��n�Ľ�Сֵ
//	if (m > n) 
//		max = n;
//	else 
//		max = m;
//	while (1) {
//		if (m % max == 0 && n % max == 0) {
//			printf("���Լ�����ǣ�%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}
//int main()
//{	
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int k = 0;
//	while (m % n == 0) {
//		k = m % n;
//		m = n;
//		n = k;
//	}
//	printf("���Լ���ǣ�%d", n);
//	//��С������= m*n/���Լ���� 
//	return 0;
//}
//int main()
//{	
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++) {
//		//�ж�y�ǲ�������
//		//1.�ܱ�4���������ܱ�100������������
//		//2.�ܱ�400������Ҳ������
//		/*if (y % 4 == 0 ) {
//			if (y % 100 != 0) {
//				printf("�����ǣ�%d\n", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0) {
//			printf("�����ǣ�%d\n", y);
//			count++;
//		}
//	}*/
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {//��д��
//			printf("%d\n", y);
//			count++;
//		}
//
//
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()
//{	//дһ�����룺��ӡ100~200֮�������
//	//����--����
//	//ֻ�ܱ�1����������������
//	int i = 0;
//	int count = 0;
//	//int count = 0;
//	for (i = 100; i <= 200; i++) {
//		//�ж�i�Ƿ�������
//		//2--��i-1��֮�������ȥ�Գ�i,���Ƿ��ܳ���
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				//Ҫô��������Ҫô����������û������
//				break;
//				
//				
//			}
//		}
//		if (i == j) {
//			count++;
//			printf("%d ", i);
//			
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include <math.h>
//int main()
//{	
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2) {
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <=sqrt(i); j++) {//sqrt--�ǿ�ƽ���ĺ���
//			if (i % j == 0) {
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1) {
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include <math.h>
//int main()
//{	
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2) {
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;

//int main()
//{	
//	flag:
//	printf("���ѽ\n");
//	printf("�ǵ���\n");
//	goto flag;
//	return 0;
//}
//#include <string.h>
//#include <stdlib.h>
//int main()
//{	
//	//�ػ�
//	//c�����ṩһ��������system()- ִ��ϵͳ����
//	char input[20] = { 0 };//��������������Ϣ
//	system("shutdown - s - t 60");
//again:
//	printf("��ע�⣡�������ĵ��Խ���1�����ڹػ���������룺hehe,��ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"hehe")==0) {//�����ַ����Ƚϲ���ʹ��==�ţ�Ӧ��ʹ��strcmp() string compare
//		system("shutdown -a");
//	}
//	else {
//		goto again;//goto���ֻ����һ��������Χ����ת�����ܿ纯����
//	}
//	return 0;
//}
//#include <string.h>
//#include <stdlib.h>
//int main()
//{	
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("���Խ���һ�����ڹػ����������룺��Ƥ\n");
//		scanf("%s", input);
//		if (strcmp(input, "��Ƥ") == 0) {
//			system("shutdown -a");
//				break;
//		}
//	}
//	
//	return 0;
//}


