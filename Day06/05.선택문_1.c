#include<stdio.h>

//선택문 : 조건문이 일종으로, 조건이 아닌 선택한 값에 따라서 코드를 분기

int main() {
	int menu;

	printf("정수 입력 (1 ~ 3)");
	scanf_s("%d", &menu);

	switch (menu) {		// switch (값) : 값은 정수만 가능
	case 1 :
		printf("1번 선택~\n");
		break;			// break : 제어문을 '즉시' 탈출

	case 2 :
		printf("2번 선택~\n");
		break;

	case 3 :
		printf("3번 선택~\n");
		break;

	default :
		printf("없는 메뉴입니다\n");

	}

	printf("종료~\n");

	//if (menu == 1);			-> if문으로 대체가능( switch가 속도가 조금더 빠름)
	//else if (menu == 2);		-> BUT, 단일조건이아닌 menu >=20 이런식의 범위조건을 못함
	//else if (menu == 3);
	//else


}