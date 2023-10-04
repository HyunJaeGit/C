#include<stdio.h>

int main() {
	// 아래 문제들은 for를 활용해서 풀어주세요
	// 1. 정수를 입력 받아서 1 ~ n 까지 일렬로 출력
	// 2. 정수를 입력 받아서 n ~ 1 까지 일렬로 출력
	// 3. 정수를 입력 받아서 1 ~ n 까지 합계로 출력
	// 4. 정수를 입력 받아서 1 ~ n 까지 누적곱( = factorial)으로 출력

	// 문제1)
	int n;
	printf("정수 입력 : ");
	scanf_s("%d", &n);

		for (int i = 1; i <= n; i++) {
			printf("%d", i);
			
	}
		
	printf("\n\n'%d까지 일렬로 출력함.'\n", n);

	// 문제2)
	
	int m;
	printf("정수 입력 : ");
	scanf_s("%d", &m);

	for (int i = m; i >= 1; i--) {
		printf("%d", i);

	}

	printf("\n\n'%d까지 거꾸로 출력함.'\n", m);


	// 문제3)
	int x;
	int sum = 0;
	int fac = 1;

	printf("정수 입력 : ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++) {
		printf("%d", i);
		sum += i;
		fac *= i;

	}

	printf("\n\n'%d까지 합계와 곱으로 출력함.'\n", x);


}