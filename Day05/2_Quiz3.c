#include<stdio.h>

int main() {
	// ���ǹ� PDF 18p)
	// ����3)

	int station, total;		// ������ ��, �� �ҿ� �ð�

	printf("�� ������? ");
	scanf_s("%d", &station);

	total = station * 2;

	if (station >= 10) {
		total = station * 4;
	}

	if (total >= 60) {
		int hour = total / 60;
		int miniute = total % 60;

		printf("�� �ҿ� �ð��� %d�ð� %d�� �Դϴ�\n", hour, miniute);
	}
	else {
		printf("�� �ҿ� �ð��� %d�� �Դϴ�\n", total);
	}
}