#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define n 10

// �Q�u�{�������y�r�~�p�� �����~�{���y�� �t�|�� �r���x�r�u�t�u�~�y�� a �r �����u���u�~�� p
double power(double a, int h)
{
    if (h == 0) // a �r �����u���u�~�y 0 ���p�r�~�� 1
    {
        return 1;
    }
    else if (h < 0) // �u���|�y �����u���u�~�� �������y���p���u�|���~�p��, �y�������|���x���u�} ���q���p���~���u �x�~�p���u�~�y�u
    {
        return 1 / power(a, -h);
    }
    else // a �r �����u���u�~�y �����|���w�y���u�|���~���s�� p
    {
        return a * power(a, h - 1);
    }
}

int main()
{
    double a;
    char p[10]; // �T�}�u�~�����u�~��, ��.�{. n �~�u �y�������|���x���u������
    setlocale(LC_ALL, "Russian");
    printf("�B�r�u�t�y���u ���y���|��: ");
    scanf_s("%lf", &a); // �r�r���t ���y���|�p
    // �O���y�����{�p �q�����u���p �r�r���t�p �������|�u scanf_s
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("�B�r�u�t�y���u �����u���u�~��: ");
    fgets(p, sizeof(p), stdin); // �r�r���t �����u���u�~�y

    // �T�t�p�|�u�~�y�u ���y�}�r���|�p �~���r���z ���������{�y, �u���|�y ���~ �u������
    p[strcspn(p, "\n")] = 0;

    int h = atoi(p);

    printf("%.3f �r �����u���u�~�y %d = %.3f\n", a, h, power(a, h)); // �r�����y���|�u�~�y�u �y �r���r���t ���u�x���|�����p���p
    return 0;
}