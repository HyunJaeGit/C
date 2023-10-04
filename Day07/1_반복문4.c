#include<stdio.h>

int main() {
	// 불특정 횟수 반복은 '무한 반복'형태로 사용할 수도 있다
	int n;

	while (1) {
		printf("정수 입력 (0 : 종료) ");
		scanf_s("%d", &n);

		if (n == 0) {
			break;		// 제어문을 '즉시' 종료
		}

		printf("n = %d\n\n", n);
	}
}