//
// Created by NIkolay Kolev on 20.04.26.
//
#include <stdio.h>
#include <string.h>


struct Inventory
    {
        int tables;
        int chairs;
        int cups;
        int dishes;
        double total_cost;
    };

int main() {

    //zad bpe 5to 1,2,5,6
    //zad1
    int guests;
    char item[50];

    struct Inventory bought = {0, 0, 0, 0, 0.0};

    if (scanf("%d", &guests) != 1) return 1;

    while (1) {
        scanf("%s", item);
        if (strcmp(item, "PARTY!") == 0) break;

        if (strcmp(item, "Table") == 0) {
            bought.tables++;
            bought.total_cost += 42.00;
        } else if (strcmp(item, "Chair") == 0) {
            bought.chairs++;
            bought.total_cost += 13.99;
        } else if (strcmp(item, "Cups") == 0) {
            bought.cups++;
            bought.total_cost += 5.98;
        } else if (strcmp(item, "Dishes") == 0) {
            bought.dishes++;
            bought.total_cost += 21.02;
        }
    }

    // Изчисляваме колко комплекта/бройки са нужни според броя гости
    int need_t = (guests + 7) / 8;  // 1 маса за 8 човека
    int need_c = guests;            // 1 стол за 1 човек
    int need_s = (guests + 5) / 6;  // 1 комплект (чаши/чинии) за 6 човека

    // Изход
    printf("\n%.2f\n", bought.total_cost);

    if (need_t > bought.tables)
        printf("%d Table\n", need_t - bought.tables);

    if (need_c > bought.chairs)
        printf("%d Chairs\n", need_c - bought.chairs);

    if (need_s > bought.cups)
        printf("%d Cups\n", need_s - bought.cups);

    if (need_s > bought.dishes)
        printf("%d Dishes\n", need_s - bought.dishes);



    return 0;
}