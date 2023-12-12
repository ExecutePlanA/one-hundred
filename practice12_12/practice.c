// 判断回文字符串
#include <stdio.h>
// #include <string.h>
// int Cmp(char arr[])
// {

//     int tmp = strlen(arr);
//     char *right = arr + tmp - 1;
//     char *left = arr;
//     while (left < right)
//     {
//         if (*right != *left)
//         {
//             return 0;
//         }
//         right--;
//         left++;
//     }
//     return 1;
// }
// int main()
// {
//     char arr[31] = {0};
//     scanf("%s", arr);
//     int ret = Cmp(arr);
//     if (ret == 1)
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }

//     return 0;
// }

// 计算天数
// int get_month_day(int y, int m)
// {
//     int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//     int day = days[m];

//     if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//     {
//         if (m == 2)
//             day += 1;
//     }
//     return day;
// }
// int main()
// {
//     int y = 0;
//     int m = 0;
//     scanf("%d %d", &y, &m);
//     int ret = get_month_day(y, m);
//     printf("%d\n", ret);
//     return 0;
// }

// 删除指定的数
// int main()
// {
//     int arr[10] = {0};
//     int del = 0;
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     // 输入一个数字
//     int j = 0;
//     scanf("%d", &del);
//     for (i = 0; i < 10; i++)
//     {
//         if (arr[i] != del)
//         {
//             arr[j++] = arr[i];
//         }
//     }
//     for (i = 0; i < j; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// 字符串拷贝
// void my_strcpy(char *b, char *a)
// {

//     while (*a != '\0')
//     {
//         *b = *a;
//         a++;
//         b++;
//     }
//     *b = '\0';
// }
// int main()
// {
//     char a[] = "hello world";
//     char b[30] = {0};
//     my_strcpy(b, a);

//     printf("%s\n", b);

//     return 0;
// }

// 合并有序数组
// int main()
// {
//     int n = 0;
//     int m = 0;
//     int arr1[31] = {0};
//     int arr2[31] = {0};
//     int arr3[62] = {0};
//     scanf("%d %d", &m, &n);
//     int i = 0;
//     for (i = 0; i < m; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }
//     i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < m && j < n)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             arr3[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//     if (i == m)
//     {
//         for (; j < n; j++)
//         {
//             arr3[k] = arr2[j];
//             k++;
//         }
//     }

//     if (j == n)
//     {
//         for (; i < m; i++)
//         {
//             arr3[k] = arr1[i];
//             k++;
//         }
//     }

//     for (k = 0; k < m + n; k++)
//     {
//         printf("%d ", arr3[k]);
//     }

//     return 0;
// }