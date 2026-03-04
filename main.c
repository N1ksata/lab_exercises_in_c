#include <stdio.h>
int main(void)
{
    // char znak;
    //
    // scanf("%c", &znak);
    // printf(" ");
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    //
    // printf("\n");
    // printf("%c", znak);
    // printf("         ");
    // printf("%c", znak);
    //
    // printf("\n");
    // printf("%c", znak);
    // printf("         ");
    // printf("%c", znak);
    //
    // printf("\n");
    // printf("%c", znak);
    // printf("         ");
    // printf("%c", znak);
    //
    // printf("\n");
    // printf(" ");
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);
    // printf("%c", znak);

    //2RA ZADACHA
    // double inches;
    //
    // printf("Enter inches: ");
    // scanf("%lf", &inches);
    //
    // double mm = inches * 25.4;
    // double cm = inches * 2.54;
    // double dm = inches * 0.254;
    // double m  = inches * 0.0254;
    //
    // printf("%.2f inches\n", inches);
    // printf("%.2f meters\n", mm);
    // printf("%.2f cm\n", cm);
    // printf("%.2f meters\n", dm);
    // printf("%.2f meters\n", m);

    //3TA ZADACHA
    // double celsius, fahrenheit;
    //
    // printf("Celzii?");
    // scanf("%lf", &celsius);
    //
    // fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    // printf("%lf", fahrenheit);

    //4ta zadacha
    // double degrees, radians;
    // printf("Enter degrees: ");
    // scanf("%lf", &degrees);
    // radians = degrees * 3.14 / 180.0;
    //
    // printf("The radians is %.2lf degrees\n", radians);

    //zadacha 5
    // double lev;
    // scanf("%lf", &lev);
    // printf("LEv");
    // printf("%lf\n", lev);
    //
    // printf("Dolar");
    // double dolar = lev * 0.60;
    // printf("%lf\n", dolar);
    //
    // printf("Euro");
    // double evro = lev * 1.95583;
    // printf("%lf\n", evro);
    //
    // printf("Pound");
    // double pound  = lev * 0.45;
    // printf("%lf\n", pound);

    //zadahca 6
    // double a = 1, b = 1, h = 1;
    //
    // double S = ((a + b) / 2) * h;
    // printf("%lf\n",S);

    //zadacha 9

    // double w, h;
    // scanf("%lf %lf", &w, &h);
    //
    // double desk_w = 0.7;
    // double desk_h = 1.2;
    // double corridor = 1.0;
    //
    // double part_width = (w - corridor) / 2.0;
    //
    // int rows = (int)(h / desk_h);
    // int cols = (int)(part_width / desk_w);
    //
    // int total = 2 * rows * cols;
    //
    // total -= 1;
    // if(total < 0) total = 0;
    //
    // printf("%d\n", total);
    // return 0;

    //zad 10
    // double cena_z,cena_p;
    // int obshto_z ,obshto_p;
    //
    // scanf("%lf %lf",&cena_z,&cena_p);
    // scanf("%d %d",&obshto_z,&obshto_p);
    //
    // printf("%lf\n",cena_z *obshto_z);
    // printf("%lf\n",cena_p *obshto_p);

    //12zad
    // int n;
    // double m, kurs;
    //
    // scanf("%d", &n);
    // scanf("%lf", &m);
    // scanf("%lf", &kurs);
    //
    // double zaplata = n * m;
    // double godishen_dohod = (zaplata * 12) + (zaplata * 2.5);
    // double chista_suma = godishen_dohod * 0.75;
    // double v_leva = chista_suma * kurs;
    // double sredno_na_den = v_leva / 365;
    //
    // printf("%.2f\n", sredno_na_den);


    //20ta zad
    char sym;

    printf("Enter a character: ");
    scanf("%c", &sym);

    char prev = sym - 1;
    char next = sym + 1;

    printf("Previous: %c\n", prev);
    printf("Next: %c\n", next);



}