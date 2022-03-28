#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void sushu(int a) {
//	int i = 0;
//	for (i = 2; i < a; i++) {
//		if (a % i == 0) {
//			printf("该数字不是素数");
//			break;
//		}
//	}
//	if (i == a) {
//		printf("该数字是素数");
//	}
//}
//int main() {
//	int x = 0;
//	printf("请输入一个数字>");
//	scanf("%d", &x);
//	sushu(x);
//	return 0;
//
//}
//int half_search(int x,int arr1[],int sz) {
//	int left = 0;
//	int right = sz;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (x < arr1[mid]) {
//			right = mid - 1;
//		}
//		else if (x > arr1[mid]) {
//			left = left + 1;
//		}
//		else {
//			return 1;
//			break;
//		}
//	}
//	if (left > right)
//		return 0;
//
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int a = 0;
//	printf("输入一个数字》");
//	scanf("%d", &a);
//	int sz= sizeof(arr) / sizeof(arr[0]);
//	if (half_search(a,arr,sz) == 1) {
//		printf("我们找到了这个数字\n");
//	}
//	else
//		printf("我们没有在这个数组里找到输入的数字");
//	return 0;
//}
//


