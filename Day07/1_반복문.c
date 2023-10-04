#include<stdio.h>

int main() {
	// 반복문 while : 조건이 참이면 종속문장을 수행. 종속문장이 끝나면 다시 처음으로

	int i = 1;			// 초기값

	while (i <= 5) {	// 조건식
		printf("%d : Hello World!!!\n", i);
		i++;			// 증감식
	}

	printf("반복 후 i = %d\n", i);
}