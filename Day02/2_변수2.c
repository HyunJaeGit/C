#include<stdio.h>

/*
	C��� ǥ��		�ڷ���		ũ��
	--------------------------------------
	char			����			1byte (��)
	short			����			2byte
	int				����			4byte (��)
	long long		����			8byte
	float			�Ǽ�			4byte
	double			�Ǽ�			8byte (��)

	�� bit�� byte
	1. bit : ��ǻ���� �ּ� ������ ����. n bit = 2^n
	2. byte : ������ �ּ� ����. 1 byte = 8 bit

	��, 1 byte = 8 bit = 2^8 = 256
	256������ ���ڸ� ǥ���� �� �ִ� ũ���̴�

	�� 2�� �¼��� 10�±����� �ܿ���
	�� : 0 1 2 3  4  5  6  7   8   9   10		16
	�� : 1 2 4 8 16 32 64 128 256 512 1024		65536
*/

int main() {
	char ch = 127;
	short sh = 32767;
	int it = 2000000000;
	long long lo = 3000000000;
	float fl = 1.2345678901234567890;
	double db = 1.2345678901234567890;

	printf("ch = %d\n", ch);
	printf("sh = %d\n", sh);
	printf("it = %d\n", it);
	printf("lo = %lld\n", lo);		// %lld�� long Ÿ���� ������ ��½� ���

	printf("fl = %f\n", fl);
	printf("db = %.14lf\n", db);	// %lf�� double Ÿ���� �Ǽ��� ��½� ���
}