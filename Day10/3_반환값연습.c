#include<stdio.h>

double circle(double r) {
	
	double circle = (r * r) * (3.14);

	return (r * r) * (3.14);
	// - return���� ������ �ۼ��ص� �ȴ�
	// - ��, return ���� �� �ϳ��� ���� ����
	

}

int main() {
	// ������(r, double)�� �����ϸ� �� ���̸� ��ȯ�ϴ� �Լ��� ����
	// ��, �������� 3.14�� ����Ѵ�.

	double result = circle(6.7);

	printf("result = %.2lf\n", result);


}