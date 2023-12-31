#include<stdio.h>

// 형변환 (casting) : 데이터의 타입. 즉, 자료형을 변환하는 작업
// 1. 자동 형변환 : 서로 다른 타입을 연산시 자동으로 발생
// 2. 강제 형변환 : 개발자가 직접 지정한 타입으로 변환

int main() {
	// 연산이란 서로 같은 타입일때 연산이 가능하다
	// - 아래는 double + double이므로 연산 가능
	printf("10.0 + 3.14 = %.2lf\n", 10.0 + 3.14);

	// 아래 연산은 사람에겐 매우 당연하지만 컴퓨터는 아니다
	// - 왜? int + double이라 타입이 달라 연산이 원래는 불가능하다
	printf("10 + 3.14 = %.2lf\n", 10 + 3.14);

	// 원리)
	// 1. int(10) + double(3.14) --> 타입이 다르다
	// 2. double(10.0) + double(3.14) --> 타입을 맞춘다 (이때, 표현 범위가 큰쪽으로 변환)
}