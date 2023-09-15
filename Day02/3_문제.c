#include<stdio.h>

int main() {
	// 1. 이름, 나이, 키, 혈액형을 저장할 변수를 선언
	// 단, 혈액형은 char로 선언
	char name[10] = "박수진";
	int age;
	double height;
	char blood;

	// 2. 1번에 선언한 변수에 값을 채운다
	// 단, 혈액형은 2자리가 들어갈 수 없어 AB형은 제외
	age = 26;
	height = 162.3;
	blood = 'B';

	// 3. 저장 후 변수를 출력하면 아래와 같다
	// 이름 : 박수진 (26세, B형)
	// 신장 : 162.3cm
	printf("이름 : %s (%d세, %c형)\n", name, age, blood);
	printf("신장 : %.1lfcm\n", height);
}