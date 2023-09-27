#include<stdio.h>

int main() {
	// 조건문 PDF 19p)
	// 문제4)
	int A = 5, B = 7;
	int cur;

	printf("현재 층? ");
	scanf_s("%d", &cur);

	int disA = cur - A;
	int disB = cur - B;

	// 절대값
	if (disA < 0) { disA *= -1; }
	if (disB < 0) { disB *= -1; }

	printf("층 수 차이) A : %d, B : %d\n", disA, disB);

	if (disA < disB) {
		printf("A를 호출 합니다\n");
	}
	else {
		printf("B를 호출 합니다\n");
	}
}