#include<stdio.h>
#include<stdlib.h>

int main() {
	// 1. 정수형(int) 동적 할당 공간을 2개 할당 받는다.

	int* a = (int*)malloc(4);		// a -> [동적]
	int* b = (int*)malloc(4);		// b -> [동적]

	


	// 2. 1번에 생성한 '동적 할당 공간'에 scanf_s()를 사용해서 값을 입력받는다.
	printf("정수1 입력 : ");
	scanf_s("%d", a);				// scanf("서식문자", 주소);
									// - 지정 주소를 찾아가서 값을 채운다. (& 앤퍼센트는 주소를 참조하는 기호 그래서 동적할당일때는 생략)
	printf("정수2 입력 : ");
	scanf_s("%d", b);

	printf("*a, *b = %d, %d\n", *a, *b);

	// 3. 입력 받은 두 정수의 합계를 화면에 출력

	printf("\n %d + %d = %d \n", *a, *b, *a + *b);



}