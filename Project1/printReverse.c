#include <stdio.h>
#include <string.h>
#include "printreverse.h"

static void __rec(int num);

void printReverseNum(int num) {
	int isNeg = 0;
	if (num < 0) {
		num = -num;
		isNeg = 1;
	}

	__rec(num);
	
	if (isNeg == 1) {
		printf("-");
	}
}

static void __rec(int num) {
	if (num <= 9) {
		printf("%d", num);
		return;
	}

	printf("%d", num % 10);
	__rec(num / 10);
}

int isNumber(char* num) {
	// „ƒ„„„‚„€„{„p „t„€„|„w„~„p „ƒ„€„ƒ„„„€„‘„„„ „„„€„|„„{„€ „y„x „ƒ„y„}„r„€„|„€„r '0'-'9', 'A'-'F', ',', '+', '-',
	// „„‚„y „„„„€„} ',' „}„€„w„u„„ „„‚„y„ƒ„…„„„ƒ„„„r„€„r„p„„„ „r „ƒ„„„‚„€„{„u „„„€„|„„{„€ „€„t„y„~ „‚„p„x „}„u„w„t„… „‰„y„ƒ„|„p„}„y,
	// „p '+', '-' „„„€„|„„{„€ „r „~„p„‰„p„|„u

	int i = 0;
	int isFloat = 0;

	if (num[i] == '+' || num[i] == '-') i++;

	for (; num[i] != '\0'; i++) {
		// „I„ƒ„„€„|„„x„…„u„} „|„€„s„y„{„… „€„„„‚„y„ˆ„p„~„y„‘
		// „K„p„{ „„„€„|„„{„€ „‰„y„ƒ„|„€ „~„u „ƒ„€„€„„„r„u„„„ƒ„„„r„…„u„„ „…„ƒ„|„€„r„y„‘„}, „r„„‡„€„t„y„} „y„x „†„…„~„{„ˆ„y„y 
		if (num[i] < '0' || num[i] > '9')
			return 0;
	}
	return 1;
}