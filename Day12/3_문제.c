#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

int main() {
	// 1. 10��¥�� ������ �迭�� �����Ѵ�
	int arr[MAX] = { 0 };

	// 2. 1���� �迭�� ������� �������� ä�� �ִ´�
	// �� ������ ������ 1 ~ 50
	int sum = 0;
	srand(time(NULL));

	for (int i = 0; i < MAX; i++) {
		arr[i] = rand() % 50 + 1;
		sum += arr[i];	// �� 5�� ��
	}

	// 3. 1���� �迭�� �Ϸķ� ����Ѵ�
	for (int i = 0; i < MAX; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 4. 1���� �迭�� �������� ����Ѵ�
	for (int i = MAX - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 5. 1���� �迭 ��ҵ��� �հ踦 ����Ѵ�
	printf("�հ� : %d\n", sum);

}