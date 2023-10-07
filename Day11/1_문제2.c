#include<stdio.h>

int isPrime(int n) {
	int count = 0;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}

	if (count == 2) { return 1; }

	return 0;
}

int main() {
	// 1. �Ҽ��� �Ǻ��ϴ� �Լ��� �ۼ�
	// �Ҽ��� ������ 1, �Ҽ��� �ƴϸ� 0�� ��ȯ�ϰ� �Ѵ�

	int prime = isPrime(6);

	printf("prime = %d\n", prime);	// 0
	printf("isPrime(7) = %d\n\n", isPrime(7));	// 1


	// 2. 1������ �ۼ��� �Լ��� Ȱ���ؼ� 1 ~ 1000 ������ �Ҽ��� ���
	int count = 0;

	for (int i = 1; i <= 1000; i++) {
		if (isPrime(i)) {
			printf("%3d ", i);
			count++;

			if (count % 10 == 0) {
				printf("\n");
			}
		}
	}
	printf("\n");


}