#include<stdio.h>

int main() {
	// 1. ������ 2���� ���� �ݺ����� ���. (x1 ~ x9������)
	// 2. 1���� ��ø �ݺ����� ��ȯ �� 2���� 8�� ���
	// 3. 2���� ���� �����ؼ� 2�� ~ 9�ܱ��� ���

	for (int i = 2; i <= 9; i++) {
		printf("--- %d�� ---\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	// 4. �������� ���
	for (int i = 9; i >= 2; i--) {
		for (int j = 9; j >= 1; j--) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}