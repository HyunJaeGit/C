#include<stdio.h>

// ��ȯ���� ���� �Լ� : void�� �Լ�
// ��ȯ���� �ִ� �Լ� : �ڷ��� �Լ� (Ȱ�뵵�� �� ����)
//
// # ��ȯ�� : �Լ��� ���� �� �����ִ� ��. ��, �Լ��� �����


// 1. void( = ����, ���)�� �Լ�
// - �׳� '�ܺ� �ڵ常 ������ ��' ����� �������� �ʴ´�.

void adder1(int n1, int n2) {
	int sum = n1 + n2;

	printf("%d + %d = %d\n", n1, n2, sum);
}


// 2. int(= ����)�� �Լ�
// - ���� �� ����� �������� �����ش�.

int adder2(int n1, int n2) {
	int sum = n1 + n2;

	return sum;
}

int main() {

	// 1. void�� �Լ��� �׳� �̸��� �ۼ��ؼ� �ٷ� ����Ѵ�
	adder1(3, 7);


	// 2. ��ȯ���� �ִ� �Լ��� '�����	'�� �ǵ��� ���� ������
	int n = adder2(3, 7);	// 2-1. ������ ���� �ްų�
//	int n = 10;


	printf("\nn = %d\n", n);
	printf("adder2(7,1) = %d\n", adder2(7, 1));	// 2-2. �ٸ� �Լ��� ���ް����� ����Ѵ�
//	printf("adder2(7,1) = %d\n", 8);


	int result = adder2(adder2(5, 3), adder2(8, 4));
//	int result = adder2( 8 , 12 );
//	int result = 20;


	printf("\nresult = %d\n", result);	//20
}