#include <stdio.h>
#include <stdbool.h>
#include <sys/signal.h>


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
    int n;
    int m;

    printf("Rows?");
    scanf("%d", &n);
    printf("Columns?");
    scanf("%d", &m);
    int matrix[n][m];
    for (int i =0 ; i < n ; i++) {
        for (int j =0 ; j < m ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int  max = matrix[0][0];
    int  min = matrix[0][0];
    int minrow = 0;
    int maxrow = 0;

    //find max num
    for (int i =0 ; i < n ; i++) {
        for (int j =0 ; j < m ; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                maxrow = i;
            }
        }
    }

    //find min num
    for (int i =0 ; i < n ; i++) {
        for (int j =0 ; j < m ; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                minrow = i;
            }
        }
    }
    printf("%d\n", max);
    printf("%d\n", min);


    if (maxrow != minrow) {
        for (int j = 0; j < m; j++) {
            int temp = matrix[maxrow][j];
            matrix[maxrow][j] = matrix[minrow][j];
            matrix[minrow][j] = temp;
        }
    }
    // for (int i =0 ; i < n ; i++) {
    //     for (int j =0 ; j < m ; j++) {
    //         printf("%d ", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    //printing the matrix

    return 0;
}
