#include<stdio.h>

int main() {
	// ���ǹ� if PDF 17p)
	// ���� 1 �� switch�� Ǯ�����.


	// 1) ��������
	int kor ;
	int eng ;
	int mat ;
	int grade;

	printf("���� ���� �Է� : ");
	scanf_s("%d", &kor);
	printf("���� ���� �Է� : ");
	scanf_s("%d", &eng);
	printf("���� ���� �Է� : ");
	scanf_s("%d", &mat);
	
	int sum = kor + eng + mat;
	double avg = sum / 3.0;
	printf("\n���� �հ� : %d \n",sum);
	printf("���� ��� : %.1f \n\n ",avg);


	// 2) if������ ������ ����
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


	// 3) switch������ ���
	switch (grade) {
	case 1 :
		printf("'A ���'\n");
		break;

	case 2:
		printf("'B ���'\n");
		break;

	case 3:
		printf("'C ���'\n");
		break;

	case 4:
		printf("'D ���'\n");
		break;

	case 5:
		printf("'F ���'\n");
		break;

	default:
		printf(" ���� \n\n");
	}



}