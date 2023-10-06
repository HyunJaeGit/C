#include<stdio.h>

// 반환값이 없는 함수 : void형 함수
// 반환값이 있는 함수 : 자료형 함수 (활용도가 더 높음)
//
// # 반환값 : 함수가 실행 후 돌려주는 값. 즉, 함수의 결과값


// 1. void( = 없다, 비다)형 함수
// - 그냥 '외부 코드만 실행할 뿐' 결과를 돌려주지 않는다.

void adder1(int n1, int n2) {
	int sum = n1 + n2;

	printf("%d + %d = %d\n", n1, n2, sum);
}


// 2. int(= 정수)형 함수
// - 실행 후 결과로 정수값을 돌려준다.

int adder2(int n1, int n2) {
	int sum = n1 + n2;

	return sum;
}

int main() {

	// 1. void형 함수는 그냥 이름만 작성해서 바로 사용한다
	adder1(3, 7);


	// 2. 반환값이 있는 함수는 '결과값	'이 되돌아 오기 때문에
	int n = adder2(3, 7);	// 2-1. 변수에 저장 받거나
//	int n = 10;


	printf("\nn = %d\n", n);
	printf("adder2(7,1) = %d\n", adder2(7, 1));	// 2-2. 다른 함수의 전달값으로 사용한다
//	printf("adder2(7,1) = %d\n", 8);


	int result = adder2(adder2(5, 3), adder2(8, 4));
//	int result = adder2( 8 , 12 );
//	int result = 20;


	printf("\nresult = %d\n", result);	//20
}