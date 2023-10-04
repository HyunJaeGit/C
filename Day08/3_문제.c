#include<stdio.h>

int main() {
	// 아래 문제들은 for를 활용해서 풀어주세요
	// 1. 정수를 입력 받아서 1 ~ n까지 일렬로 출력
	int n, sum = 0, fac = 1;

	printf("1. 정수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
		sum += i;
		fac *= i;
	}
	printf("\n\n");

	// 2. 정수를 입력 받아서 n ~ 1까지 일렬로 출력
	for (int i = n; i >= 1; i--) {
		printf("%d ", i);
	}
	printf("\n\n");

	// 3. 정수를 입력 받아서 1 ~ n까지 합계를 출력
	printf("누적합 : %d\n", sum);

	// 4. 정수를 입력 받아서 1 ~ n까지 누적곱(= factorial)을 출력
	printf("누적곱 : %d\n", fac);

}