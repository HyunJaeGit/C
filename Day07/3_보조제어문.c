#include<stdio.h>

int main() {
	// ���� ���
	// 1. break

	for (int i = 1; i <= 10; i++) {
		if(i == 5) {
			break;			// ����� '���' ����

		}
		
		printf("%d ", i);
	}
	printf("\n");

	// 2. continue

	for (int i = 1; i <= 10; i++) {
		if (i == 5) {
			continue;			// ����� '���' ó������ ������.
								// �� i =5�϶� ��� ó������ ������ �����Ѵ�. (���ܽ�ų�� �ַ� ���)

		}

		printf("%d ", i);
	}
	printf("\n");


	// ex) ¦���� ����

	for (int i = 1; i <= 10; i++) {
		if (i % 2) {
			continue;			

		}

		printf("%d ", i);
	}
	printf("\n");


}