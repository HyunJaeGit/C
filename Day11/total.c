#include"func.h"

// 함수의 정의부 : 실제 코드가 작성된 곳
int total(int n) {
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}