#include<stdio.h>

// 반복의 종류
// 1. 지정 횟수 반복 : 횟수가 정해져 있는 반복. ex) 10번, 50번 등
// 2. 불특정 횟수 반복 : 마땅히 횟수가 지정되지 않은 반복. ex) 종료를 누를때 까지

int main() {
	int n = 1;

	while (n != 0) {
		printf("정수 입력 (0 : 종료) ");
		scanf_s("%d", &n);

		printf("n = %d\n\n", n);
	}
}