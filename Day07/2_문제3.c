#include<stdio.h>

int main() {
	// 5. ������ �Է� �޾Ƽ� �� ���� �����(�Ųٷ�) ���
	// ex) �Է� : 123 -> ��� : 321
	// ex) �Է� : 5673 -> ��� : 3765

	int n, rev = 0;

	printf("���� �Է� : ");
	scanf_s("%d", &n);

	while (n != 0) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	printf("�Ųٷ� : %d\n", rev);
}