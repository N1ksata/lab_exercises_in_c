#include <stdio.h>
int main(void) {


    // int x = 1;
    // int y = 2;

    // printf("Subirane -> %d\n", x + y);
    // printf("Umnojenie -> %d\n", x * y);
    // printf("Ostatuk (Modulo) -> %d\n", x % y);
    //
    // x -= y;
    // printf("Sled -= -> %d\n", x);
    //
    // x ^= y;
    // printf("Sled ^= -> %d\n", x);
    //
    // x /= y;
    // printf("Sled /= -> %d\n", x);
    //
    // printf("%d\n", x++);
    // printf("%d\n", x--);
    // printf("%d\n", x);

    //pravougulnik ;  obikolka na okrujnost
    // int a;
    // int b;
    //
    // printf("A?");
    // scanf("%d", &a);
    //
    // printf("B?");
    // scanf("%d", &b);
    //
    // printf("Obikolka na okrujnost %lf\n" ,2* 3.14*a);
    // printf("Lice na pravougulnik %d\n", a*b);

    // int  y;
    // int a;
    // int b;
    // int c;
    //
    // scanf("%d",&a);
    // scanf("%d",&b);
    // scanf("%d",&c);
    //
    // y = 4*a + 5*(b+4*c)*(b+4*c);
    // printf("%d",y);

    // int a = 0;
    // float b = 0;
    // char c = 0;
    // double d = 0;
    //
    // printf("%d\n", sizeof(a));

    //paralelepitet povurhnina i obem , formatirane do 2ri znak

    double a;
    double b;
    double c;
    double v;
    double s;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    v = a * b * c;
    printf("%.2lf\n", v);

    s = 2*(a*b + a*c + b*c);
    printf("%.2lf\n", s);






    return 0;
}