#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	// 문제2)
	// Up/Down 게임 작성
	// 1. 랜덤으로 숫자 하나를 뽑아서 저장한다 (범위는 1 ~ 100)
	// 2. 사용자에게 뽑은 숫자는 보여주지 않고 값을 입력 받는다
	// 3. 값이 다르면 숫자와 차이를 Up 혹은 Down으로 알려주고 다시 값을 입력 받는다
	// 4. 입력한 값이랑 뽑아 놓은 값이랑 같으면 '정답'을 출력 후 종료. 입력한 횟수도 출력
	srand(time(NULL));
	int answer = rand() % 100 + 1;
	int num = 1, count = 0;

	while (num != answer) {
		// printf("디버그 : %d\n", answer);

		printf("정답 : ");
		scanf_s("%d", &num);

		if (num < answer) {
			printf("UP\n\n");
		}
		else if (num > answer) {
			printf("DOWN\n\n");
		}

		count++;
	}

	printf("정답입니다 (%d회)\n", count);
}