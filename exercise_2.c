#include <stdio.h>

int main()
{
    // FILE *file;
    // file = fopen("test.txt", "w");
    //
    // if (file == NULL) {
    //     printf("Error opening file");
    //     return 1;
    // }
    // fprintf(file, "NIKOLAY KOLEW1\n");
    // fclose(file);
    //
    // char buffer[100];
    // file = fopen("test.txt", "r");
    // if (file == NULL) {
    //     printf("Error opening file1");
    //     return 1;
    // }
    //
    // if (fgets(buffer, 100, file) != NULL) {
    //     printf("%s", buffer);
    // }
    //
    // fclose(file);

    FILE *txt = fopen("chislo.txt", "r");
    int number;
    fscanf(txt, "%d", &number); // chete "10" ot faila
    fclose(txt);

    FILE *bin = fopen("result.bin", "wb"); // "wb" za write_binary
    fwrite(&number, sizeof(int), 1, bin);
    fclose(bin);

    return 0;
}
