#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




//   1 ����������������ݣ����������С��ͬ��
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

//���������Сһ��
//��������������Ԫ�صĵ�ַ
//arr[i]=arr��Ӧ�ĵ�ַ������i��,��ͨ��arr�����ַ�ҵ���ӦԪ�أ�Ȼ������ƶ�i
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2 [] = {6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	sw(arr1, arr2,sz);
//	return 0;
//}


//  2 ����һ�����飬ʵ�����¹��ܣ�
//			ʵ�ֺ���init() ��ʼ������Ϊȫ0
//			ʵ�ֺ���print() ��ӡ�����ÿ��Ԫ��
//			ʵ��reverse() �������Ԫ�ص�����


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