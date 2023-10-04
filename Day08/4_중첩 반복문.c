#include<stdio.h>

int main() {
	// 중첩 반복문 : 반복문 안에 반복문을 구성하는 방식

	for (int i = 1; i <= 3; i++) {		// 바깥 for : 행 반복 
		
		for (int j = 1; j <= 5; j++) {	// 안쪽 for : 열 반복
			printf("%d ", j);
		}

		printf("\n");
	}
}