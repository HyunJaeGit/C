#include<stdio.h>

int main() {
	// ���� ���� ������ : ��� + ����
	// ���� : +=, -=, /= , %=

	int n = 10;

	printf("n + 2 = %d\n", n + 2);
	printf("n= %d\n\n", n);

	n += 2; // n = n +2
	printf("n= %d\n\n", n);
	n -= 5;
	printf("n= %d\n\n", n);
	n *= 3;
	printf("n= %d\n\n", n);
	n /= 2;
	printf("n= %d\n\n", n);
	n %= 6;
	printf("n= %d\n\n", n);

	int a = 7, b = 1, c = 2;

	a -= b *= c += 1;

	printf("a= %d, b = %d, c = %d \n\n", a, b, c);


}