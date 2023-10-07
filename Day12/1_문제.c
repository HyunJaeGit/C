#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int absolute(int n) {
	if (n < 0) { return -n; }

	return n;
}

int main() {
	// 문제1)
	// A, B, C 엘리베이터가 무작위 층에 멈춰있다
	// 현재 층 수를 입력 받아서 가장 가까운 엘리베이터를 호출한다
	// 엘리베이터 층은 1 ~ 15층 까지 있다
	srand(time(NULL));

	int A = rand() % 15 + 1;
	int B = rand() % 15 + 1;
	int C = rand() % 15 + 1;
	int cur;

	printf("A = %d, B = %d, C = %d\n>> ", A, B, C);
	scanf_s("%d", &cur);

	int disA = absolute(cur - A);
	int disB = absolute(cur - B);
	int disC = absolute(cur - C);

	// printf("디버깅, 층 수 차이 : %d, %d, %d\n", disA, disB, disC);
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

	printf("%c 엘리베이터를 호출합니다\n", name);

}