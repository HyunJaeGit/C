#include<stdio.h>

int main() {
	// �ٸ� Ÿ���� �迭
	// 1. ���� �迭 : �ϳ��� �ۼ��ϱ� �����ϱ� ������ ""(�ֵ���ǥ)�� ���� �� �ִ�
	char chs1[6] = { 'h','e','l','l','o' };
	char chs2[6] = "hello";	

	printf("chs1[0] = %c, chs2[0] = %c\n", chs1[0], chs2[0]);
	printf("chs1 = %s, chs2 = %s\n\n", chs1, chs2);
	// - %s�� 0�� index���� ���� '\0' (= NULL)�� ���ö� ���� ���ڿ��� �ν�

	// 2. ���� �迭
	short shs[3] = { 10, 20, 30 };
	int its[2] = { 100, 200 };

	printf("shs[1] = %d, its[0] = %d\n\n", shs[1], its[0]);

	// 3. �Ǽ� �迭
	float fls[2] = { 1.2, 5.9 };
	double dbs[4] = { 5.5, 4.4, 5.1, 3.9 };

	printf("fls[0] = %.1f, dbs[2] = %.1lf\n", fls[0], dbs[2]);
}