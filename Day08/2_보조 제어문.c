#include<stdio.h>

int main() {
	// 보조 제어문
	// 1. break
	for (int i = 1; i <= 10; i++) {
		if (i == 5) {
			break;		// 제어문을 '즉시' 종료
		}

		printf("%d ", i);
	}
	printf("\n");


	// 2. continue
	for (int i = 1; i <= 10; i++) {
		if (i == 5) {
			continue;		// 제어문을 '즉시' 처음으로
		}

		printf("%d ", i);
	}
	printf("\n");
}