#include<stdio.h>

int main() {
	// 논리 연산자 : 참/거짓을 연산
	// 종류 : &&, || , !

	// 1. && : and, 양쪽 모두가 참이면 결과가 참
	// ( 다른 말로 곱(x) 연산이라고 한다 )
	printf("True AND True 결과 : %d\n", 1 && 1);
	printf("True AND True 결과 : %d\n", 1 && 0);
	printf("True AND True 결과 : %d\n", 0 && 1);
	printf("True AND True 결과 : %d\n", 0 && 0);
	printf("\n");

	// 1. || : OR, 양쪽 모두가 거짓이면 결과가 거짓
	// ( 다른 말로 합(+) 연산이라고 한다 )
	printf("True OR True 결과 : %d\n", 1 || 1);
	printf("True OR True 결과 : %d\n", 1 || 0);
	printf("True OR True 결과 : %d\n", 0 || 1);
	printf("True OR True 결과 : %d\n", 0 || 0);
	printf("\n");

	// 1. ! : NOT, 참을 거짓으로 거짓을 참으로 바꿔
	// ( 다른 말로 부정/반전 연산이라고 한다 )
	printf("NOT True 결과 : %d\n", !1);
	printf("NOT AND True 결과 : %d\n", !0);
	printf("\n");
}