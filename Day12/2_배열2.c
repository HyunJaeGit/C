#include<stdio.h>

int main() {
	// �迭�� �ʱ�ȭ
	// - �ʱ�ȭ�� ���� ������ ������ �����ǰ� �� �ȿ� '������ ��'�� ä�����ִ�
	// - �ʱ�ȭ�� �Ҷ�, ���� ���� ���� ���� �ʱ�ȭ �ϸ� ���� ������ 0���� ä������

	int arr[5];

	arr[1] = 5;

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");


	int arr2[5] = { 1, 9, 2 };

	for (int i = 0; i < 5; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
}