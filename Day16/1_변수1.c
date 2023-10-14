#include<stdio.h>

// 지역변수(local variable) : 특정 영역에서 생성되며, 그 영역이 끝나면 메모리에서 제거
// 전역변수(global variable) : 영역 외부에 생성되며, 프로그램 실행시 생성되고 프로그램이 종료되면 제거
// 정적변수(static variable) : 프로그램 실행시 생성, 프로그램 종료시 제거. 단, 특정 영역에서만 사용


int n2 = 20;		// 전역변수 
					// - 전역 변수는 어떠한 함수에서든 접근이 가능하다( = 공유)


void func() {
	int n3 = 30;	// func의 지역변수

	n2 = 200;

	printf("n3 = %d, n2 = %d\n", n3, n2);
}


int main() {
	int n1 = 10;	// main의 지역변수
					// - main내에서만 사용가능, 다른 함수에서는 접근 불가능
					// - 단, 포인터로 주소를 알면 접근 가능
	printf("n1 = %d, n2 = %d\n", n1, n2);
	// printf("n3 = %d\n", n3);
	// - func의 지역변수는 main에서 접근할 수 없고 반대도 마찬가지

	func();

	printf("n1 = %d, n2 = %d\n", n1, n2);
}