/*************************************************
 *File----------Day1a
 *Project-------Advent-of-Code-C
 *Author--------Justin Kachele
 *Created-------Wednesday Feb 28, 2024 13:20:23 EST
 *License-------GNU GPL-3.0
 ************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../util/linkedlist.h"

sNode *LLHead;
sNode *LLTail;

void getInputFile(char *fileName) {
    FILE *inputFile = fopen(fileName, "r");     // Open file in read mode
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    if (inputFile == NULL) {    // If file dosent exist, exit
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, inputFile)) != -1) {    // set "line" to the line in the file and test for end of file
        line[strlen(line) - 1] = '\0';                          // Remove newline character from string
        sNode *lineNode = createSNode(line);
        insertSNodeAtTail(&LLHead, &LLTail, lineNode);
    }

    fclose(inputFile);
    if (line) {
        free(line);
    }
}

int main(int argc, char *argv[]) {
    getInputFile("assets/2023/Day1.txt");
    // getInputFile("assets/test.txt");
    printSNodeList(LLHead);

    // Part 1
    int calibrationSum = 0;
    sNode *current = LLHead;
    while(current != NULL) {
        char *str = current->str;
        int digit1 = 0;
        int digit2 = 0;
        for (int i = 0; i < strlen(str); i++) {
            int charNum = str[i] - '0';
            if (charNum >= 0 && charNum <= 9) {
                digit1 = charNum;
                break;
            }
        }
        for (int i = strlen(str) - 1; i >= 0; i--) {
            int charNum = str[i] - '0';
            if (charNum >= 0 && charNum <= 9) {
                digit2 = charNum;
                break;
            }
        }
        calibrationSum += (digit1 * 10) + digit2;

        current = current->next;
    }

    printf("Part 1 Calibration Sum = %d\n", calibrationSum);

    //Part 2
    calibrationSum = 0;
    current = LLHead;
    while(current != NULL) {
        char *str = current->str;
        int digit1 = 0;
        int digit2 = 0;
        for (int i = 0; i < strlen(str); i++) {
            int charNum = str[i] - '0';
            if (charNum >= 0 && charNum <= 9) {
                digit1 = charNum;
                break;
            }
        }
        for (int i = strlen(str) - 1; i >= 0; i--) {
            int charNum = str[i] - '0';
            if (charNum >= 0 && charNum <= 9) {
                digit2 = charNum;
                break;
            }
        }
        calibrationSum += (digit1 * 10) + digit2;

        current = current->next;
    }

    printf("Part 2 Calibration Sum = %d\n", calibrationSum);

    return 0;
}
