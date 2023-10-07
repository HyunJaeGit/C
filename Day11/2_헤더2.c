#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// 헤더는 이미 만들어져 제공되는 것도 있고
// 개발자가 직접 작성해서 사용할 수도 있다

int main() {
	// stdlib는 다양한 함수르 제공하는 데, 그 중 랜덤을 써본다
	
	srand(time(NULL));

	for (int i = 1; i <= 5; i++) {
		int n = rand();		// rand() : (0 ~ 32,767) 범위의 수를 무작위로 반환

		printf("n = %d\n", n);
	}
	printf("\n");


	// 숫자 범위를 제한하고 싶어
	// 1. 0 ~ 9까지
	for (int i = 1; i <= 5; i++) {
		int n = rand() % 10;

		printf("%d ", n);
	}
	printf("\n");


	// 2. 1 ~ 10까지
	for (int i = 1; i <= 5; i++) {
		int n = rand() % 10 + 1;	// (0 ~ 9) + 1 == 1 ~ 10

		printf("%d ", n);
	}
	printf("\n");


	// 3. 5 ~ 17까지
	// 3-1. 앞의 범위가 0이 되게 뺀다. 0 ~ 12
	// 3-2. 0이되면 범위 구하기가 쉽다. n % 13
	// 3-3. 범위를 구한 후 1번에 뺀 값을 다시 더한다. n % 13 + 5
	for (int i = 1; i <= 5; i++) {
		int n = rand() % 13 + 5;
		
		printf("%d ", n);
	}
	printf("\n");
}