#include<stdio.h>

int main() {
	// 지역 변수 : 특정 영역 안에 작성된 변수를 의미
	// - 해당 영역 안에서만 사용 가능하며
	// - 해당 영역이 끝나면 메모리에서 제거된다

	for (int i = 1; i <= 5; i++) {
		printf("%d : Hello World!!!\n", i);
	}

	// printf("반복 후 i = %d\n", i);
	// - i는 현재 for문 안에서 생성
	// - 즉, for문이 끝나면 사라지고 없다
}