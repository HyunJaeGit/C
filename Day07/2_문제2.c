#include<stdio.h>

int main() {
	// 4. 0을 입력 받을때 까지 학생 점수를 입력 받는다
	// 0을 입력 후 이때까지 입력 받았던 학생 점수들의 합계 평균을 출력
	// 단, 점수 분포는 0 ~ 100
	int n, i = 1;
	int sum = 0, count = 0;
	double avg;

	while (1) {
		printf("학생 점수 (0 : 종료) ");
		scanf_s("%d", &n);

		if (n == 0) { break; }

		sum += n;	// 점수 누적
		count++;	// 입력 횟수 증가
	}

	avg = (double)sum / count;

	printf("총합 : %d (%.1lf)\n", sum, avg);
}