#include<stdio.h>

int main() {
	// 4. 0�� �Է� ������ ���� �л� ������ �Է� �޴´�
	// 0�� �Է� �� �̶����� �Է� �޾Ҵ� �л� �������� �հ� ����� ���
	// ��, ���� ������ 0 ~ 100
	int n, i = 1;
	int sum = 0, count = 0;
	double avg;

	while (1) {
		printf("�л� ���� (0 : ����) ");
		scanf_s("%d", &n);

		if (n == 0) { break; }

		sum += n;	// ���� ����
		count++;	// �Է� Ƚ�� ����
	}

	avg = (double)sum / count;

	printf("���� : %d (%.1lf)\n", sum, avg);
}