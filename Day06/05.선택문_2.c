#include<stdio.h>

int main() {
	// switch 문은 범위 조건 처리가 불가능 하거나 비효율적이다.
	int n;

	printf("정수 입력(1 ~ 10) ");
	scanf_s("%d", &n);

	switch (n) {
	case 1: 
	case 3:
	case 5:
	case 7:
	case 9:
		printf("홀수\n");
		break;

	case 2:	case 4:	case 6:	case 8:	case 10:
		//if ( n %2 == 0 ) -> if문 쓰면 쉽게 짝수를 해결
		printf("짝수\n");
		break;

	default:
		printf("범위초과\n");


	}




}