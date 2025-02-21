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
	// ���������{�p �t���|�w�~�p ���������������� �����|���{�� �y�x ���y�}�r���|���r '0'-'9', 'A'-'F', ',', '+', '-',
	// �����y �������} ',' �}���w�u�� �����y�����������r���r�p���� �r ���������{�u �����|���{�� ���t�y�~ ���p�x �}�u�w�t�� ���y���|�p�}�y,
	// �p '+', '-' �����|���{�� �r �~�p���p�|�u

	int i = 0;
	int isFloat = 0;

	if (num[i] == '+' || num[i] == '-') i++;

	for (; num[i] != '\0'; i++) {
		// �I�������|���x���u�} �|���s�y�{�� �������y���p�~�y��
		// �K�p�{ �����|���{�� ���y���|�� �~�u ���������r�u�������r���u�� �����|���r�y���}, �r�������t�y�} �y�x �����~�{���y�y 
		if (num[i] < '0' || num[i] > '9')
			return 0;
	}
	return 1;
}