#include"func.h"

// �Լ��� ���Ǻ� : ���� �ڵ尡 �ۼ��� ��
int total(int n) {
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}

	return sum;
}