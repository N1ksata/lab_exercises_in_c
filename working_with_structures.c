
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int anagram(char *s1, char *s2) {

    if (strcmp(s1, s2) == 0 || strlen(s1) == strlen(s2)) {
        return 0;
    }

    for (int i = 0; i < strlen(s1); i++) {

    }





    return 1;
}

// struct Inventory
// {
//     int tables;
//     int chairs;
//     int cups;
//     int dishes;
//     double total_cost;
// };


typedef struct {
    char name[50];
    int price;
    int id;
}Product;

typedef struct {
    char address[100];
    int productId;
}Order;

int main() {

    //zad bpe 5to 1,2,5,6
    //zad1
    // int guests;
    // char item[50];
    //
    // struct Inventory bought = {0, 0, 0, 0, 0.0};
    //
    // if (scanf("%d", &guests) != 1) return 1;
    //
    // while (1) {
    //     scanf("%s", item);
    //     if (strcmp(item, "PARTY!") == 0) break;
    //
    //     if (strcmp(item, "Table") == 0) {
    //         bought.tables++;
    //         bought.total_cost += 42.00;
    //     } else if (strcmp(item, "Chair") == 0) {
    //         bought.chairs++;
    //         bought.total_cost += 13.99;
    //     } else if (strcmp(item, "Cups") == 0) {
    //         bought.cups++;
    //         bought.total_cost += 5.98;
    //     } else if (strcmp(item, "Dishes") == 0) {
    //         bought.dishes++;
    //         bought.total_cost += 21.02;
    //     }
    // }
    // int need_t = (guests + 7) / 8;
    // int need_c = guests;
    // int need_s = (guests + 5) / 6;
    //
    // printf("\n%.2f\n", bought.total_cost);
    //
    // if (need_t > bought.tables)
    //     printf("%d Table\n", need_t - bought.tables);
    //
    // if (need_c > bought.chairs)
    //     printf("%d Chairs\n", need_c - bought.chairs);
    //
    // if (need_s > bought.cups)
    //     printf("%d Cups\n", need_s - bought.cups);
    //
    // if (need_s > bought.dishes)
    //     printf("%d Dishes\n", need_s - bought.dishes);

    //zad2
    // char item[50];
    //
    // while (1) {
    //     scanf("%s", item);
    //     if (strcmp(item, "END") == 0) break;
    //
    //
    // }

    //zad5 "hangman_in_c"
    // char word[] = "concatenation";
    // int length = strlen(word);
    //
    // char guessed_word[length + 1];
    // for (int i = 0; i < length; i++) {
    //     guessed_word[i] = '_';
    // }
    // guessed_word[length] = '\0';
    //
    // int attempts = 0;
    // int found_letters = 0;
    // char input[10];
    //
    // printf("Думата е: %s (дължина: %d)\n", guessed_word, length);
    //
    //
    // while (found_letters < length) {
    //     printf("\nVuvedi bukwa: ");
    //     scanf("%s", input);
    //     char current_letter = input[0];
    //     attempts++;
    //
    //     bool correct_guess = false;
    //     for (int i = 0; i < length; i++) {
    //         if (word[i] == current_letter && guessed_word[i] == '_') {
    //             guessed_word[i] = current_letter;
    //             found_letters++;
    //             correct_guess = true;
    //         }
    //
    //     }
    //     if (correct_guess) {
    //         printf("Uceli  %s\n", guessed_word);
    //     } else {
    //         printf("Ne uceli%s\n", guessed_word);
    //     }
    // }
    //
    // if (attempts <= length + 2) {
    //     printf("Pozna dumata -> %d opita.\n", attempts);
    // } else {
    //     printf("Zagubi ->(%d).\n", attempts);
    // }

    //zad 6
    char s1[] = "silent";
    char s2[] = "listen";
    if (anagram(s1, s2))
        printf("Anagrams");
    else
        printf("Not Anagrams");
    return 0;
}

//zad7