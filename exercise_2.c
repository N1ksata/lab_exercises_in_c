#include <stdio.h>

int main() {
    FILE *f;
    int N, num;

    //a
    f = fopen("input", "wb");
    printf("N: ");
    scanf("%d", &N);
    fwrite(&N, sizeof(int), 1, f);

    printf("Enter %d nums: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        fwrite(&num, sizeof(int), 1, f);
    }
    fclose(f);

    //b
    f = fopen("input", "rb");
    int even = 0, odd = 0;
    fread(&N, sizeof(int), 1, f);

    for (int i = 0; i < N; i++) {
        fread(&num, sizeof(int), 1, f);
        if (num % 2 == 0) even++;
        else odd++;
    }
    fclose(f);
    printf("Even: %d, Odd: %d\n", even, odd);

    //c
    f = fopen("input", "rb");
    fread(&N, sizeof(int), 1, f);
    int a[N];
    fread(a, sizeof(int), N, f); // Прочита целия масив наведнъж
    fclose(f);

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    FILE *fo = fopen("output.txt", "w");
    for (int i = 0; i < N; i++) {
        fprintf(fo, "%d ", a[i]);
    }
    fclose(fo);

    printf("Sorted array saved to output.txt\n");
    return 0;
}