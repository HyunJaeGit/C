#include<stdio.h>

int main() {
	// if ~ else
	// if ~ if의 차이

	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("성인	");
	}

	if (age <= 20) {
		printf("미성년자 ");		// 나이입력 : [20]을 입력하면 2개의 if문이 둘다 참으로 실행된다.
	}

	printf("입니다\n");

}

// 흐름)
// 이전 -> (if) -> (if) -> 다음