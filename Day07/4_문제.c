#include<stdio.h>

int main() {
	// �Ʒ� �������� for�� Ȱ���ؼ� Ǯ���ּ���
	// 1. ������ �Է� �޾Ƽ� 1 ~ n ���� �Ϸķ� ���
	// 2. ������ �Է� �޾Ƽ� n ~ 1 ���� �Ϸķ� ���
	// 3. ������ �Է� �޾Ƽ� 1 ~ n ���� �հ�� ���
	// 4. ������ �Է� �޾Ƽ� 1 ~ n ���� ������( = factorial)���� ���

	// ����1)
	int n;
	printf("���� �Է� : ");
	scanf_s("%d", &n);

		for (int i = 1; i <= n; i++) {
			printf("%d", i);
			
	}
		
	printf("\n\n'%d���� �Ϸķ� �����.'\n", n);

	// ����2)
	
	int m;
	printf("���� �Է� : ");
	scanf_s("%d", &m);

	for (int i = m; i >= 1; i--) {
		printf("%d", i);

	}

	printf("\n\n'%d���� �Ųٷ� �����.'\n", m);


	// ����3)
	int x;
	int sum = 0;
	int fac = 1;

	printf("���� �Է� : ");
	scanf_s("%d", &x);

	for (int i = 1; i <= x; i++) {
		printf("%d", i);
		sum += i;
		fac *= i;

	}

	printf("\n\n'%d���� �հ�� ������ �����.'\n", x);


}