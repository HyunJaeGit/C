#include<stdio.h>

int main() {
	// 5. 정수를 입력 받아서 그 수를 뒤집어서(거꾸로) 출력
	// ex) 입력 : 123 -> 출력 : 321
	// ex) 입력 : 5673 -> 출력 : 3765

	int n, rev = 0;

	printf("정수 입력 : ");
	scanf_s("%d", &n);

	while (n != 0) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	printf("거꾸로 : %d\n", rev);
}