#include<stdio.h>

int total(int n) {
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	
	return sum;
}

int factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;
}

int maximum(int n1, int n2, int n3) {
	int max = n1;

	if (max < n2) { max = n2; }
	if (max < n3) { max = n3; }

	return max;
}

int reverse(int n) {
	int result = 0;

	while (n != 0) {
		result = result * 10 + n % 10;
		n /= 10;
	}

	return result;
}

int main() {
	// 1. 1 ~ n������ �հ踦 ��ȯ
	int sum = total(5);

	printf("sum = %d\n", sum);		// 15
	printf("total(10) = %d\n\n", total(10));	// 55


	// 2. 1 ~ n������ �������� ��ȯ
	int fac = factorial(5);

	printf("fac = %d\n", fac);		// 120
	printf("factorial(10) = %d\n\n", factorial(10));		// �� 360��


	// 3. �� ���� �� �ִ밪�� ��ȯ
	int max = maximum(10, 30, 20);

	printf("max = %d\n", max);		// 30
	printf("maximum(70, 50, 90) = %d\n\n", maximum(70, 50, 90));	// 90


	// 4. ������ �����ϸ� ������ �Ųٷ� ����� ��ȯ
	int rev = reverse(123);

	printf("rev = %d\n", rev);		// 321
	printf("reverse(5678) = %d\n", reverse(5678));	// 8765
}