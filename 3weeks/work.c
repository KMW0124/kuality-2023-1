// ���� ���α׷�
#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	double n1 = 0, n2 = 0;
	int cho = 0;

	printf("�μ��� ���� �Է��ϼ���(�Ҽ��� ��°�ڸ�����) : ");
	scanf(" %lf %lf", &n1, &n2);
	printf("(���� 1, ���� 2, ���� 3, ������ 4) 1 ~ 4 ���� �Է��ϼ��� : ");
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
