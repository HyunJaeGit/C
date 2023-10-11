#include<stdio.h>
#include<string.h>	// 문자열 관련 함수들이 있다

int main() {
	char str1[20] = "hello world!!!";
	char str2[20];

	// 1. strlen() : String Length. 문자 개수를 반환
	printf("str1의 크기 : %d byte\n", sizeof(str1));
	printf("str1의 문자 개수 : %d 개\n\n", strlen(str1));


	// str2 = str1;
	// - 배열의 이름은 주소다. 즉, 이는 주소를 복사하는 행위
	// - 심지어 배열의 주소는 변경이 불가능하다(= 상수)

	// 2. strcpy() : String Copy, 문자열 복사
	strcpy(str2, str1);

	printf("str1 = %s, str2 = %s\n", str1, str2);

	// ※ strcpy_s()
	strcpy_s(str1, 20, "apple");

	printf("str1 = %s\n\n", str1);


	// 3. strcmp() : String Compare, 문자열 비교
	// 반환값)
	// 0 : 일치
	// 1 : 앞의 문자열이 큼
	// -1 : 뒤의 문자열이 큼

	printf("application VS application : %d\n", strcmp("application", "application"));
	printf("banana VS application : %d\n", strcmp("banana", "application"));
	printf("application VS banana : %d\n", strcmp("application", "banana"));
}