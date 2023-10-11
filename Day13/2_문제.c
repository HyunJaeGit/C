#include<stdio.h>
#define MAX 5

void printScores(int scores[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", scores[i]);
	}
	printf("\n");
}

int total(int scores[], int n) {
	int result = 0;

	for (int i = 0; i < n; i++) {
		result += scores[i];
	}

	return result;
}

int maximum(int scores[], int n) {
	int max = 0;

	for (int i = 0; i < n; i++) {
		if (max < scores[i]) {
			max = scores[i];
		}
	}

	return max;
}

int minimum(int scores[], int n) {
	int min = 9999999;

	for (int i = 0; i < n; i++) {
		if (min > scores[i]) {
			min = scores[i];
		}
	}

	return min;
}

int main() {
	// 1. 학생 5명의 점수를 저장할 배열을 선언
	int scores[MAX] = { 0 };

	// 2. 1번의 배열에 점수를 순서대로 입력 받는다
	for (int i = 0; i < MAX; i++) {
		printf("%d번째 점수 : ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	printf("\n");

	// 3. 학생들 점수를 일렬로 출력
	printScores(scores, MAX);

	// 4. 학생들 점수의 합계/평균을 출력
	int sum = total(scores, MAX);

	printf("합계 : %d (%.1lf)\n", sum, sum / (double)MAX);

	// 5. 합생들 점수 중 1등과 꼴등 점수를 출력
	int max = maximum(scores, MAX);
	int min = minimum(scores, MAX);

	printf("1등 : %d, 꼴등 : %d\n", max, min);
}