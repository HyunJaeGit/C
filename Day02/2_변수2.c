#include<stdio.h>

/*
	C언어 표기		자료형		크기
	--------------------------------------
	char			문자			1byte (★)
	short			정수			2byte
	int				정수			4byte (★)
	long long		정수			8byte
	float			실수			4byte
	double			실수			8byte (★)

	※ bit와 byte
	1. bit : 컴퓨터의 최소 데이터 단위. n bit = 2^n
	2. byte : 파일의 최소 단위. 1 byte = 8 bit

	즉, 1 byte = 8 bit = 2^8 = 256
	256가지의 숫자를 표현할 수 있는 크기이다

	※ 2의 승수는 10승까지는 외우자
	승 : 0 1 2 3  4  5  6  7   8   9   10		16
	값 : 1 2 4 8 16 32 64 128 256 512 1024		65536
*/

int main() {
	char ch = 127;
	short sh = 32767;
	int it = 2000000000;
	long long lo = 3000000000;
	float fl = 1.2345678901234567890;
	double db = 1.2345678901234567890;

	printf("ch = %d\n", ch);
	printf("sh = %d\n", sh);
	printf("it = %d\n", it);
	printf("lo = %lld\n", lo);		// %lld는 long 타입의 정수를 출력시 사용

	printf("fl = %f\n", fl);
	printf("db = %.14lf\n", db);	// %lf는 double 타입의 실수를 출력시 사용
}