#include<stdio.h>

int main() {
	// 중첩 조건문 : 조건문 안에 또 조건문을 구성하는 방식
	// - 세부적인 조건 판별에 사용할 수 있다
	// - 단, 너무 남용시 가독성이 매우 떨어질 수 있으니 주의

	int n;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	if (n % 2 == 0) {
		printf("짝수\n");

		if (n % 3 == 0) {
			printf("짝수이며 3의 배수\n");
		}
		else {
			printf("짝수이지만 3의 배수는 아님\n");
		}
	}
	else {
		printf("홀수\n");

		// 홀수이며 3의 배수와 아닌것을 구분해서 출력
		if (n % 3 == 0) {
			printf("홀수이며 3의 배수\n");
		}
		else {
			printf("홀수이지만 3의 배수는 아님\n");
		}
	}
}