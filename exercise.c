#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{	
////要求：写代码实现三个整数从小到大依次输出
//	//1.输入三个整数
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//2.调整三个整数顺序
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
//	//3.输出三个整数
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{	
//	int i = 0;
//	for (i = 1; i <= 100; i++) {
//		//判断i是否是3的倍数
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
//	//假设最大公约数max就是m和n的较小值
//	if (m > n) 
//		max = n;
//	else 
//		max = m;
//	while (1) {
//		if (m % max == 0 && n % max == 0) {
//			printf("最大公约数就是：%d", max);
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
//	printf("最大公约数是：%d", n);
//	//最小公倍数= m*n/最大公约数； 
//	return 0;
//}
//int main()
//{	
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++) {
//		//判断y是不是闰年
//		//1.能被4整除，不能被100整除的是闰年
//		//2.能被400整除的也是闰年
//		/*if (y % 4 == 0 ) {
//			if (y % 100 != 0) {
//				printf("闰年是：%d\n", y);
//				count++;
//			}
//		}
//		if (y % 400 == 0) {
//			printf("闰年是：%d\n", y);
//			count++;
//		}
//	}*/
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {//连写法
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
//{	//写一个代码：打印100~200之间的素数
//	//素数--质数
//	//只能被1和它本身整除的数
//	int i = 0;
//	int count = 0;
//	//int count = 0;
//	for (i = 100; i <= 200; i++) {
//		//判断i是否是素数
//		//2--（i-1）之间的数字去试除i,看是否能除尽
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				//要么跳出来，要么就是这里面没有素数
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
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <=sqrt(i); j++) {//sqrt--是开平方的函数
//			if (i % j == 0) {
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1) {
//			count++;
//			printf("%d ", i);//素数
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
//	printf("你好呀\n");
//	printf("是的呢\n");
//	goto flag;
//	return 0;
//}
//#include <string.h>
//#include <stdlib.h>
//int main()
//{	
//	//关机
//	//c语言提供一个函数：system()- 执行系统命令
//	char input[20] = { 0 };//用来存放输入的信息
//	system("shutdown - s - t 60");
//again:
//	printf("请注意！！！您的电脑将在1分钟内关机，如果输入：hehe,就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"hehe")==0) {//两个字符串比较不能使用==号，应该使用strcmp() string compare
//		system("shutdown -a");
//	}
//	else {
//		goto again;//goto语句只能在一个函数范围内跳转，不能跨函数。
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
//		printf("电脑将在一分钟内关机，否则输入：哈皮\n");
//		scanf("%s", input);
//		if (strcmp(input, "哈皮") == 0) {
//			system("shutdown -a");
//				break;
//		}
//	}
//	
//	return 0;
//}


