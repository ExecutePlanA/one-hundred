#include <stdio.h>
// 打印菱形
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int i = 0;
//     for (i = 0; i < n; i++)
//     {
//         int j = 0;

//         for (j = 0; j < n - i - 1; j++)
//         {
//             printf(" ");
//         }
//         for (j = 0; j < 2 * i + 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         int j = 0;
//         for (j = 0; j < i + 1; j++)
//         {
//             printf(" ");
//         }
//         for (j = 0; j < 2 * (n - i - 1) - 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// 喝多少瓶水
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     int i = 0;
//     int ret = 0;
//     int empty = 0;
//     ret += n;
//     empty += n;
//     while(empty >= 2)
//     {
//         ret += empty / 2;
//         empty = empty / 2 + empty % 2;
//     }
//     printf("%d\n", ret);

//     return 0;
// }

// 字符转换
// #include <ctype.h>
// int main()
// {
//     char num[30] = {0};
//     scanf("%s", num);
//     int sz = sizeof(num) / sizeof(num[0]);
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         if (islower(num[i]))
//         {
//             num[i] = toupper(num[i]);
//         }
//         else if (isupper(num[i]))
//         {
//             num[i] = tolower(num[i]);
//         }
//     }
//     printf("%s\n", num);

//     return 0;
// }

// 交换两个整数
// void swap(int *a, int *b)
// {

//     int ret = *a;
//     *a = *b;
//     *b = ret;
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     scanf("%d %d", &a, &b);
//     swap(&a, &b);
//     printf("%d %d\n", a, b);

//     return 0;
// }

// 求两个整数的平均数
// int average(int x, int y)
// {
//     return x + (y - x) / 2;
// }
// int main()
// {
//     int m = 0;
//     int n = 0;
//     scanf("%d %d", &m, &n);
//     int ret = average(m, n);
//     printf("%d\n", ret);
//     return 0;
// }

// 求字符串长度
// int Strlen(const char *num)
// {
//     int count = 0;
//     while (num[count] != '\0')
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char num[31] = {0};
//     scanf("%[^\n]s", num);
//     int ret = Strlen(num);

//     printf("%d\n", ret);
//     return 0;
// }

// 求字符串长度【进阶版】
// int Strlen(const char *arr)
// {
//     if (*arr == '\0')
//         return 0;
//     else
//         return 1 + Strlen(arr + 1);
// }
// int main()
// {
//     char arr[31] = {0};
//     scanf("%[^\n]s", arr);
//     int length = Strlen(arr);

//     printf("%d", length);
//     return 0;
// }

// 逆序字符串
// #include <string.h>
// void sort(char *arr)
// {
//     int len = strlen(arr);

//     char *left = arr;
//     char *right = arr + len - 1;
//     while (left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;

//         left++;
//         right--;
//     }
// }
// int main()
// {
//     char arr[30] = {0};
//     scanf("%[^\n]s", arr);
//     sort(arr);
//     printf("%s\n", arr);

//     return 0;
// }

// 求数字的每一位之和
// int main()
// {
//     int num = 0;
//     scanf("%d", &num);
//     int sum = 0;
//     while (num)
//     {
//         sum += num % 10;
//         num /= 10;
//     }
//     printf("%d\n", sum);

//     return 0;
// }