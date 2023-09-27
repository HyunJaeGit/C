#include<stdio.h>

int main() {
	// 조건문 PDF 17p)
	// 문제1)

	int kor, eng, mat, sum;
	double avg;

	printf("국 영 수 : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);

	sum = kor + eng + mat;
	avg = sum / 3.0;

	printf("합계 : %d (%.1lf)\n", sum, avg);

	// 등급
	char rank;

	if (avg >= 90)		{ rank = 'A'; }
	else if (avg >= 80) { rank = 'B'; }
	else if (avg >= 70) { rank = 'C'; }
	else if (avg >= 60) { rank = 'D'; }
	else				{ rank = 'F'; }

	printf("%c 등급입니다~\n", rank);
}