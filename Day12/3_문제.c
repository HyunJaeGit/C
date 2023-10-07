#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

int main() {
	// 1. 10개짜리 정수형 배열을 선언한다
	int arr[MAX] = { 0 };

	// 2. 1번의 배열에 순서대로 랜덤값을 채워 넣는다
	// ※ 랜덤의 범위는 1 ~ 50
	int sum = 0;
	srand(time(NULL));

	for (int i = 0; i < MAX; i++) {
		arr[i] = rand() % 50 + 1;
		sum += arr[i];	// ※ 5번 답
	}

	// 3. 1번의 배열을 일렬로 출력한다
	for (int i = 0; i < MAX; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 4. 1번의 배열을 역순으로 출력한다
	for (int i = MAX - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 5. 1번의 배열 요소들의 합계를 출력한다
	printf("합계 : %d\n", sum);

}