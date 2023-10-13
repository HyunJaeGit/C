#include<stdio.h>

void upper(char str[]) {
	
	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
}

void lower(char str[]) {

	for (int i = 0; str[i] != NULL; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
}

int main() {
	// �� <-> �ҹ��� ��ȯ
	// 1. C���� ASCII��� �����ڵ带 ����Ѵ�
	// 2. A = 65, a = 97�� �ش��Ѵ�
	// 3. ��ȣ����� ���ĺ��� �Ҵ�Ǿ� �ְ�
	// 4. ��/�ҹ��ڴ� ��� ���� 32��ŭ ���̸� ������
	char str[20] = "HeLlO WoRlD";

	upper(str);
	printf("str = %s\n", str);	// HELLO WORLD;

	lower(str);
	printf("str = %s\n", str);	// hello world;
}