#include<stdio.h>

int main() {
	// 2_Quiz4.c Ȯ��
	// - ���������͸� 3��� �����ؼ� Ǯ�����
	int A = 5, B = 7, C = 9;
	int cur;

	printf("���� ��? ");
	scanf_s("%d", &cur);

	int disA = cur - A;
	int disB = cur - B;
	int disC = cur - C;

	if (disA < 0) { disA *= -1; }
	if (disB < 0) { disB *= -1; }
	if (disC < 0) { disC *= -1; }

	int min = disA;
	char name = 'A';

	if (min > disB) {
		min = disB;
		name = 'B';
	}

	if (min > disC) {
		min = disC;
		name = 'C';
	}

	printf("���� ����� %c(%d)�� ȣ��\n", name, min);
}