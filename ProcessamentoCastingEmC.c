#include <stdio.h>

int main () {

    double b1, b2, h, area;

    b1 = 6.9;
    b2 = 8.0;
    h = 5.0;

    area = (double) (b1 + b2) / 2.0 * h;

    printf("%lf\n", area);

    return 0;
}