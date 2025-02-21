#define _CRT_SECURE_NO_WARNINGS
#define BUF 10

#include <stdio.h>
#include <stdlib.h>
#include "printReverse.h"

// �S.�{. �r �x�p�t�p���u �~�u ���������~���u������, �{�p�{���u ���y���|�� �~�p�} �t�p�v������ (�~�p�������p�|���~���u, �� ���|�p�r�p�����u�z �������{���z)
// �y �{�p�{�y�u �� �������s�� ���y���|�p �s���p�~�y����, �q���t�u�} �����y���p����, ������ ���y���|�� �}���w�u�� �q������ �|���q���s�� ���y���p (�r ��.��. ���u�����~�p�t���p���y���y���~���}),
// �����y���v�} �{�p�{�y�} ���s���t�~�� �q���|�����y�}.
// �P���������}�� ���y���|�� �q���t�u�} �x�p���y�����r�p���� �r ���������{�� �y ������ ���������{�� '���u���u�r�����p���y�r�p����'.
// �P�u���u�t �����y�} �������r�u�t�v�} �r�p�|�y�t�p���y�� �r�r�u�t�v�~�~���z ���������{�y. 

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