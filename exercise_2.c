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

double milestokms(double miles) {
    double kms = miles *1.60943;
    return kms;
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

    double mile;
    scanf("%lf", &mile);
    printf("%.3lf", milestokms(mile));

}