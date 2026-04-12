#include <stdio.h>
int main() {
    int a = 3 ;
    int *ip;

    ip = &a;
    printf("%d\n", a);
    *ip = 100;
    printf("%d", a);

}