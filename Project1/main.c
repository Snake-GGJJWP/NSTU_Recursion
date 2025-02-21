#define _CRT_SECURE_NO_WARNINGS
#define BUF 10

#include <stdio.h>
#include <stdlib.h>
#include "printReverse.h"

// „S.„{. „r „x„p„t„p„‰„u „~„u „…„„„€„‰„~„‘„u„„„ƒ„‘, „{„p„{„€„u „‰„y„ƒ„|„€ „~„p„} „t„p„v„„„ƒ„‘ („~„p„„„…„‚„p„|„„~„€„u, „ƒ „„|„p„r„p„„‹„u„z „„„€„‰„{„€„z)
// „y „{„p„{„y„u „… „„„„€„s„€ „‰„y„ƒ„|„p „s„‚„p„~„y„ˆ„, „q„…„t„u„} „ƒ„‰„y„„„p„„„, „‰„„„€ „‰„y„ƒ„|„€ „}„€„w„u„„ „q„„„„ „|„„q„€„s„€ „„„y„„p („r „„.„‰. „Š„u„ƒ„„„~„p„t„ˆ„p„„„y„‚„y„‰„~„„}),
// „„‚„y„‰„v„} „{„p„{„y„} „…„s„€„t„~„€ „q„€„|„„Š„y„}.
// „P„€„„„„€„}„… „‰„y„ƒ„|„€ „q„…„t„u„} „x„p„„y„ƒ„„r„p„„„ „r „ƒ„„„‚„€„{„… „y „„„„… „ƒ„„„‚„€„{„… '„„u„‚„u„r„€„‚„p„‰„y„r„p„„„'.
// „P„u„‚„u„t „„„„y„} „„‚„€„r„u„t„v„} „r„p„|„y„t„p„ˆ„y„ „r„r„u„t„v„~„~„€„z „ƒ„„„‚„€„{„y. 

int main() {
	char numStr[BUF];
	int num;

	printf("Enter number you want to reverse: ");
	if (fgets(numStr, BUF, stdin) == NULL) {
		printf("\nFailure on reading!");
		return 0;
	}

	numStr[strlen(numStr) - 1] = '\0';

	if (!isNumber(numStr)) {
		printf("%s is not an int!", numStr);
		return 0;
	}
	
	num = atoi(numStr);
	printReverseNum(num);
	return 0;
}