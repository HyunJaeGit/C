#include<stdio.h>

int main() {
	// ���ǹ� PDF 17p)
	// ����2)
	int disk = 5000;		// ���� ����
	int n, total;			// ���� ����, �Ѿ�

	printf("���� ���� ����? ");
	scanf_s("%d", &n);

	total = disk * n;

	if (n >= 100) {
		total *= 0.88;
	}
	else if (n >= 10) {
		total *= 0.9;
	}

	printf("�Ѿ� : %d��\n", total);
}