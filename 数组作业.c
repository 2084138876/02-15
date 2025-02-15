#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//   1 交换两个数组的内容（两个数组大小相同）
//void sw(int* arr1, int* arr2,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tem = 0;
//		tem = *arr1;
//		*arr1 = *arr2;
//		*arr2 = tem;
//		arr1++;
//		arr2++;
//	}
//
//
//
//}

//两个数组大小一样
//数组名是数组首元素的地址
//arr[i]=arr对应的地址往后找i个,即通过arr这个地址找到对应元素，然后向后移动i
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2 [] = {6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	sw(arr1, arr2,sz);
//	return 0;
//}


//  2 创建一个数组，实现以下功能：
//			实现函数init() 初始化数组为全0
//			实现函数print() 打印数组的每个元素
//			实现reverse() 完成数组元素的逆置


//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		*arr = 0;
//		arr++;
//	}
//}


//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *arr);
//		arr++;
//	}
//}

//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tem = 0;
//		tem = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tem;
//		left++;
//		right--;
//	}
//
//
//}

//int main()
//{
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}