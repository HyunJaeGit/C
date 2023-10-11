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
	// 1. �л� 5���� ������ ������ �迭�� ����
	int scores[MAX] = { 0 };

	// 2. 1���� �迭�� ������ ������� �Է� �޴´�
	for (int i = 0; i < MAX; i++) {
		printf("%d��° ���� : ", i + 1);
		scanf_s("%d", &scores[i]);
	}
	printf("\n");

	// 3. �л��� ������ �Ϸķ� ���
	printScores(scores, MAX);

	// 4. �л��� ������ �հ�/����� ���
	int sum = total(scores, MAX);

	printf("�հ� : %d (%.1lf)\n", sum, sum / (double)MAX);

	// 5. �ջ��� ���� �� 1��� �õ� ������ ���
	int max = maximum(scores, MAX);
	int min = minimum(scores, MAX);

	printf("1�� : %d, �õ� : %d\n", max, min);
}