#include<stdio.h>

int main() {
	// ��Ư�� Ƚ�� �ݺ��� '���� �ݺ�'���·� ����� ���� �ִ�
	int n;

	while (1) {
		printf("���� �Է� (0 : ����) ");
		scanf_s("%d", &n);

		if (n == 0) {
			break;		// ����� '���' ����
		}

		printf("n = %d\n\n", n);
	}
}