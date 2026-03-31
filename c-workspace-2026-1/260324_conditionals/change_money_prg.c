#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main01() 
{
	int iPrice, iUser, iChange;
	int i1000, i500, i100;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &iPrice);   
	printf("투입한 금액을 입력하시오: ");
	scanf("%d", &iUser);
	printf("거스름돈은 다음과 같습니다.\n\n");

	iChange = iUser - iPrice;
	i1000 = iChange / 1000;
	iChange = iChange % 1000;
	i500 = iChange / 500;
	iChange = iChange % 500;
	i100 = iChange / 100;
	
	printf("천원권: %d장\n", i1000);
	printf("오백원 동전: %d개\n", i500);
	printf("백원 동전: %d개\n", i100);
}