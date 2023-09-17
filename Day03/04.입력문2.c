#include<stdio.h>

int main() {
	int it;			// 정수
	double db;		// 실수
	char str[10];	// 문자열
	char ch;		// 문자


	printf("문자 입력 :");
	scanf("%c", &ch);

	printf("정수 입력 :");
	scanf("%d", &it);

	printf("문자 입력 :");
	scanf("%lf", &db);

	printf("문자 입력 :");
	scanf("%s", str);		// 배열은 이름자체가 주소라 &를 붙이지 않는다.

	printf("\n ch = %c, it = %d\n", ch, it);
	printf("\n db = %.2lf, str = %s\n", db, str);

}