#include<stdio.h>

int main() {
	// 다른 타입의 배열
	// 1. 문자 배열 : 하나씩 작성하기 불편하기 때문에 ""(쌍따옴표)로 묶을 수 있다
	char chs1[6] = { 'h','e','l','l','o' };
	char chs2[6] = "hello";	

	printf("chs1[0] = %c, chs2[0] = %c\n", chs1[0], chs2[0]);
	printf("chs1 = %s, chs2 = %s\n\n", chs1, chs2);
	// - %s는 0번 index에서 부터 '\0' (= NULL)이 나올때 까지 문자열로 인식

	// 2. 정수 배열
	short shs[3] = { 10, 20, 30 };
	int its[2] = { 100, 200 };

	printf("shs[1] = %d, its[0] = %d\n\n", shs[1], its[0]);

	// 3. 실수 배열
	float fls[2] = { 1.2, 5.9 };
	double dbs[4] = { 5.5, 4.4, 5.1, 3.9 };

	printf("fls[0] = %.1f, dbs[2] = %.1lf\n", fls[0], dbs[2]);
}