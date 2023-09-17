#include<stdio.h>

int main() {
	// 1. 이름, 국영수 점수를 저장할 변수를 선언
	// 단, 국영수는 점수로 선언
	char name[10];
	int kor, eng, mat, sum;
	double avg;


	// 2. 입력문을 활용해서 1번의 변수에 값을 입력

	printf("이름 : ");
	scanf_s("%s", name, 10);

	printf("국어 :");
	scanf_s("%d", &kor);

	printf("영어 : ");
	scanf_s("%d", &eng);

	printf("수학 : ");
	scanf_s("%d", &mat);

	rewind(stdin);

	sum = kor + eng + mat;
	avg = sum / 3.0;

	rewind(stdin);



	// 3. 이름과 합계 평균을 화면에 출력

	printf("\n이름 : %s\n", name);
	printf("\n국어 : %d점", kor);
	printf("\n영어 : %d점", eng);
	printf("\n수학 : %d점", kor);
	printf("\n합계 : %d점", sum);
	printf("\n평균 : %.2lf점", avg);
	printf("\n\n 확인 : PRESS SPACE BAR\n\n");
}