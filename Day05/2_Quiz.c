#include<stdio.h>

int main() {
	// ���ǹ� PDF 17p)
	// ����1)

	int kor, eng, mat, sum;
	double avg;

	printf("�� �� �� : ");
	scanf_s("%d %d %d", &kor, &eng, &mat);

	sum = kor + eng + mat;
	avg = sum / 3.0;

	printf("�հ� : %d (%.1lf)\n", sum, avg);

	// ���
	char rank;

	if (avg >= 90)		{ rank = 'A'; }
	else if (avg >= 80) { rank = 'B'; }
	else if (avg >= 70) { rank = 'C'; }
	else if (avg >= 60) { rank = 'D'; }
	else				{ rank = 'F'; }

	printf("%c ����Դϴ�~\n", rank);
}