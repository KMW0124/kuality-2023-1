#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	printf("-----------------------------------------�޴�-----------------------------------\n");
	printf(" 1.��(900��) 2.�ݶ�(1300��) 3.Ŀ��(800��) 4.�Ŀ����̵�(1500��) 5.�ֽĽ�(1100��)\n");
	printf("--------------------------------------------------------------------------------\n");

	int my_money, menu, current_money = 0;
	int inven1 = 0, inven2 = 0, inven3 = 0, inven4 = 0, inven5 = 0;
	char choice;
	re_menu:
	printf("�� �޴� ��� ����(�� %d�� / �ݶ� %d�� / Ŀ�� %d�� / �Ŀ����̵� %d�� / �ֽĽ� %d��)", inven1, inven2, inven3, inven4, inven5);
	printf("�޴��� �������ּ���(1~5): ");
	scanf(" %d", &menu);
	while(1){

		switch (menu) {
		case 1:
			printf("�������ֽ� ��ǰ�� �� �½��ϱ�(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu1:
				printf("���� �־��ֽñ� �ٶ��ϴ�. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("������� �־��ֽ� �ݾ�: %d��\n", current_money);
				if (current_money >= 900) {
					current_money -= 900;
					break;
				}
				else {
					printf("���� �����մϴ� �� �־��ֽñ� �ٶ��ϴ�.\n");
					goto menu1;
				}
			}
			if (choice == 'N') {
				printf("�޴��� �ٽ� ����ֽñ� �ٶ��ϴ�.\n");
				goto re_menu;
			}
			break;
		case 2:
			printf("�������ֽ� ��ǰ�� �ݶ� �½��ϱ�(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu2:
				printf("���� �־��ֽñ� �ٶ��ϴ�. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("������� �־��ֽ� �ݾ�: %d��\n", current_money);
				if (current_money >= 1300) {
					current_money -= 1300;
					break;
				}
				else {
					printf("���� �����մϴ� �� �־��ֽñ� �ٶ��ϴ�.\n");
					goto menu2;
				}
			}
			if (choice == 'N') {
				printf("�޴��� �ٽ� ����ֽñ� �ٶ��ϴ�.\n");
				goto re_menu;
			}
			break;
		case 3:
			printf("�������ֽ� ��ǰ�� Ŀ�� �½��ϱ�(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu3:
				printf("���� �־��ֽñ� �ٶ��ϴ�. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("������� �־��ֽ� �ݾ�: %d��\n", current_money);
				if (current_money >= 800) {
					current_money -= 800;
					break;
				}
				else {
					printf("���� �����մϴ� �� �־��ֽñ� �ٶ��ϴ�.\n");
					goto menu3;
				}
			}
			if (choice == 'N') {
				printf("�޴��� �ٽ� ����ֽñ� �ٶ��ϴ�.\n");
				goto re_menu;
			}
			break;
		case 4:
			printf("�������ֽ� ��ǰ�� �Ŀ����̵� �½��ϱ�(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu4:
				printf("���� �־��ֽñ� �ٶ��ϴ�. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("������� �־��ֽ� �ݾ�: %d��\n", current_money);
				if (current_money >= 1500) {
					current_money -= 1500;
					break;
				}
				else {
					printf("���� �����մϴ� �� �־��ֽñ� �ٶ��ϴ�.\n");
					goto menu4;
				}
			}
			if (choice == 'N') {
				printf("�޴��� �ٽ� ����ֽñ� �ٶ��ϴ�.\n");
				goto re_menu;
			}
			break;
		case 5:
			printf("�������ֽ� ��ǰ�� �ֽĽ� �½��ϱ�(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu5:
				printf("���� �־��ֽñ� �ٶ��ϴ�. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("������� �־��ֽ� �ݾ�: %d��\n", current_money);
				if (current_money >= 1100) {
					current_money -= 1100;
					break;
				}
				else {
					printf("���� �����մϴ� �� �־��ֽñ� �ٶ��ϴ�.\n");
					goto menu5;
				}
			}
			if (choice == 'N') {
				printf("�޴��� �ٽ� ����ֽñ� �ٶ��ϴ�.\n");
				goto re_menu;
			}
			break;
		default:
			printf("�߸� �Է� �ϼ̽��ϴ� �ٽ� �Է����ֽñ� �ٶ��ϴ�.\n");
			goto re_menu;
		}
		break;
	}
	printf("���� �ݾ� %d�� �̿����ּż� �����մϴ�.\n", current_money);
	return 0;
}