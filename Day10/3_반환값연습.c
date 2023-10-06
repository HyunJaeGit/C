#include<stdio.h>

double circle(double r) {
	
	double circle = (r * r) * (3.14);

	return (r * r) * (3.14);
	// - return에는 수식을 작성해도 된다
	// - 단, return 값은 딱 하나의 값만 가능
	

}

int main() {
	// 반지름(r, double)을 전달하면 원 넓이를 반환하는 함수를 구현
	// 단, 원주율은 3.14로 계산한다.

	double result = circle(6.7);

	printf("result = %.2lf\n", result);


}