#include<stdio.h>
#define MAX 5

void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int totalArr(int arr[], int n) {
	int result = 0;

	for (int i = 0; i < n; i++) {
		result += arr[i];
	}

	return result;
}

int main() {
	// �迭�� �Լ��� �������ڷ� �� �� �ִ�
	int arr1[MAX] = { 10,50,30,20,40 };
	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printArr(arr1, MAX);
	printArr(arr2, 10);


	// ����) �迭 ����� �հ踦 ��ȯ�ϴ� �Լ��� ���� �ۼ�
	int sum1 = totalArr(arr1, MAX);
	int sum2 = totalArr(arr2, 10);

	printf("\nsum1 = %d\n", sum1);
	printf("sum2 = %d\n", sum2);

}