#include <stdio.h>
#include <math.h>

double lice_kvadrat(double a) {
    return a * a;
}

double lice_prav(double a, double b) {
    return a * b;
}

double lice_prav_trig(double a, double b) {
    return (a * b) / 2;
}

double lice_okrujnost(double a) {
    return 3.14 * a * a;
}

void dcechisla(int a ,int b ) {
    int c= a ;
    a =b;
    b = c;

    printf("a = %d",a);
    printf("b = %d",b);
}

void chetno(int a) {
    if (a %2==0) {
        printf("chetno");
    }
    else {
        printf("nechetno");
    }
}

void max(int a, int b ,int c) {
    if (a >b && a >c) {
        printf("%d",a);
    }
    else if (b >a && b >c)
        {
        printf("%d",b);
    }
    else {
        printf("%d",c);
    }
}

void min(int a, int b ,int c) {
    if (a <b && a <c) {
        printf("%d",a);
    }
    else if (b <a && b <c)
    {
        printf("%d",b);
    }
    else {
        printf("%d",c);
    }
}
int sum(int a ,int b , int c) {
    return a + b + c;
}
double sredno(int a , int b , int c) {
    return (a + b + c)/3;
}
void x1x2(int a , int b , int c) {
    double discri = b*b - 4*a*c;
    double x1 = (-b + sqrt(discri))/2*a;
    printf("x1 e %lf",x1);
    double x2 = (-b + sqrt(discri))/2*a;
    printf("x2 e %lf",x2);
}

void rec(int a) {

    if (a >0) {
        rec(a/2);
    }
    printf("%d",a%2);
}
int main()
{
    // int choice;
    // double a, b;
    //
    // printf("1-kvadrat, 2-pravougulnik, 3-prav triugulnik, 4-okrujnost\n");
    // printf("izbor: ");
    // scanf("%d", &choice);
    //
    // printf("stoinost a: ");
    // scanf("%lf", &a);
    //
    // if (choice == 2 || choice == 3) {
    //     printf("stoinost b: ");
    //     scanf("%lf", &b);
    // }
    //
    // if (choice == 1) {
    //     printf("%.2f", lice_kvadrat(a));
    // }
    // else if (choice == 2) {
    //     printf("%.2f", lice_prav(a, b));
    // }
    // else if (choice == 3) {
    //     printf("%.2f", lice_prav_trig(a, b));
    // }
    // else if (choice == 4) {
    //     printf("%.2f", lice_okrujnost(a));
    // }


    //2ra
    // int a,b;
    // scanf("%d",&a);
    // scanf("%d",&b);
    // dcechisla(a,b);

    //3ta
    // int a ;
    // scanf("%d",&a);
    // chetno(a);

    //4ta
    int a;
    scanf("%d",&a);
    rec(a);

    //5ta
    // int a, b, c;
    // scanf("%d", &a);
    // scanf("%d", &b);
    // scanf("%d", &c);
    // min(a, b, c);
    // max(a, b, c);
    // printf("%d", sum(a, b, c));
    // printf("%lf", sredno(a, b, c));

    //6ta
    // ax^2 , bx ,c;
    // int a ,b,c;
    //
    // scanf("%d",&a);
    // scanf("%d",&b);
    // scanf("%d",&c);
    // x1x2(a,b,c);

    //18.03 lab





    return 0;
}
