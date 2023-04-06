#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	printf("-----------------------------------------메뉴-----------------------------------\n");
	printf(" 1.물(900원) 2.콜라(1300원) 3.커피(800원) 4.파워에이드(1500원) 5.핫식스(1100원)\n");
	printf("--------------------------------------------------------------------------------\n");

	int my_money, menu, current_money = 0;
	int inven1 = 0, inven2 = 0, inven3 = 0, inven4 = 0, inven5 = 0;
	char choice;
	re_menu:
	printf("각 메뉴 재고 갯수(물 %d개 / 콜라 %d개 / 커피 %d개 / 파워에이드 %d개 / 핫식스 %d개)", inven1, inven2, inven3, inven4, inven5);
	printf("메뉴를 선택해주세요(1~5): ");
	scanf(" %d", &menu);
	while(1){

		switch (menu) {
		case 1:
			printf("선택해주신 상품이 물 맞습니까(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu1:
				printf("돈을 넣어주시기 바랍니다. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("현재까지 넣어주신 금액: %d원\n", current_money);
				if (current_money >= 900) {
					current_money -= 900;
					break;
				}
				else {
					printf("돈이 부족합니다 더 넣어주시길 바랍니다.\n");
					goto menu1;
				}
			}
			if (choice == 'N') {
				printf("메뉴를 다시 골라주시길 바랍니다.\n");
				goto re_menu;
			}
			break;
		case 2:
			printf("선택해주신 상품이 콜라 맞습니까(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu2:
				printf("돈을 넣어주시기 바랍니다. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("현재까지 넣어주신 금액: %d원\n", current_money);
				if (current_money >= 1300) {
					current_money -= 1300;
					break;
				}
				else {
					printf("돈이 부족합니다 더 넣어주시길 바랍니다.\n");
					goto menu2;
				}
			}
			if (choice == 'N') {
				printf("메뉴를 다시 골라주시길 바랍니다.\n");
				goto re_menu;
			}
			break;
		case 3:
			printf("선택해주신 상품이 커피 맞습니까(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu3:
				printf("돈을 넣어주시기 바랍니다. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("현재까지 넣어주신 금액: %d원\n", current_money);
				if (current_money >= 800) {
					current_money -= 800;
					break;
				}
				else {
					printf("돈이 부족합니다 더 넣어주시길 바랍니다.\n");
					goto menu3;
				}
			}
			if (choice == 'N') {
				printf("메뉴를 다시 골라주시길 바랍니다.\n");
				goto re_menu;
			}
			break;
		case 4:
			printf("선택해주신 상품이 파워에이드 맞습니까(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu4:
				printf("돈을 넣어주시기 바랍니다. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("현재까지 넣어주신 금액: %d원\n", current_money);
				if (current_money >= 1500) {
					current_money -= 1500;
					break;
				}
				else {
					printf("돈이 부족합니다 더 넣어주시길 바랍니다.\n");
					goto menu4;
				}
			}
			if (choice == 'N') {
				printf("메뉴를 다시 골라주시길 바랍니다.\n");
				goto re_menu;
			}
			break;
		case 5:
			printf("선택해주신 상품이 핫식스 맞습니까(Y/N): ");
			scanf(" %c", &choice);
			if (choice == 'Y') {
				menu5:
				printf("돈을 넣어주시기 바랍니다. ");
				scanf(" %d", &my_money);
				current_money += my_money;
				printf("현재까지 넣어주신 금액: %d원\n", current_money);
				if (current_money >= 1100) {
					current_money -= 1100;
					break;
				}
				else {
					printf("돈이 부족합니다 더 넣어주시길 바랍니다.\n");
					goto menu5;
				}
			}
			if (choice == 'N') {
				printf("메뉴를 다시 골라주시길 바랍니다.\n");
				goto re_menu;
			}
			break;
		default:
			printf("잘못 입력 하셨습니다 다시 입력해주시길 바랍니다.\n");
			goto re_menu;
		}
		break;
	}
	printf("남은 금액 %d원 이용해주셔서 감사합니다.\n", current_money);
	return 0;
}