#include<stdio.h>

int main() {
	// 1. 이름, 혈액형, 나이, 주소를 입력 받을 변수를 선언
	// 단, 혈액형은 char로 생성

	char name[10];
	char blood;
	int age;
	char address[50];

	// 2. 1번의 변수에 입력문으로 입력 받는다
	// ※ 버퍼 문제가 발생할텐데 어제 내용을 잘 생각해 보세요

	printf("이름 : ");
	scanf_s("%s", name, 10);

	rewind(stdin);

	printf("혈액형 : ");
	scanf_s("%c", &blood);

	printf("나이 : ");
	scanf_s("%d", &age);

	rewind(stdin);

	printf("주소 : ");
	scanf_s("%[^\n]", address, 50);

	//%ㅊdhk %[^\n]는 이전의 엔터값을 데이터로 인식 하여 이전값이 밀려들어가기때문에 rewind(stdin)로 버퍼를 초기화
	
	// 3. 입력 받은 내용은 아래와 같이 출력
	// 결과)
	// 이름 : 홍길동 (22세, O형)
	// 주소 : 부산 광역시 해운대구 센텀

	printf("\n이름 : %s (%d세, %c형)\n", name, age, blood);
	printf("주소 : %s\n", address);

	
}