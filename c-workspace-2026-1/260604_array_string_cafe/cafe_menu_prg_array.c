#define _CRT_SECURE_NO_WARNINGS
#define TRUE 1
#define MENUCNT 4
#define MENULEN 16

#include <stdio.h>
#include <string.h>

void printMenu(char sMenuNameZ[][MENULEN], int iPriceZ[])
{
	int iLoop = 0;

	printf("======== MiniCafe Menu =======\n");

	for (iLoop = 0; iLoop < MENUCNT; ++iLoop)
	{
		printf("  %d. %-16s %4d원\n", iLoop + 1, sMenuNameZ[iLoop], iPriceZ[iLoop]);
	}

	printf("==============================\n");
}

void printSalesReport(char sMenuNameZ[][MENULEN], int iSellCntZ[], int iSalesMoneyZ[], int iTotalMoney)
{
	int iLoop = 0;
	int iTotalCupCnt = 0;

	printf("\n========== 마감 보고서 ==========\n");

	for (iLoop = 0; iLoop < MENUCNT; ++iLoop)
	{
		printf("%-16s : %3d잔 / %6d원\n",
			sMenuNameZ[iLoop],
			iSellCntZ[iLoop],
			iSalesMoneyZ[iLoop]);

		iTotalCupCnt = iTotalCupCnt + iSellCntZ[iLoop];
	}

	printf("--------------------------------\n");
	printf("총 판매 잔 수     : %d잔\n", iTotalCupCnt);
	printf("오늘 총 판매 금액 : %d원\n", iTotalMoney);
	printf("================================\n");
}

int main(void)
{
	int iCupCnt = 0;
	int iTotalMoney = 0;
	int iPrice = 0;
	int iIndex = 0;
	int bFindMenu = 0;

	int iPriceZ[MENUCNT] = { 1000, 1500, 2000, 2500 };
	int iSellCntZ[MENUCNT] = { 0 };
	int iSalesMoneyZ[MENUCNT] = { 0 };

	char sMenuNameZ[MENUCNT][MENULEN] =
	{
		"에스프레소",
		"아메리카노",
		"카페라떼",
		"아이스티"
	};

	char sOrderName[MENULEN] = "";

	while (TRUE)
	{
		printMenu(sMenuNameZ, iPriceZ);

		printf("메뉴 이름 입력 (종료는 0) : ");
		scanf("%s", sOrderName);

		if (strcmp(sOrderName, "0") == 0)
		{
			break;
		}

		bFindMenu = 0;
		iIndex = 0;

		for (iIndex = 0; iIndex < MENUCNT; ++iIndex)
		{
			if (strcmp(sOrderName, sMenuNameZ[iIndex]) == 0)
			{
				bFindMenu = TRUE;
				break;
			}
		}

		if (bFindMenu != TRUE)
		{
			printf("없는 메뉴입니다.\n\n");
			continue;
		}

		printf("수량(잔수) 입력 : ");
		scanf("%d", &iCupCnt);

		if (iCupCnt <= 0)
		{
			printf("수량은 1잔 이상 입력해야 합니다.\n\n");
			continue;
		}

		iPrice = iCupCnt * iPriceZ[iIndex];

		printf("[%s]-[%d잔]-[%d]원 판매\n",
			sMenuNameZ[iIndex],
			iCupCnt,
			iPrice);

		iSellCntZ[iIndex] = iSellCntZ[iIndex] + iCupCnt;
		iSalesMoneyZ[iIndex] = iSalesMoneyZ[iIndex] + iPrice;
		iTotalMoney = iTotalMoney + iPrice;

		printf("\n");
	}

	printSalesReport(sMenuNameZ, iSellCntZ, iSalesMoneyZ, iTotalMoney);

	return 0;
}