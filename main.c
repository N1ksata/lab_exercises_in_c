#include <stdio.h>

int main()
{
    double beg;
    double end;
    double delta;
    double m;
    double a;
    double b;

    scanf("%lf", &beg);
    scanf("%lf", &end);
    scanf("%lf", &delta);
    scanf("%lf", &m);
    scanf("%lf", &a);
    scanf("%lf", &b);

    while (end <= beg) {
        printf("End must be greater than beg. Enter new end: ");
        scanf("%lf", &end);
    }

    if (m >= beg && m <= end) {
        printf("M is fine:");
    }
    else {
        printf("M is not fine,enter new m:");
        scanf("%lf", &m);
    }

    for (double x = beg; x <= end; x += delta) {
        if (x <= m) {
            printf("%.2lf", b+x);
        }
        else {
            if (4 - x==0) {
                continue;
            }
            printf("%.2lf", (a*x)/(4-x));
        }
    }


    return 0;
}