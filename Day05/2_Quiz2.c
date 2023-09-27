#include<stdio.h>

int main() {
	// 조건문 PDF 17p)
	// 문제2)
	int disk = 5000;		// 디스켓 가격
	int n, total;			// 구매 개수, 총액

	printf("디스켓 구매 개수? ");
	scanf_s("%d", &n);

	total = disk * n;

	if (n >= 100) {
		total *= 0.88;
	}
	else if (n >= 10) {
		total *= 0.9;
	}

	printf("총액 : %d원\n", total);
}