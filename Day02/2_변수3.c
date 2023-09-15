#include<stdio.h>

// C언어는 문자 체계를 ASCII로 처리한다

int main() {
	// 문자는 char로 처리
	char ch1 = 'A';
	char ch2 = 97;

	printf("ch1 = %c\n", ch1);
	printf("ch1 = %d\n\n", ch1);

	printf("ch2 = %c\n", ch2);
	printf("ch2 = %d\n\n", ch2);

	printf("ch2 - 32 = %c\n", ch2 - 32);
	printf("ch2 - 32 = %d\n", ch2 - 32);
}