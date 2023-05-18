//연산자
#include <stdio.h>

int main() {
	int n1 = 3, n2 = 5;
	printf("0. n1은 %d, n2는 %d \n", n1, n2);

	n1 += n2;  // n1 = n1 + n2;
	printf("1. += 결과: n1은 %d, n2는 %d\n", n1, n2);  // 현재 n1은 8;
	n1 -= n2;  // n1 = n1 - n2; 
	printf("2. -= 결과 : n1은 %d, n2는 %d\n", n1, n2);
	n1 *= n2;  // n1 = n1 * n2; 
	printf("3. *= 결과 : n1은 %d, n2는 %d\n", n1, n2);
	n1 /= n2;  // n1 = n1 / n2; 
	printf("4. /= 결과 : n1은 %d, n2는 %d\n", n1, n2);
	n1 %= n2;  // n1 = n1 % n2; 
	printf("5. %%= 결과 : n1은 %d, n2는 %d\n", n1, n2);

}