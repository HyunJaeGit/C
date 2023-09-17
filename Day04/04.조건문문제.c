#include <stdio.h>

int main() {
	// 문제 1. 입력한 데이터가 3의 배수인 경우-> 출력
	int num;
	
	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num % 3 == 0) {
		printf("'%d' (3의 배수입니다.)\n ", num);
	}
	else {
		printf("3의 배수가 아닙니다.");
	}



}