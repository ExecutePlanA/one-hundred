#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 求100-200之间的素数
//  int main()
//  {
//      int i = 100;
//      for (i = 101; i <= 200; i += 2)
//      {
//          int log = 1;
//          int j = 2;
//          for (j = 2; j < i; j++)
//          {
//              if (i % j == 0)
//              {
//                  log = 0;
//                  break;
//              }
//          }
//          if (log == 1)
//          {
//              printf("%d ", i);
//          }
//      }
//      return 0;
//  }

// 输出三角形是等边、等腰还是普通三角形
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a + b > c && a + c > b && b + c > a)
//     {
//         if (a == b && a == c)
//         {
//             printf("等边三角形\n");
//         }
//         else if (a == b || a == c || b == c)
//         {
//             printf("等腰三角形\n");
//         }
//         else
//         {
//             printf("普通三角形\n");
//         }
//     }
//     else
//     {
//         printf("非三角形\n");
//     }
//     return 0;
// }

// 求两数最大公约数
// 解法一
// int main()
// {
//     int m = 0;
//     int n = 0;
//     scanf("%d %d", &m, &n);
//     int k = m < n ? m : n;
//     while (k)
//     {
//         if (m % k == 0 && n % k == 0)
//         {
//             printf("%d\n", k);
//             break;
//         }
//         k--;
//     }
//     return 0;
// }


//最小公倍数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int mul = m * n;
//	int k = 0;
//	while (k = m % n)
//	{
//		m = n;
//		n = k;
//	}
//	printf("%d", mul / n);
//	return 0;
//}

//解法二
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int k = 0;
//	k = (m > n ? m : n);
//	while (1)
//	{
//		if (k % m == 0 && k % n == 0)
//		{
//			printf("%d\n", k);
//			break;
//		}
//		k++;
//	}
//	return 0;
//}

  
//分数求和
//int main()
//{
//	float sum = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//		{
//			sum += 1.0 / i;
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//计算最大值和最小值的差值
//#include<limits.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int Max= arr[0];
//	int Min= arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (Max< arr[i])
//		{
//			Max = arr[i];
//		}
//		else if (Min> arr[i])
//		{
//			Min = arr[i];
//		}
//	}
//	printf("%d\n", Max - Min);
//
//	return 0;
//}

//排序整形数组
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//找出盗窃贼
//#include<stdio.h>
//int main()
//{
//	int thieves = 0;
//	for (thieves = 'a'; thieves <= 'd'; thieves++)
//	{
//		if ((thieves != 'a')+ (thieves == 'c') + (thieves == 'd') + (thieves != 'd') == 3)
//		{
//			printf("%c\n", thieves);
//		}
//	}
//	return 0;
//}

//自幂数
//#include<stdio.h>
//#include<math.h>
//#define MAX 100000
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= MAX; i++)
//	{
//		int ret = 1;
//		int tmp = i;
//		while (tmp/10)
//		{
//			tmp /= 10;
//			ret++;
//		}
//		tmp = i;
//		int sum = 0;
//		while(tmp)
//		{
//			sum += (int)pow(tmp % 10, ret);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


