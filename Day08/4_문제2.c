#include <stdio.h>

int main() {

	// 1. 1~ 1000까지의 합을 출력

	// 2. 1 ~ 1000 까지의 합에서 3의 배수는 합에서 제외

	// 3. 1 ~ 1000까지의 합에서 3과 5의 공배수는 합에 포함, 3의 배수는 합에서 제외

	// 4. 정수를 입력해서 약수를 출력
	// ex) 입력 : 6 -> 출력 : 1236
	// ex) 입력 : 7 -> 출력 : 1 7

	// 5. 정수를 입력해서 소수인지 판별
	// ex) 입력 : 6 -> 출력 : 소수x
	// ex) 입력 : 7 -> 출력 : 소수o

	// ----------------------------문제1)----------------------------

	int sum=0;
	
	
	for (int i = 1; i <= 1000; i++) {
		sum += i;
		//printf("i = %d, sum = %d\n", i, sum);    ->> 디버깅 부분은 주석처리
	}

	printf("누적합 : %d\n", sum);
	printf("\n\n");

	
	
	
	
	// ----------------------------문제2)----------------------------


	for (int i = 1; i <= 1000; i++) {
		if (i%3 ==0) {
			
			continue;
		}

		sum += i;
		//printf("i = %d, sum = %d\n", i, sum);
		
	}
	printf("3의 배수 제외 누적합 : %d\n", sum);
	printf("\n\n");




	//  ----------------------------문제3) ----------------------------

	for (int i = 1; i <= 1000; i++) {
		if (i%15 != 0 && i%3 == 0) {
			continue;
		}

		sum += i;
		//printf("i = %d, sum = %d\n", i, sum);
	}
	printf("3과 5의 공배수는 포함, 3의 배수제외 누적합 : %d\n", sum);
	printf("\n\n");

	
	
	//  ----------------------------문제4)----------------------------
	
	int input;
	printf("정수 입력 :");
	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++) {
		if (input % i == 0) {
			printf("%d ", i);
		}
		else {
			continue;
		}

	}
	printf("\n\n");



	//  ----------------------------문제5) ----------------------------


	int n, count = 0;

	printf("\n정수 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
			count++;
		}
	}
	printf("(%d개)\n", count);


	if (count == 2) {
		printf("소수o\n");
	}
	else {
		printf("소수x\n");
	}

}