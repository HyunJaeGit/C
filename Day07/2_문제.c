#include<stdio.h>

int main() {
	// 1. 정수를 입력 받아서 1 ~ n까지 일렬로 출력
	// ex) 입력 : 5 -> 출력 : 1 2 3 4 5
	int n, i = 1, sum = 0;

	printf("1. 정수 입력 : ");
	scanf_s("%d", &n);

	while (i <= n) {
		printf("%d ", i);

		sum += i;	// i값을 sum에 계속 누적
		i++;
	}
	printf("\n");

	// 2. 정수를 입력 받아서 n ~ 1까지 일렬로 출력
	// ex) 입력 : 5 -> 출력 : 5 4 3 2 1
	while (n >= 1) {
		printf("%d ", n);
		n--;
	}

	// 3. 정수를 입력 받아서 1 ~ n까지의 합계를 출력
	// ex) 입력 : 5 -> 출력 : 15
	printf("\n합계 : %d\n", sum);
}