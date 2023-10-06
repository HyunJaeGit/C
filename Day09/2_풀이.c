#include<stdio.h>

int main() {
	// 1번

	int n;

	printf("몇 줄? ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {		// 2. 줄 반복
		for (int j = 0; j < n; j++) {	// 1. 행안에 별찍기
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// 2번


	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	// 3번 : 2번 위아래 반전

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");


	// 4번 : 2번 좌우반전

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


	// 5번 : 4번 위아래 반전

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


	// 6번 : 피라미드 별찍기


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


	// 7번 : 6번을 위아래 반전

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



	// 8 번 : ㅁ 찍기


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


	// 9번 : +찍기
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



	// 10번 : X찍기
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

		



	









	









