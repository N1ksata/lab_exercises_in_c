//
// Created by NIkolay Kolev on 20.04.26.
//

#include <stdio.h>

int main() {

    FILE *t_out = fopen("chislo.txt", "w");
    fprintf(t_out, "123");
    fclose(t_out);
    FILE *t_in = fopen("chislo.txt", "r");
    int n;
    if (t_in == NULL) return 1;
    fscanf(t_in, "%d", &n); // n e 123
    fclose(t_in);
    n = n * 2; // n stawa 246
    //into binary
    FILE *b_out = fopen("result.bin", "wb");
    if (b_out == NULL) return 1;
    // n dvoichen format
    fwrite(&n, sizeof(int), 1, b_out);
    fclose(b_out);
    printf("Gotovo! Procheteno 123, zapisano 246 v binaren format.\n");

    return 0;
}