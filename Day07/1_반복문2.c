#include<stdio.h>

int main() {
	// 1. 반복으로 구구단 2단을 출력 (단, x1 ~ x9까지)
	// 2. 구문을 입력문으로 전환해서 입력한 구구단이 나오게 한다
	int i = 1, dan;

	printf("몇 단? ");
	scanf_s("%d", &dan);

	while (i <= 9) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}
	printf("\n");

	// 3. 역순으로도 출력
	i = 9;

	while (i >= 1) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i--;
	}
}