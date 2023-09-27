#include<stdio.h>

int main() {
	// 2_Quiz4.c 확장
	// - 엘리베이터를 3대로 지정해서 풀어보세요
	int A = 5, B = 7, C = 9;
	int cur;

	printf("현재 층? ");
	scanf_s("%d", &cur);

	int disA = cur - A;
	int disB = cur - B;
	int disC = cur - C;

	if (disA < 0) { disA *= -1; }
	if (disB < 0) { disB *= -1; }
	if (disC < 0) { disC *= -1; }

	int min = disA;
	char name = 'A';

	if (min > disB) {
		min = disB;
		name = 'B';
	}

	if (min > disC) {
		min = disC;
		name = 'C';
	}

	printf("가장 가까운 %c(%d)를 호출\n", name, min);
}