#include<stdio.h>

int main() {
	// ���ǹ� PDF 19p)
	// ����4)
	int A = 5, B = 7;
	int cur;

	printf("���� ��? ");
	scanf_s("%d", &cur);

	int disA = cur - A;
	int disB = cur - B;

	// ���밪
	if (disA < 0) { disA *= -1; }
	if (disB < 0) { disB *= -1; }

	printf("�� �� ����) A : %d, B : %d\n", disA, disB);

	if (disA < disB) {
		printf("A�� ȣ�� �մϴ�\n");
	}
	else {
		printf("B�� ȣ�� �մϴ�\n");
	}
}