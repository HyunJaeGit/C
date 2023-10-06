#include<stdio.h>

void printNumber() {
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);
	printf("printNumber(%d) : ", n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n\n");
}


void compare() {
	int n;
	int n2;
	printf("정수(1) 입력 : ");
	scanf_s("%d", &n);
	printf("정수(2) 입력 : ");
	scanf_s("%d", &n2);
	printf("compare(%d, %d) : ", n, n2);

	if (n > n2) {
		printf(" 큰 수 %d", n);
		printf("\n\n");
	}
	else if (n2 > n) {
		printf(" 큰 수 %d", n2);
		printf("\n\n");
	}
	else {
		printf(" 동일한 값");
		printf("\n\n");
	}

}


void divisor() {
	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);
	printf("divisor(%d) : ", n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
		

	}
	printf("\n\n");

}

int main() {
	// 아래 함수들이 실행되게 구현해주세요.
	// 1. 1~ n 까지 일렬로 출력
	printNumber(5); // 1 2 3 4 5
	printNumber(3); // 1 2 3

	// 2. 두 정수 대소 관계를 비교
	compare(5, 6);	// 큰 수 6
	compare(6, 5);	// 큰 수 6
	compare(6, 6);	// 동일한 값


	// 3. 전달한 정수의 약수를 출력
	divisor(6);		// 1 2 3 6
	divisor(7);		// 1 7


}