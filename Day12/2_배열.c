#include<stdio.h>

// 변수 : 데이터를 저장하는 공간. 단일값
// 배열 : '같은 자료형'으로 '메모리상 연속'된 공간. 복수값

int main() {
	// 변수
	int n = 10;

	// 배열			0  1  2  3  4 (= index, 순서 번호)
	int arr[5] = { 10,20,30,40,50 };

	printf("n = %d\n", n);
	printf("arr = %p\n\n", arr);		// 배열명은 '메모리 주소'를 저장하고 있다

	// 배열에 저장된 각 데이터를을 요소(= elements)라고 한다
	// - 이 요소에 접근하기 위해선, 배열명과 index가 필요하다
	printf("arr[0] = %d\n", arr[0]);
	printf("arr[4] = %d\n\n", arr[4]);

	// ※ 범위를 넘는 참조는 매우 좋지 않은 행위
	// ※ 다른 언어는 보통 에러를 띄우지만 C언어는 실행이 되므로 더욱 주의
	// printf("arr[5] = %d\n", arr[5]);


	// 배열과 가장 자주 사용되는 반복문은 for문
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}