#include<stdio.h>

int isPrime(int n) {
	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}

	if (count == 2) { return 1; }

	return 0;
}

int main() {
	// 1. 소수를 판별하는 함수를 작성
	// 소수가 맞으면 1, 소수가 아니면 0을 반환하게 한다

	int prime = isPrime(6);

	printf("prime = %d\n", prime);	// 0
	printf("isPrime(7) = %d\n\n", isPrime(7));	// 1


	// 2. 1번에서 작성한 함수를 활용해서 1 ~ 1000 사이의 소수를 출력
	int count = 0;

	for (int i = 1; i <= 1000; i++) {
		if (isPrime(i)) {
			printf("%3d ", i);
			count++;

			if (count % 10 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n");


}