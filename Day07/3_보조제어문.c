#include<stdio.h>

int main() {
	// 보조 제어문
	// 1. break

	for (int i = 1; i <= 10; i++) {
		if(i == 5) {
			break;			// 제어문을 '즉시' 종료

		}
		
		printf("%d ", i);
	}
	printf("\n");

	// 2. continue

	for (int i = 1; i <= 10; i++) {
		if (i == 5) {
			continue;			// 제어문을 '즉시' 처음으로 돌린다.
								// 즉 i =5일때 즉시 처음으로 돌리고 증감한다. (제외시킬때 주로 사용)

		}

		printf("%d ", i);
	}
	printf("\n");


	// ex) 짝수만 실행

	for (int i = 1; i <= 10; i++) {
		if (i % 2) {
			continue;			

		}

		printf("%d ", i);
	}
	printf("\n");


}