#include<stdio.h>

int main() {
	// 1��

	int n;

	printf("�� ��? ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {		// 2. �� �ݺ�
		for (int j = 0; j < n; j++) {	// 1. ��ȿ� �����
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// 2��


	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// 3�� : 2�� ���Ʒ� ����

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");


	// 4�� : 2�� �¿����

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - (i + 1); j++) {
			printf(" ");

		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");


	// 5�� : 4�� ���Ʒ� ����

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");

		}
		for (int j = 0; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");


	// 6�� : �Ƕ�̵� �����


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - (i + 1); j++) {
			printf(" ");

		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}

		printf("\n");
	}
	printf("\n");


	// 7�� : 6���� ���Ʒ� ����

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");

		}
		for (int j = 0; j < 2 * (n - i) - 1; j++) {
			printf("*");
		}


		printf("\n");
	}
	printf("\n");



	// 8 �� : �� ���


	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if ((i == 0 || i == n - 1) || (j == 0 || j == n - 1)) {
				printf("*");

			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}


	// 9�� : +���
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {
			if (i == 2 || j == 2) {
				printf("*");

			}
			else {
				printf(" ");
			}
		}

		printf("\n");
	}



	// 10�� : X���
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j || i + j == n - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}

		}
		printf("\n");
	}
	printf("\n");





}

		



	









	









