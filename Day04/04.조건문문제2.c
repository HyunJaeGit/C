#include<stdio.h>

int main() {
	// 문제 2. 절대값을 구하는 프로그램을 작성하시오

	int num;
	int num2;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	num2 = (-1) * num;

	if (num >= 0) {
		printf("절댓값은 %d", num);
	}
	else {
		printf("젋댓값은 %d", num2);
	}
	printf("입니다");
}