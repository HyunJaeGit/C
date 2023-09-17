#include<stdio.h>

int main() {
	// 비교 연산자 : 데이터의 대소관계를 비교
	// 종류 : <, >, <=, >=, ==, !=
	// #비교 결과는 1(True), 0(False)으로 얻어진다

	int n = 10;

	printf("n < 10 결과 %d\n", n < 10);
	printf("n > 5 결과 %d\n", n > 5);
	printf("n <= 10 결과 %d\n", n <= 10);
	printf("n >= 10 결과 %d\n", n >= 5);
	printf("n == 10 결과 %d\n", n == 11); // 같으면 참, 다르면 거짓 (일치 여부)
	printf("n != 11 결과 %d\n", n != 11); // 다르면 참, 같으면 거짓 (중복 여부)

	// # 비교 결과는 정수 (0,1) 이므로 변수에 저장 가능

	int result = (n == 10);
	// int result = 1;
	printf("result = %d\n", result);

}