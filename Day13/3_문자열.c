#include<stdio.h>

int main() {
	// C언어는 문자열 자료형이 없다
	// - char(문자) 타입의 배열을 사용해서 문자열을 저장

	char str1[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char str2[6] = "Hello";

	// ※ \0 (= NULL)은 자동으로 채워지므로 작성하지 않아도 됨
	printf("str1 = %s, str2 = %s\n\n", str1, str2);

	printf("str1[0] = %c, str2[0] = %c\n\n", str1[0], str2[0]);


	// ※ %s는 0번 index부터 \0까지 문자열로 인식
	// 즉, 반복으로 치면 아래와 같다
	for (int i = 0; str1[i] != NULL; i++) {
		printf("%c", str1[i]);
	}
	printf("\n");

}