#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	// ����2)
	// Up/Down ���� �ۼ�
	// 1. �������� ���� �ϳ��� �̾Ƽ� �����Ѵ� (������ 1 ~ 100)
	// 2. ����ڿ��� ���� ���ڴ� �������� �ʰ� ���� �Է� �޴´�
	// 3. ���� �ٸ��� ���ڿ� ���̸� Up Ȥ�� Down���� �˷��ְ� �ٽ� ���� �Է� �޴´�
	// 4. �Է��� ���̶� �̾� ���� ���̶� ������ '����'�� ��� �� ����. �Է��� Ƚ���� ���
	srand(time(NULL));
	int answer = rand() % 100 + 1;
	int num = 1, count = 0;

	while (num != answer) {
		// printf("����� : %d\n", answer);

		printf("���� : ");
		scanf_s("%d", &num);

		if (num < answer) {
			printf("UP\n\n");
		}
		else if (num > answer) {
			printf("DOWN\n\n");
		}

		count++;
	}

	printf("�����Դϴ� (%dȸ)\n", count);
}