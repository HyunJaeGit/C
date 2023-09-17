#include<stdio.h>

// scanf()는 입출력 속도 개선을 위해서 buffer라는 공간을 사용한다.
// - buffer는 데이터를 모아서 전송하기위한 임시 공간
// - buffer 밀어쓰기는 SPACE와 ENTER로 구분
int main() {
	int n1, n2;

	printf(" 두 정수 입력 : ");
	scanf_s("%d %d", &n1, &n2);

	printf("n1 = %d, n2 = %d\n", n1, n2);

	rewind(stdin); // 입력 버퍼를 모두 비워라~

	int n3, n4;

	printf(" 다시 두 정수 입력 :");
	scanf_s("%d %d", &n3, &n4);

	printf("n3 = %d, n4 = %d\n", n3, n4);

}