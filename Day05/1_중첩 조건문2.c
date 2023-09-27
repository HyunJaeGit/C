#include<stdio.h>

// else if는 사실 else 안에 있는 if문을 의미

int main() {
	int age;

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	if (age >= 20) {
		printf("성인 ");
	}
	else {
		if (age >= 17) {
			printf("고등학생 ");
		}
		else {
			if (age >= 14) {
				printf("중학생 ");
			}
			else {
				printf("고등학생 이하 ");
			}
		}
	}

	printf("입니다\n");
}