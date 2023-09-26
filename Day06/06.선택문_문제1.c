#include<stdio.h>

int main() {

	int num;

	printf("몇 번 스위치를 누르시겠습니까?	(1,2,3)\n\n ");
	scanf_s("%d", &num);

	switch (num) {
	case 1:
		printf("전등 ON \n\n");
		break;

	case 2:
		printf("전등 OFF \n\n");
		break;

	case 3:
		printf("전등 고장 \n\n");
		break;

	default :
		printf("스위치 번호 오류\n\n");
	}

	printf("종료합니다.\n");

}