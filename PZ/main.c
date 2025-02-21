#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#define n 10

// „Q„u„{„…„‚„ƒ„y„r„~„p„‘ „†„…„~„{„ˆ„y„‘ „t„|„‘ „r„€„x„r„u„t„u„~„y„‘ a „r „ƒ„„„u„„u„~„ p
double power(double a, int h)
{
    if (h == 0) // a „r „ƒ„„„u„„u„~„y 0 „‚„p„r„~„€ 1
    {
        return 1;
    }
    else if (h < 0) // „u„ƒ„|„y „ƒ„„„u„„u„~„ „€„„„‚„y„ˆ„p„„„u„|„„~„p„‘, „y„ƒ„„€„|„„x„…„u„} „€„q„‚„p„„„~„€„u „x„~„p„‰„u„~„y„u
    {
        return 1 / power(a, -h);
    }
    else // a „r „ƒ„„„u„„u„~„y „„€„|„€„w„y„„„u„|„„~„€„s„€ p
    {
        return a * power(a, h - 1);
    }
}

int main()
{
    double a;
    char p[10]; // „T„}„u„~„„Š„u„~„€, „„.„{. n „~„u „y„ƒ„„€„|„„x„…„u„„„ƒ„‘
    setlocale(LC_ALL, "Russian");
    printf("„B„r„u„t„y„„„u „‰„y„ƒ„|„€: ");
    scanf_s("%lf", &a); // „r„r„€„t „‰„y„ƒ„|„p
    // „O„‰„y„ƒ„„„{„p „q„…„†„u„‚„p „r„r„€„t„p „„€„ƒ„|„u scanf_s
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("„B„r„u„t„y„„„u „ƒ„„„u„„u„~„: ");
    fgets(p, sizeof(p), stdin); // „r„r„€„t „ƒ„„„u„„u„~„y

    // „T„t„p„|„u„~„y„u „ƒ„y„}„r„€„|„p „~„€„r„€„z „ƒ„„„‚„€„{„y, „u„ƒ„|„y „€„~ „u„ƒ„„„
    p[strcspn(p, "\n")] = 0;

    int h = atoi(p);

    printf("%.3f „r „ƒ„„„u„„u„~„y %d = %.3f\n", a, h, power(a, h)); // „r„„‰„y„ƒ„|„u„~„y„u „y „r„„r„€„t „‚„u„x„…„|„„„„p„„„p
    return 0;
}