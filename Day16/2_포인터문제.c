#include<stdio.h>

void myStrcpy(char* dst, char* src) {
	int i;

	for (i = 0; *(src + i) != NULL; i++) {
		*(dst + i) = *(src + i);		// dst[i] = src[i];
	}
	*(dst + i) = *(src + i);
}

void upper(char* str) {
	for (int i = 0; *(str + i) != NULL; i++) {
		if (*(str + i) >= 'a' && *(str + i) <= 'z') {
			*(str + i) -= 32;
		}
	}

}


int main() {
	// 1. strcpy() �Լ��� ���� ����
	// - �Լ� ������ [] index���, �����ͷ� �ۼ��� ������
	char str[10];

	myStrcpy(str, " Hello");
	printf("str = %s\n\n", str);


	// 2. ���ڿ��� �빮�ڷ� �����ϴ� �Լ��� ����
	// - ���������� �����ͷ� �ۼ�
	upper(str);
	printf("str = %s\n", str);

}