#include<stdio.h>

// 포인터 변수 : 주소를 저장하는 변수
// 이중 포인터 변수 : '포인터 변수의 주소'를 저장하는 변수

int main() {
	int n = 10;
	int* p = &n;		// p -> n
	int** pp = &p;		// pp -> p

						// 즉, pp -> p -> n

	printf("n = %d\n", n);
	printf("p = %p\n", p);
	printf("pp = %p\n\n", pp);

	printf("*p = %d\n", *p);
	printf("*pp = %p\n\n", *pp);

	printf("**pp = %d\n", **pp);
}