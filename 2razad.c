#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// int* delete_duplicates_and_shrink(int *arr, int *size) {
//     if (*size == 0) return arr;
//
//     int newSize = 0;
//     for (int i = 0; i < *size; i++) {
//         bool exists = false;
//         for (int j = 0; j < newSize; j++) {
//             if (arr[i] == arr[j]) {
//                 exists = true;
//                 break;
//             }
//         }
//
//         if (!exists) {
//             arr[newSize] = arr[i];
//             newSize++;
//         }
//     }
//
//     *size = newSize;
//     int *temp = realloc(arr, newSize * sizeof(int));
//
//     if (temp == NULL && newSize > 0) {
//         return arr;
//     }
//     return temp;
// }

// float AVG(int *arr , int size) {
//     float sum = 0.0;
//     for (int i = 0; i < size; i++) {
//         sum += arr[i];
//     }
//     return sum / size;
// }
//
// int* expand(int *arr, int *size, int avg) {
//     int oldSize = *size;
//     int newSize = oldSize + avg;
//
//     int *temp = realloc(arr, newSize * sizeof(int));
//     if (temp == NULL) return arr;
//
//     for (int i = 0; i < avg; i++) {
//         temp[oldSize + i] = temp[i];
//     }
//
//     *size = newSize;
//     return temp;
// }
int main() {
    // int n;
    // int m;
    // bool isValid = true;
    //
    // printf("Въведете брой редове (N) и колони (M): ");
    // scanf("%d", &n);
    // scanf("%d", &m);
    //
    // int matrix[n][m];
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         scanf("%d", &matrix[i][j]);
    //     }
    // }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m - 1; j++) {
    //         if (matrix[i][j] > matrix[i][j+1]) {
    //             isValid = false;
    //             break;
    //         }
    //         if (!isValid) break;
    //     }
    //
    // }
    //
    // for (int  j = 0; j < m; j++) {
    //     for (int i = 0; i < n - 1; i++) {
    //         if (matrix[i][j] < matrix[i+1][j]) {
    //             isValid = false;
    //             break;
    //         }
    //         if (!isValid) break;
    //     }
    // }
    // if (isValid) {
    //     printf("DA\n");
    // } else {
    //     printf("NE\n");
    // }

    //zad2

    //zad3
    //  int n;
    //  int m;
    //
    //  printf("Rows?");
    //  scanf("%d", &n);
    //  printf("Columns?");
    //  scanf("%d", &m);
    //  int matrix[n][m];
    //  for (int i =0 ; i < n ; i++) {
    //      for (int j =0 ; j < m ; j++) {
    //          scanf("%d", &matrix[i][j]);
    //      }
    //  }
    //  int  max = matrix[0][0];
    //  int  min = matrix[0][0];
    //  int minrow = 0;
    //  int maxrow = 0;
    //
    // // find max num
    //  for (int i =0 ; i < n ; i++) {
    //      for (int j =0 ; j < m ; j++) {
    //          if (matrix[i][j] > max) {
    //              max = matrix[i][j];
    //              maxrow = i;
    //          }
    //      }
    //  }
    //
    // // find min num
    //  for (int i =0 ; i < n ; i++) {
    //      for (int j =0 ; j < m ; j++) {
    //          if (matrix[i][j] < min) {
    //              min = matrix[i][j];
    //              minrow = i;
    //          }
    //      }
    //  }
    //  printf("%d\n", max);
    //  printf("%d\n", min);
    //
    //
    //  if (maxrow != minrow) {
    //      for (int j = 0; j < m; j++) {
    //          int temp = matrix[maxrow][j];
    //          matrix[maxrow][j] = matrix[minrow][j];
    //          matrix[minrow][j] = temp;
    //      }
    //  }

    //dynamic array
    //zad1  sredna stoinost AVG-> func
    //dobawqme AVG broi elements kato kopirame ot nachaloto na masiva-> func
    // int n = 5;
    // int * arr = malloc(n * sizeof(int));
    //
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;
    //
    // int avg = AVG(arr, n);
    // printf("AVG: %d\n", avg);
    //
    // for (int i = 0; i < n; i++) printf("%d ", arr[i]); //arr-a go printwam
    // printf("\n");
    //
    // arr = expand(arr, &n, avg);
    //
    // printf("after the func!!!!\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
    //
    // free(arr);

    //BPE seminarno - 15.04 5,6,8 dynnamic ,statichni dvumerni
    //zad1
    // int n;
    // int m;
    // bool isValid = true;
    // printf("ROWS? ");
    // scanf("%d", &n);
    // printf("COLUMNS? ");
    // scanf("%d", &m);
    // int arr[n][m];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         printf("arr[%d][%d]", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    //
    // for (int i =0; i < n  ; i++) {
    //     for (int j =0; j< m - 1 ;j++) {
    //         if (arr[i][j] > arr[i][j+1]) {
    //             printf("1");
    //             isValid = false;
    //             break;
    //         }
    //         if (!isValid) break;
    //     }
    // }
    //
    // for (int j = 0; j < m; j++) {
    //     for (int i =0; j< n - 1 ;i++) {
    //         if (arr[i][j] > arr[i+1][j]) {
    //             printf("2");
    //             isValid = false;
    //             break;
    //         }
    //         if (!isValid) break;
    //     }
    // }
    //
    // if (isValid) {
    //     printf("Valid");
    // }
    // else {
    //     printf("Invalid");
    // }

    //1st exercise from the net
    // int *p;
    //
    // p = (int *)malloc(sizeof(int));
    // if (p == NULL) {
    //     return 1; //greshka
    // }
    //
    // *p = 42;
    // printf("Chisloto v dinamichna pamet e %d\n", *p);
    // free(p);

    //2nd exercise from the net

    // int n;
    // printf("How many nums in dynamic arr?");
    // scanf("%d", &n);
    //
    // int *arr = (int *)malloc(n * sizeof(int));
    // if (arr == NULL) {
    //     printf("Error allocating memory");
    // }
    // for (int i = 0; i < n; i++) {
    //     arr[i] = i + 1;
    //     scanf("%d", &arr[i]);
    // }
    //
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // free(arr);



    return 0;
}