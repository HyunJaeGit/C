#include<stdio.h>

// scanf()는 문자열 입력시 길이 검사를 하지않아 취약한 함수
// - 지정 길이보다 긴 길이의 문자열이 입력되면 현재 용량보다 더 넘어서 메모리를 사용하게 됨
// - 다른 프로그램의 데이터를 덮어쓸 우려가 있어 하면 안되는 행위
//
// 이를 대체하기 위하여 visual studio 에서는 scanf_s()라는 함수가 있다.
// - 참고로 scanf_s() 는 표준 함수가 아니라 다른 프로그램을 사용하면 없을 수 있다.

int main() {
	int it;
	double db;
	char ch;
	char str[10];

	printf("문자 입력 :");
	scanf_s("%c", &ch);

	printf("정수 입력 :");
	scanf_s("%d", &it);

	printf("문자 입력 :");
	scanf_s("%lf", &db);

	printf("문자 입력 :");
	scanf_s("%s", str, 10);		// 10개의 문자만 받겠다고 조건을 달아야함.

	printf("\n ch = %c, it = %d\n", ch, it);
	printf("\n db = %.2lf, str = %s\n", db, str);


}