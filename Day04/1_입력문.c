#include<stdio.h>

int main() {
	// %d, %lf, %c, %s는 모두 space와 enter가 구분자
	// - 즉, 문자열 입력시 %s를 쓰면 띄어쓰기 포함한 입력은 불가능
	char str1[20];

	printf("문자열 입력 : ");
	scanf_s("%[^\n]", str1, 20);
	// - \n가 아니면 계속 데이터를 가져온다
	// - 즉, space는 구분자가 아니게 되어 한 줄 전체를 가져올 수 있음

	printf("str1 = %s\n", str1);

}