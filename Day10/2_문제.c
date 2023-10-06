#include<stdio.h>

void printNumber() {
	int n;

	printf("���� �Է� : ");
	scanf_s("%d", &n);
	printf("printNumber(%d) : ", n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n\n");
}


void compare() {
	int n;
	int n2;
	printf("����(1) �Է� : ");
	scanf_s("%d", &n);
	printf("����(2) �Է� : ");
	scanf_s("%d", &n2);
	printf("compare(%d, %d) : ", n, n2);

	if (n > n2) {
		printf(" ū �� %d", n);
		printf("\n\n");
	}
	else if (n2 > n) {
		printf(" ū �� %d", n2);
		printf("\n\n");
	}
	else {
		printf(" ������ ��");
		printf("\n\n");
	}

}


void divisor() {
	int n;

	printf("���� �Է� : ");
	scanf_s("%d", &n);
	printf("divisor(%d) : ", n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
		

	}
	printf("\n\n");

}

int main() {
	// �Ʒ� �Լ����� ����ǰ� �������ּ���.
	// 1. 1~ n ���� �Ϸķ� ���
	printNumber(5); // 1 2 3 4 5
	printNumber(3); // 1 2 3

	// 2. �� ���� ��� ���踦 ��
	compare(5, 6);	// ū �� 6
	compare(6, 5);	// ū �� 6
	compare(6, 6);	// ������ ��


	// 3. ������ ������ ����� ���
	divisor(6);		// 1 2 3 6
	divisor(7);		// 1 7


}