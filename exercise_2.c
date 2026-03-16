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

unsigned long long findFactorial(int n) {
    if (n <=1) {
        return 1;
    }
    return n * findFactorial(n - 1);
}

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

    int number = 5;
    printf("%d", findFactorial(number));
    return 0;


}