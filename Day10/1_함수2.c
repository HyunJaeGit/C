#include<stdio.h>

// 매개변수(= parameter) : 호출시 전달된 값을 저장하는 변수
void hello(int n) {
	for (int i = 1; i <= n; i++) {
		printf("%d : Hello World!!!\n", i);
	}
	printf("\n");
}

int main() {
	
	// 전달인자(= arguments) : 함수 호출시 전달하는 값
	hello(3);

	hello(1);

	hello(10);

	// 주의)
	// 전달인자와 매개변수는 개수 및 자료형을 일치 시킨다
	
	// 1. 전달인자 개수 부족
	// hello();

	// 2. 전달인자 개수 과다 (※ C언어는 실행 되지만 좋지 않은 방식)
	// hello(2, 4);

	// 3. 자료형 불일치 (※ 2번과 동일한 이유)
	// hello(3.14);
}