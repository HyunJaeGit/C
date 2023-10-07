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
	// 1. 1 ~ n까지의 합계를 반환
	int sum = total(5);

	printf("sum = %d\n", sum);		// 15
	printf("total(10) = %d\n\n", total(10));	// 55


	// 2. 1 ~ n까지의 누접곱을 반환
	int fac = factorial(5);

	printf("fac = %d\n", fac);		// 120
	printf("factorial(10) = %d\n\n", factorial(10));		// 약 360만


	// 3. 세 정수 중 최대값을 반환
	int max = maximum(10, 30, 20);

	printf("max = %d\n", max);		// 30
	printf("maximum(70, 50, 90) = %d\n\n", maximum(70, 50, 90));	// 90


	// 4. 정수를 전달하면 정수를 거꾸로 뒤집어서 반환
	int rev = reverse(123);

	printf("rev = %d\n", rev);		// 321
	printf("reverse(5678) = %d\n", reverse(5678));	// 8765
}