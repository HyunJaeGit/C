#include<stdio.h>

void upper(char str[]) {
	
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
}

void lower(char str[]) {

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
}

int main() {
	// 대 <-> 소문자 변환
	// 1. C언어는 ASCII라는 문자코드를 사용한다
	// 2. A = 65, a = 97에 해당한다
	// 3. 번호순대로 알파벳이 할당되어 있고
	// 4. 대/소문자는 모두 서로 32만큼 차이를 가진다
	char str[20] = "HeLlO WoRlD";

	upper(str);
	printf("str = %s\n", str);	// HELLO WORLD;

	lower(str);
	printf("str = %s\n", str);	// hello world;
}