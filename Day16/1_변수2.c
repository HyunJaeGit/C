#include<stdio.h>

void func() {
	int n1 = 10;			// 지역변수 : 함수가 끝나면 사라진다
	static int n2 = 10;		// 정적변수 : 프로그램이 끝나면 사라진다

	n1++;
	n2++;

	printf("n1 = %d, n2 = %d\n", n1, n2);
}

int main() {

	for (int i = 0; i < 5; i++) {
		func();
	}

	// m2 = 100;
	// - 정적 변수는 해당 영역에서만 사용가능

}