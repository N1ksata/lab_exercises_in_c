#include <stdio.h>
// int max_num(int a , int b) {
//     return (a > b) ? a : b;
// }
//
// int min_num(int a , int b) {
//     return (a < b) ? a : b;
// }
//zad1

int main()
{



    //18.03 sem
    //zad1
    // int choice,min ,max;
    // scanf("%d",&choice);
    //
    //
    // if (choice == 0) return 0;
    // max = choice;
    // min = choice;
    //
    // while (1) {
    //     scanf("%d",&choice);
    //     if (choice == 0) break;
    //
    //     max = max_num(max,choice);
    //     min = min_num(min,choice);
    // }
    //
    // printf("MAX -> %d\n",max);
    // printf("MIN -> %d\n",min);

    //zad 2
    // int chas,minuti;
    // printf("vuvedi chas ");
    // scanf("%d",&chas);
    // printf("vuvedi minuti ");
    // scanf("%d",&minuti);
    //
    // minuti += 15;
    // chas = chas + (minuti / 60);
    // minuti = minuti % 60;
    // chas = chas % 24;
    // printf("Chasut sled 15min: %d:%02d\n", chas, minuti);

    //zad 3
    // int a,b,c;
    // scanf("%d %d %d",&a,&b,&c);
    // if (a == b && b == c && c == a) {
    //     printf("ednakvi sa ");
    // }
    // else {
    //     printf("ne sa");
    // }

    //zad 4
    //  int cqlo;
    //  scanf("%d", &cqlo);
    //  double bonus = 0;
    //
    // if (cqlo >1000) {
    //     bonus += cqlo *0.1;
    // }
    // else if (cqlo <=100) {
    //      bonus += 5.0;
    //  }
    //
    // else if(cqlo > 100) {
    //      bonus += cqlo *0.2;
    //  }
    //
    // if (cqlo % 2 ==0) {
    //      bonus += 1.0;
    //  }
    //
    // else if (cqlo % 5 ==0) {
    //      bonus += 2.0;
    //  }
    //
    // printf("%.1f\n", bonus);
    // printf("%.1f\n", bonus + cqlo);

    //zad 5
    // int a,b,c;
    // scanf("%d %d %d",&a,&b,&c);
    // int secs = a + b + c;
    // int fin_secs = secs % 60;
    // int mins = secs / 60;
    // printf("%d:%d",mins,fin_secs);

    //zad6
    // double x1, y1, x2, y2, x, y;
    // printf("x1, y1, x2, y2, x, y: ");
    // scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x, &y);
    // if (x >= x1 && x <= x2 && y >= y1 && y <= y2) {
    //     printf("Inside\n");
    // } else {
    //     printf("Outside\n");
    // }

    //zad7
    // int n;
    // char period;
    // printf("Enter a killometri: ");
    // scanf("%d", &n);
    // printf("Period D/N");
    // scanf(" %c", &period);
    //
    // double price =0.0;
    // if (n < 20) {
    //     double rate = (period == 'D' || period == 'N') ? 0.79 : 0.90;
    //     price = 0.70 + (n * rate);
    // } else if (n < 100) {
    //     price = n * 0.09;
    // } else {
    //     price = n * 0.06;
    // }
    // printf("Nai-niska cena: %.2f\n", price);

    //8ma zad
    // int V,x1,x2,n;
    // printf("V(celi m3) ,TRUBA 1(celi litri), TRUBA 2 (celi litri), CHASOWE (celi chisla) ");
    // scanf("\n%d%d%d%d",&V,&x1,&x2,&n);
    // V = V*1000;
    //
    // int obshto_kol = x1*n +x2*n;
    // if (obshto_kol > V) {
    //     printf("Baseina e prelql");
    // }
    // else if (obshto_kol < V) {
    //     printf("baseina ne e zapulnen");
    // }
    // else {
    //     printf("baseina e izravnen");
    // }

    //zad 9
    // double x,y,z,rabotnici;
    // printf("x y z \n");
    // scanf("%lf %lf %lf",&x,&y,&z,&rabotnici);
    // double obshto_grozde  = x *y;
    // double grozde_vino  = obshto_grozde * 0.40;
    // double izraboteno_vino = grozde_vino / 2.5;
    //
    // if (izraboteno_vino >= z) {
    //     double ostavashto  = izraboteno_vino -z;
    // }

    //zad 10
    // int current_num;
    // double n;
    // double p1 = 0 , p2 = 0,p3 = 0 ,p4 = 0 ,p5=0;
    // if (scanf("%lf", &n) != 1) {
    //     return 1;
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     printf("Vuvedi num %d: ", i + 1);
    //     scanf("%d", &current_num);
    //
    //     if (current_num < 200) {
    //         p1++;
    //     }
    //     else if (current_num <= 399) {
    //         p2++;
    //     }
    //     else if (current_num <= 599) {
    //         p3++;
    //     }
    //     else if (current_num <= 799) {
    //         p4++;
    //     }
    //     else {
    //         p5++;
    //     }
    // }
    // printf("%.2lf\n",(p1/n)*100);
    // printf("%.2lf\n",(p2/n)*100);
    // printf("%.2lf\n",(p3/n)*100);
    // printf("%.2lf\n",(p4/n)*100);
    // printf("%.2lf\n",(p5/n)*100);

    //12zad
    // int n;
    // scanf("%d", &n);
    //
    // for (int i = 1; i <= n - 2; i++) {
    //     if (i % 2 != 0) {
    //         //necheten red
    //         for(int j=0; j < n-2; j++) printf("*");
    //         printf("\\ /");
    //         for(int j=0; j < n-2; j++) printf("*");
    //     } else {
    //         //cheten
    //         for(int j=0; j < n-2; j++) printf("-");
    //         printf("\\ /");
    //         for(int j=0; j < n-2; j++) printf("-");
    //     }
    //     printf("\n");
    // }
    // //sreda na tqloto
    // for (int i = 0; i < n - 1; i++) printf(" ");
    // printf("@\n");
    //
    // //dolna ogledalna na gorna
    // for (int i = 1; i <= n - 2; i++) {
    //     if (i % 2 != 0) {
    //         //cheten red
    //         for(int j=0; j < n-2; j++) printf("*");
    //         printf("/ \\");
    //         for(int j=0; j < n-2; j++) printf("*");
    //     } else {
    //         // cheten red
    //         for(int j=0; j < n-2; j++) printf("-");
    //         printf("/ \\");
    //         for(int j=0; j < n-2; j++) printf("-");
    //     }
    //     printf("\n");
    // }


    // int n[10];
    // for (int i=1; i<=10; i++) {
    //     n[i-1]=i*2;
    // }
    //
    // for (int i=0; i<10; i++) {
    //     printf("%d\n",n[i]);
    // }

    // int arr[5],i;
    // printf("Size of ints in this com is %lu\n", sizeof(int));
    // for (i=0;i<5;i++) {
    //     printf("Adress arr[%d] is %p\n",i,&arr[i]);
    // }

    // int arr[]= {10,20,30,40,50,60};
    // int* ptr = arr;
    // printf("Size of arr[] %ld\n",sizeof(arr));
    // printf("Size of arr[] %ld\n",sizeof(ptr));

    // double a[5];
    //
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\na[%i] ->",i);
    //     scanf("%lf",&a[i]);
    // }
    //
    // for (int i = 0; i < 5; i++) {
    //     printf("%.2lf\n",a[i]);
    // }

    // char greeting[6]= {'N', 'i', 'k', 'i','\0'};
    // char greeting1[6]= {'K', 'o', 'l', 'e', 'v','\0'};
    // printf("The greeting is %s %s\n",greeting , greeting1);

    // char name[30];
    // printf("Enter your name: ");
    // // scanf("%s",name); //fgets
    // fgets(name,40,stdin);
    // // printf("Hello %s zaaz",name); //puts
    // printf("Your name is: ");
    // puts(name);
    // printf("!");

    //zad1
    // char name[] = "Nikolay";
    // int length =0;
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     length++;
    // }
    // printf("%d", length);

    //zad2
    // int length = 1;
    // char words[300] = {"NIKOLAY E SMESHEN"};
    // for (int i = 0; words[i] != '\0'; i++) {
    //     if (words[i] == ' ') {
    //         length++;
    //     }
    // }
    // printf("%d\n", length);
    // return 0;

    //zad3
    // int len = 0;
    // char ch;
    // char words[10] = {"Birds"};
    // for (int i = 0; words[i] != '\0'; i++) {
    //     if (words[i] == 'B') {
    //         len++;
    //     }
    // }
    // printf("%d\n", len);

    //zad4
    // char name[] = "Nikolay";
    // char name2[] = "Kolew";
    // int length =0;
    // int length1 =0;
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     length++;
    // }
    // for (int i = 0; name2[i] != '\0'; i++)
    // {
    //     length1++;
    // }
    // if (length == length1) {
    //     printf("TOHCNI RAZMERI");
    // }
    // else if(length > length1) {
    //     printf("NIKOLAY PECHELI");
    // }
    // else {
    //     printf("KOLEW PECHELI");
    // }
    // return 0;



}