#include<stdio.h>

// 변수(variable) : 데이터를 저장하는 공간. 변하는 수

int main() {
	int n = 10;		// n이라는 공간에 정수 10을 저장
					// ※ 여기서 = 기호는 '대입 연산'이라고 한다 (= 공간에 값을 할당 해줌)

	printf("n = %s\n", "n");	// ""는 문자열 --> 그대로 출력됨
	printf("n = %d\n", n);		// 변수의 이름을 그냥 작성 --> 변수에 저장된 값을 호출

	n = 20;			// 이미 작성한 변수를 재사용시 '이름만' 작성한다

	printf("n = %d\n", n);
}