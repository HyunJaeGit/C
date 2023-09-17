#include<stdio.h>

int main() {
	// else if : if의 보조 구문, 다중 조건을 처리할 때 사용
	// - 위의 조건이 거짓이면 조건식을 검사
	// - 차미면 종속 문장을 수행, 거짓이면 다음으로

	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("성인 ");

	}
	else if (age >= 17) {
		printf("고등학생");
	}
	else if (age >= 14) {
		printf("중학생");
	}
	else {
		printf("초등학생");
	}

	printf("입니다. \n");

}