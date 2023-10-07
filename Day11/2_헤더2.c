#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// ����� �̹� ������� �����Ǵ� �͵� �ְ�
// �����ڰ� ���� �ۼ��ؼ� ����� ���� �ִ�

int main() {
	// stdlib�� �پ��� �Լ��� �����ϴ� ��, �� �� ������ �ẻ��
	
	srand(time(NULL));

	for (int i = 1; i <= 5; i++) {
		int n = rand();		// rand() : (0 ~ 32,767) ������ ���� �������� ��ȯ

		printf("n = %d\n", n);
	}
	printf("\n");


	// ���� ������ �����ϰ� �;�
	// 1. 0 ~ 9����
	for (int i = 1; i <= 5; i++) {
		int n = rand() % 10;

		printf("%d ", n);
	}
	printf("\n");


	// 2. 1 ~ 10����
	for (int i = 1; i <= 5; i++) {
		int n = rand() % 10 + 1;	// (0 ~ 9) + 1 == 1 ~ 10

		printf("%d ", n);
	}
	printf("\n");


	// 3. 5 ~ 17����
	// 3-1. ���� ������ 0�� �ǰ� ����. 0 ~ 12
	// 3-2. 0�̵Ǹ� ���� ���ϱⰡ ����. n % 13
	// 3-3. ������ ���� �� 1���� �� ���� �ٽ� ���Ѵ�. n % 13 + 5
	for (int i = 1; i <= 5; i++) {
		int n = rand() % 13 + 5;
		
		printf("%d ", n);
	}
	printf("\n");
}