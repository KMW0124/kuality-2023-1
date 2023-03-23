#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main() {

	int n1, n2, n3;
	char c;
	printf("input number : ");
	scanf(" %d %d %d", &n1, &n2, &n3);
	printf("input oprerator : ");
	scanf(" %c", &c);
	switch (c) {
	case '*':
		printf("n1 * n2 * n3 = %d\n", n1 * n2 * n3);
		break;
	case '+':
		printf("n1 + n2 + n3 = %d\n", n1 + n2 + n3);
		break;
	case '-':
		printf("n1 - n2 - n3 = %d\n", n1 - n2 - n3);
		break;
	case '/':
		printf("n1 / n2 / n3 = %d\n", n1 / n2 / n3);
	default:
		printf("잘못 입력 되었습니다\n");
	}
}