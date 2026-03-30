#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    //18.03 lab
    //1va    suma na 7 chisla
    // int arr[7];
    //int sum = 0;
    // for (int i = 0; i < 7; i++) {
    //     scanf("%d", &arr[i]);
    //     sum += arr[i];
    // }
    // printf("%d\n", sum);

    //2ra max chislo ot 7
    // int chisla[7];
    // int max_chislo;
    //int min_chislo;
    // for (int i = 0; i < 7; i++) {
    //     scanf("%d", &chisla[i]);
    // }

    // max_chislo = chisla[0];
    // for (int i = 1; i < 7; i++) {
    //     if (chisla[i] > max_chislo) {
    //         max_chislo = chisla[i];
    //     }
    // }
    // printf("%d\n", max_chislo);

    //3ta sredna stoinost na 7 chisla
    // int arr[7];
    // float obshta_suma = 0;
    // float sredno;
    //
    // for (int i = 0; i < 7; i++) {
    //     scanf("%d", &arr[i]);
    //     obshta_suma = obshta_suma + arr[i];
    // }
    //
    // sredno = obshta_suma / 7;
    // printf("%.3f\n", sredno);

    //4ta
    // int arr[7];
    // float obshta_suma = 0;
    // float sredno;
    //
    // for (int i = 0; i < 7; i++) {
    //     scanf("%d", &arr[i]);
    //     obshta_suma = obshta_suma + arr[i];
    // }
    //
    //
    // sredno = obshta_suma / 7;
    //
    // for (int i = 0; i < 7; i++) {
    //     if (arr[i] == sredno) {
    //         printf("arr[%d] = %d\n", i, arr[i]);
    //     }
    // }

    // int a,b;
    // int* p1 = &a;
    // int* p2 = &b;
    //
    // scanf("%d%d",&a,&b);
    //
    // printf("+ ->%d\n", *p1 + *p2);
    // printf("- ->%d\n", *p1 - *p2);
    // printf("* ->%d\n", *p1 * *p2);
    // if (*p2 != 0)
    // {
    //     printf("/ ->%d\n", *p1 / *p2);
    // }
    // else
    // {
    //     printf("ZeroDivision ERROR\n");
    // }

    // int n, i, j;
    // printf("Enter the size of the nxn matrix: ");
    // if (scanf("%d", &n) != 1 || n <= 0) {
    //     printf("Invalid size. Please enter a positive integer.\n");
    //     return 1;
    // }
    //
    // int **matrix = (int **)malloc(n * sizeof(int *));
    // if (matrix == NULL) {
    //     printf("Memory allocation failed!\n");
    //     return 1;
    // }
    //
    // for (i = 0; i < n; i++) {
    //     matrix[i] = (int *)malloc(n * sizeof(int));
    //     if (matrix[i] == NULL) {
    //         printf("Memory allocation failed!\n");
    //         return 1;
    //     }
    // }
    //
    // printf("\nEnter %d elements for the %dx%d matrix:\n", n * n, n, n);
    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         printf("Element [%d][%d]: ", i, j);
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }
    //
    // printf("\n--- Resulting %dx%d Matrix ---\n", n, n);
    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         printf("%d\t", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    //
    // for (i = 0; i < n; i++) {
    //     free(matrix[i]);
    // }
    // free(matrix);
    // printf("\nMemory freed. Program exiting.\n");
    // return 0;

    //Write a program that prints numbers from 1 to 100. For multiples of 3, print "Fizz".
    //For multiples of 5, print "Buzz". For multiples of both, print "FizzBuzz".
    // for (int i = 1; i <= 100; i++) {
    //     if (i % 3 == 0 && i % 5 == 0) {
    //         printf("FizzBuzz\n");
    //     }
    //     else if (i % 3 == 0) {
    //         printf("Fizz\n");
    //     }
    //     else if (i % 5 == 0) {
    //         printf("Buzz\n");
    //     }
    //     else {
    //         printf("%d\n", i);
    //     }
    // }

    int n, n1, i;
    int *arr;

    printf("How many initial numbers? ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nHow many additional numbers to add? ");
    scanf("%d", &n1);

    // Resize the array to hold (n + n1) elements
    int *temp = realloc(arr, (n + n1) * sizeof(int));

    if (temp == NULL) {
        printf("Failed to resize memory!\n");
        free(arr);// Clean up original memory before exiting
        return 1;
    }
    arr = temp; // Update pointer to the new (potentially moved) address

    // 3. Input the new elements
    for (i = n; i < n + n1; i++) {
        printf("Enter additional element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 4. Verification
    printf("\nFull Array: ");
    for (i = 0; i < n + n1; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);

    return 0;
}