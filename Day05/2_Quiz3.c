#include<stdio.h>

int main() {
	// 조건문 PDF 18p)
	// 문제3)

	int station, total;		// 정거장 수, 총 소요 시간

	printf("몇 정거장? ");
	scanf_s("%d", &station);

	total = station * 2;

	if (station >= 10) {
		total = station * 4;
	}

	if (total >= 60) {
		int hour = total / 60;
		int miniute = total % 60;

		printf("총 소요 시간은 %d시간 %d분 입니다\n", hour, miniute);
	}
	else {
		printf("총 소요 시간은 %d분 입니다\n", total);
	}
}