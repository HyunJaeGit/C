#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int absolute(int n) {
	if (n < 0) { return -n; }

	return n;
}

int main() {
	// ����1)
	// A, B, C ���������Ͱ� ������ ���� �����ִ�
	// ���� �� ���� �Է� �޾Ƽ� ���� ����� ���������͸� ȣ���Ѵ�
	// ���������� ���� 1 ~ 15�� ���� �ִ�
	srand(time(NULL));

	int A = rand() % 15 + 1;
	int B = rand() % 15 + 1;
	int C = rand() % 15 + 1;
	int cur;

	printf("A = %d, B = %d, C = %d\n>> ", A, B, C);
	scanf_s("%d", &cur);

	int disA = absolute(cur - A);
	int disB = absolute(cur - B);
	int disC = absolute(cur - C);

	// printf("�����, �� �� ���� : %d, %d, %d\n", disA, disB, disC);
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

	printf("%c ���������͸� ȣ���մϴ�\n", name);

}