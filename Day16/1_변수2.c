#include<stdio.h>

void func() {
	int n1 = 10;			// �������� : �Լ��� ������ �������
	static int n2 = 10;		// �������� : ���α׷��� ������ �������

	n1++;
	n2++;

	printf("n1 = %d, n2 = %d\n", n1, n2);
}

int main() {

	for (int i = 0; i < 5; i++) {
		func();
	}

	// m2 = 100;
	// - ���� ������ �ش� ���������� ��밡��

}