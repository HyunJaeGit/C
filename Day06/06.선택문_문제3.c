#include<stdio.h>

int main() {
	// 조건문 if PDF 17p)
	// 문제 1 을 switch로 풀어보세요.


	// 1) 변수선언
	int kor ;
	int eng ;
	int mat ;
	int grade;

	printf("국어 점수 입력 : ");
	scanf_s("%d", &kor);
	printf("영어 점수 입력 : ");
	scanf_s("%d", &eng);
	printf("수학 점수 입력 : ");
	scanf_s("%d", &mat);
	
	int sum = kor + eng + mat;
	double avg = sum / 3.0;
	printf("\n성적 합계 : %d \n",sum);
	printf("성적 평균 : %.1f \n\n ",avg);


	// 2) if문으로 범위를 설정
	if (avg >= 90.00)
		grade = 1;
	else if (avg >= 80.0)
		grade = 2;
	else if (avg >= 70.0)
		grade = 3;
	else if (avg >= 60.0)
		grade = 4;
	else;
		grade = 5;


	// 3) switch문으로 출력
	switch (grade) {
	case 1 :
		printf("'A 등급'\n");
		break;

	case 2:
		printf("'B 등급'\n");
		break;

	case 3:
		printf("'C 등급'\n");
		break;

	case 4:
		printf("'D 등급'\n");
		break;

	case 5:
		printf("'F 등급'\n");
		break;

	default:
		printf(" 오류 \n\n");
	}



}