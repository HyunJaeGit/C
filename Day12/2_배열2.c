#include<stdio.h>

int main() {
	// 배열의 초기화
	// - 초기화를 하지 않으면 공간만 생성되고 그 안엔 '쓰레기 값'이 채워져있다
	// - 초기화를 할때, 공간 개수 보다 적게 초기화 하면 남는 공간은 0으로 채워진다

	int arr[5];

	arr[1] = 5;

	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");


	int arr2[5] = { 1, 9, 2 };

	for (int i = 0; i < 5; i++) {
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
}