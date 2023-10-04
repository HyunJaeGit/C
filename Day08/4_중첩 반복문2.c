#include<stdio.h>

int main() {
	// 1. 구구단 2단을 단일 반복으로 출력. (x1 ~ x9까지만)
	// 2. 1번을 중첩 반복으로 변환 후 2단을 8번 출력
	// 3. 2번을 조금 수정해서 2단 ~ 9단까지 출력

	for (int i = 2; i <= 9; i++) {
		printf("--- %d단 ---\n", i);

		for (int j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	// 4. 역순으로 출력
	for (int i = 9; i >= 2; i--) {
		for (int j = 9; j >= 1; j--) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}