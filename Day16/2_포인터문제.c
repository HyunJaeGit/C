#include<stdio.h>

void myStrcpy(char* dst, char* src) {
	int i;

	for (i = 0; *(src + i) != NULL; i++) {
		*(dst + i) = *(src + i);		// dst[i] = src[i];
	}
	*(dst + i) = *(src + i);
}

void upper(char* str) {
	for (int i = 0; *(str + i) != NULL; i++) {
		if (*(str + i) >= 'a' && *(str + i) <= 'z') {
			*(str + i) -= 32;
		}
	}

}


int main() {
	// 1. strcpy() 함수로 직접 구현
	// - 함수 내에서 [] index대신, 포인터로 작성해 보세요
	char str[10];

	myStrcpy(str, " Hello");
	printf("str = %s\n\n", str);


	// 2. 문자열을 대문자로 변경하는 함수를 구현
	// - 마찬가지로 포인터로 작성
	upper(str);
	printf("str = %s\n", str);

}