#include<stdio.h>

void adder(int n1, int n2) {
	printf("n1 = %d, n2 = %d\n", n1, n2);
	printf("n1 + n2 = %d\n\n", n1 + n2);


}

int main() {

	adder(5, 3);
	adder(3, 5);
	//adder(3);  -> 전달 인자 부족 (오류)
}