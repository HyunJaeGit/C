#include<stdio.h>

int main() {
	// 2_Quiz4.c 확장
	// - 엘리베이터를 3대로 지정해서 풀어보세요

	int A = 5, B = 7, C = 9;
	int cur;

	printf("현재 층 입력 : ");
	scanf_s("%d", &cur);

	int disA = cur - A;
	int disB = cur - B;
	int disC = cur - C;

	// 절대값
	if (disA < 0) { disA *= -1; }
	if (disB < 0) { disB *= -1; }
	if (disC < 0) { disC *= -1; }

	printf("층 수 차이) A : %d, B : %d, C : %d\n", disA, disB, disC);

	if (disA < disB & disA < disC) {
		printf("A를 호출합니다.\n");
	}
	else 
		if(disB < disA & disB < disC) {
			printf("B를 호출합니다.\n");
	}
	else {
		printf("C를 호출합니다.\n");
	}
}