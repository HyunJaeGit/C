#include<stdio.h>

int main() {
	// �Ʒ� �������� for�� Ȱ���ؼ� Ǯ���ּ���
	// 1. ������ �Է� �޾Ƽ� 1 ~ n���� �Ϸķ� ���
	int n, sum = 0, fac = 1;

	printf("1. ���� �Է� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
		sum += i;
		fac *= i;
	}
	printf("\n\n");

	// 2. ������ �Է� �޾Ƽ� n ~ 1���� �Ϸķ� ���
	for (int i = n; i >= 1; i--) {
		printf("%d ", i);
	}
	printf("\n\n");

	// 3. ������ �Է� �޾Ƽ� 1 ~ n���� �հ踦 ���
	printf("������ : %d\n", sum);

	// 4. ������ �Է� �޾Ƽ� 1 ~ n���� ������(= factorial)�� ���
	printf("������ : %d\n", fac);

}