#include<stdio.h>


int main() {
	
	// else : if의 보조 구문, 위의 조건이 거짓이면 종속문장을 수행
	// - 보조 구문이므로 단독으론 사용 불가능

	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("성인 ");
	}
	else {
		printf("미성년자 ");
	}


	printf("입니다\n");
}

// 흐름)
// 이전 -> (if ~ else) -> 다음