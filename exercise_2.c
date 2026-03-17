#include <stdio.h>
//RUSKI SBORNIK ZADACHI FUNKCII

// double fahtograd(double fahren) {
//     double cel = (5.0/9.0)*(fahren-32.03);
//     return cel;
//
// }

// double inchtomm(double x) {
//     double a = x*25.4;
//     return a;
// }

// double milestokms(double miles) {
//     double kms = miles *1.60943;
//     return kms;
// }

// double obem_cilinder(double x, double y) {
//     return 3.14*x*x*y;
// }

// int maxnum(int a , int b ) {
//     if (a > b) {
//         return a;
//     }
//     else {
//         return b;
//     }
// }

// char compare(int a ,int b ) {
//     char res;
//     if (a > b) res = '>';
//     else if (a < b) res = '<';
//     else res = '=';
//     return res;
// }

// float sopr(float r1, float r2 , int t) {
//     //r1 -resistor 1
//     //r2 -resistor 2
//     //t - vid 1 -posledovatelno 2 ->usporedno
//     float r;
//     if (t == 1) {
//         r = r1+r2 ;
//     }
//     else if (t == 2) {
//         r = r1*r2 / (r1+r2);
//     }
//     else {
//         return -1;
//     }
//     return r;
//
// }

// float percent(double chislo , double procent) {
//     return  (chislo * procent)/100;
// }

// unsigned long long findFactorial(int n) {
//     if (n <=1) {
//         return 1;
//     }
//     return n * findFactorial(n - 1);
// }

// void profit(int a,int b,int c) {
//     printf("%d",a*(b /100/365)*c;
// }

// float circle_area(float r ) {
//     return 3.14 * r * r;
// }
// float rectangle_area(float a,float b) {
//     return  a * b;
// }

int main()
{
    //zadacha 201
    //napishete zadacha za preobrazuwane na temp ot gradusi -> celzii (C° = 5/9 (F°–32)
    // double fahren;
    // scanf("%lf", &fahren);
    // printf("Fahrenheit ->C°  : %.2lf" , fahtograd(fahren));

    //zadacha 202
    //inches to mm
    // double inch;
    // scanf("%lf", &inch);
    // printf("%.1lf", inchtomm(inch));

    //zad 203
    //miles to km
    //1 mile = 1.60094

    // double mile;
    // scanf("%lf", &mile);
    // printf("%.3lf", milestokms(mile));


    //205 obem na cilinder
    // double r,h;
    // scanf("%lf",&r);
    // scanf("%lf",&h);
    // printf("%.2lf",obem_cilinder(r,h));

    //206 max_num
    // int a,b;
    // scanf("%d%d",&a,&b);
    // printf("The max num is ->%d" , maxnum(a ,b ));

    //207 zadacha > , <  ,  =
    // int a,b;
    // printf("Vuvedi 2 celi chisla");
    // scanf("%d",&a);
    // scanf("%d",&b);
    //
    // printf("%d %c %d",a,compare(a,b),b);

    //208 namirane na suprotivlenie na veriga
    //209 chislo v procent

    //210 factoriel
    // int number = 5;
    // printf("%d", findFactorial(number));
    // return 0;

    //211 profit
    // int deposit, interest_rate ,depsite_term;
    // scanf("%d%d%d", &deposit, &interest_rate, &depsite_term);
    // profit(deposit, interest_rate, depsite_term);

    //exercises from net
    //1 geometry
    // int choice;
    // printf("You can choose between -> 1 for the area of circle\n");
    // printf("                       -> 2 for the area of rectangle\n");
    // scanf("%d", &choice);
    //
    // if (choice == 1) {
    //     printf("CIRCLE:\n");
    //     printf("Choose r:\n");
    //     int r;
    //     scanf("%d", &r);
    //     printf("The area of circle is %f\n", circle_area(r));
    // }
    // else if (choice == 2) {
    //     float a,b;
    //     printf("Rectangle:\n");
    //     printf("Choose a and b :\n");
    //     scanf("%f %f", &a, &b);
    //     printf("The area of circle is %f\n", rectangle_area(a,b));
    // }
    // else {
    //     printf("Choose proper number 1 or 2");
    // }

    //exercises with for cylce


    //reversed loop
    // int a;
    // scanf("%d", &a);
    // for (int i = a ; i>=1 ; i--) {
    //     printf("%d\n", i);
    // }

    //nested loops

    for (int i= 0 ; i<=10 ;i++) {
        for (int j= 0 ; j<=10; j++) {
            printf("%d x %d = %d\n", i,j,i*j);
        }
    }
}