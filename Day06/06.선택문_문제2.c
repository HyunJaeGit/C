#include<stdio.h>

int main() {
	int num1 = 0;
	int num2 = 0;
	int menu;


	printf("정수 두 개를 입력하시오 : ");
	scanf_s("%d %d", &num1, &num2);
	
	printf("1. 덧셈 \n");
	printf("2. 뺄셈 \n");
	printf("3. 곱셈 \n");
	printf("4. 나눗셈 \n");


	printf("\n\n지정된 숫자를 선택하면 숫자에 맞는 연산을 실행 (1~4) \n\n");
	scanf_s("%d", &menu);

	switch (menu) {
	case 1 :
		printf("result = %d\n", (num1 + num2));
		break;

	case 2:
		printf("result = %d\n", (num1 - num2));
		break;

	case 3:
		printf("result = %d\n", (num1 * num2));
		break;

	case 4:
		printf("result = %d\n", (num1 / num2));
		break;



	}


}