#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() 
//{
//	char name;
//	scanf("%c", &name);
//
//	printf("�ݰ����ϴ�. %c��\n", name);
//
//	int kor;
//	int math; 
//	int eng;
//	scanf("%d %d %d", &kor, &math, &eng);
//	printf("�̹� ������ ����� %f�Դϴ� ", (kor+math+eng)/3);
//
//}



/* �̸��� ù��° ���ڿ� �������� �Է¹޾�, �̵��� ����� ����ϼ���
    1. �������� :: name(char). kor, math, eng(int)*/

int main() {
	char name;
	int kor, math, eng;

	// 2. ������ �� �Է¹ޱ� :: scanf()
	// scanf()�� "" �ȿ���, ���������ڿ� ���鸸 �� �� �ִ�
	scanf("%c", &name);
	scanf("%d %d %d", &kor, &math, &eng);

	// 3. ����� ����
	double result = (double)(kor + math + eng) / 3;

	// 4. ��Ĵ�� ��� ( ����� �Ҽ����� ���Ե� �Ǽ� ������ ���)
	printf("�ݰ����ϴ�. %c��\/", name);
	printf("�̹� ������ ����� %f���Դϴ�.", result);

	// ���� ����ȯ :: Ư�� ������ �ڷ����� ������ ����
}