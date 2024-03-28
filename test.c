/*************************************************
 *File----------test
 *Project-------Advent-of-Code-C
 *Author--------Justin Kachele
 *Created-------Wednesday Mar 20, 2024 16:22:38 EDT
 *License-------GNU GPL-3.0
 ************************************************/

#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> a1a58aa (Completed Day 3)

void printArray(int array[10]) {
    for (int i = 0; i < 10; i++) {
        printf("[%d] ", array[i]);
    }
    printf("\n");
}
<<<<<<< HEAD

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
<<<<<<< HEAD
    int array[10][10];
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            array[y][x] = (y * 10) + x;
        }
    }

    // for (int y = 0; y < 10; y++) {
    //     for (int x = 0; x < 10; x++) {
    //         printf("[%d] ", array[x][y]);
    //     }
    //     printf("\n");
    // }

    printArray(array[3]);
=======
=======
#include "src/util/linkedlist.h"

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    llist *ll = llist_create();
    llNode *node1 = llist_create_node("Hello 1");
    llNode *node2 = llist_create_node("Hello 2");
    llNode *node3 = llist_create_node("Hello 3");
    llNode *node4 = llist_create_node("Hello 4");
>>>>>>> 639af58 (Refactored Linked List Library)
=======

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");
    int array[10][10];
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            array[y][x] = (y * 10) + x;
        }
    }
>>>>>>> a1a58aa (Completed Day 3)

    // for (int y = 0; y < 10; y++) {
    //     for (int x = 0; x < 10; x++) {
    //         printf("[%d] ", array[x][y]);
    //     }
    //     printf("\n");
    // }

<<<<<<< HEAD
<<<<<<< HEAD
    printf("Char: %c = %d\n", num, num - '0');
>>>>>>> 7ba1eb0 (Continue Day 3)
=======
    llist_print(ll);
>>>>>>> 639af58 (Refactored Linked List Library)
=======
    printArray(array[3]);
>>>>>>> a1a58aa (Completed Day 3)

    return 0;
}

