// 계산기 프로그램
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	double n1 = 0, n2 = 0;
	int cho = 0;

	printf("두수의 값을 입력하세요(소수점 둘째자리까지) : ");
	scanf(" %lf %lf", &n1, &n2);
	printf("(덧셈 1, 뺄셈 2, 곱셈 3, 나눗셈 4) 1 ~ 4 값을 입력하세요 : ");
	scanf(" %d", &cho);

	if (cho == 1)
		printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
	else if (cho == 2)
		printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
	else if (cho == 3)
		printf("%.2f * %.2f = %.2f", n1, n2, n1 * n2);
	else if (cho == 4)
		printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);

	return 0;
	
}
