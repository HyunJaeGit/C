#include<stdio.h>

int main() {
	// 1. 주어진 정수를 가지고 짝수/홀수를 구분해서 출력
	int n1 = 10, n2 = 11;

	printf("%d는 %s\n", n1, (n1 % 2 == 0) ? " 짝수 " : " 음수 ");
	printf("%d는 %s\n", n2, (n2 % 2 == 0) ? " 짝수 " : " 음수 ");
	printf("");

	// 2. 주어진 정수를 절대값을 출력
	int n3 = 10, n4 = -10;

	n3 = (n3 < 0) ? -n3 : n3;
	n4 = (n4 < 0) ? -n4 : n4;

	printf("\nn3= %d, n4 = %d\n", n3, n4);

	// 3. 주어진 정수가 3과 5의 공배수인지 판별
	int n5 = 15, n6 = 12;

	int result5 = (n5 % 3 == 0 && n5 % 5 == 0);
	int result6 = (n6 % 3 == 0 && n6 % 5 == 0);

	printf("%d는 %s\n", n2, result5 ? " 공배수 " : " 공배수아님 ");
	printf("%d는 %s\n", n2, result6 ? " 공배수 " : " 공배수아님 ");

}