#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	char name;
//	scanf("%c", &name);
//
//	printf("반갑습니다. %c님\n", name);
//
//	int kor;
//	int math; 
//	int eng;
//	scanf("%d %d %d", &kor, &math, &eng);
//	printf("이번 시험의 평균은 %f입니다 ", (kor+math+eng)/3);
//
//}



/* 이름의 첫번째 글자와 국영수를 입력받아, 이들의 평균을 출력하세요
    1. 변수선언 :: name(char). kor, math, eng(int)*/

int main() {
	char name;
	int kor, math, eng;

	// 2. 변수의 값 입력받기 :: scanf()
	// scanf()의 "" 안에는, 서식지정자와 공백만 쓸 수 있다
	scanf("%c", &name);
	scanf("%d %d %d", &kor, &math, &eng);

	// 3. 결과값 산출
	double result = (double)(kor + math + eng) / 3;

	// 4. 양식대로 출력 ( 평균은 소수점이 포함된 실수 값으로 출력)
	printf("반갑습니다. %c님\/", name);
	printf("이번 시험의 평균은 %f점입니다.", result);

	// 강제 형변환 :: 특정 정보의 자료형을 강제로 변형
}