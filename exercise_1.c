#include <stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}



int main() {

    int a = 5;
    int b = 10;
    printf("Преди размяната: a = %d, b = %d\n", a, b);

    swap(&a,&b);
    printf("След размяната:  a = %d, b = %d\n", a, b);

    return 0;
}

