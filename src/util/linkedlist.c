/*************************************************
 *File----------linkedlist
 *Project-------Learn-C
 *Author--------Justin Kachele
 *Created-------Monday Mar 11, 2024 10:46:02 EDT
 *License-------GNU GPL-3.0
 ************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

sNode *createSNode(char str[]) {
    sNode *result = malloc(sizeof(sNode));
    strcpy(result->str, str);
    result->prev = NULL;
    result->next = NULL;
    return result;
}

sNode *insertSNodeAtHead(sNode **head, sNode **tail, sNode *nodeToInsert) {
    nodeToInsert->next = *head;
    if (*head == NULL) {
        *tail = nodeToInsert;
    } else {
        (*head)->prev = nodeToInsert;
    }
    *head = nodeToInsert;
    nodeToInsert->prev = NULL;
    return nodeToInsert;
}

sNode *insertSNodeAtTail(sNode **head, sNode **tail, sNode *nodeToInsert) {
    nodeToInsert->prev = *tail;
    if (*tail == NULL) {
        *head = nodeToInsert;
    } else {
        (*tail)->next = nodeToInsert;
    }
    *tail = nodeToInsert;
    nodeToInsert->next = NULL;
    return nodeToInsert;
}

void insertSNodeAfterNode(sNode **tail, sNode *nodeToInsertAfter, sNode *nodeToInsert) {
    nodeToInsert->next = nodeToInsertAfter->next;
    if (nodeToInsert->next == NULL) {
        *tail = nodeToInsert;
    } else {
        nodeToInsert->next->prev = nodeToInsert;
    }
    nodeToInsert->prev = nodeToInsertAfter;
    nodeToInsertAfter->next = nodeToInsert;
}

void insertSNodeBeforeNode(sNode **head, sNode *nodeToInsertBefore, sNode *nodeToInsert) {
    nodeToInsert->prev = nodeToInsertBefore->prev;
    if (nodeToInsert->prev == NULL) {
        *head = nodeToInsert;
    } else {
        nodeToInsert->prev->next = nodeToInsert;
    }
    nodeToInsert->next = nodeToInsertBefore;
    nodeToInsertBefore->prev = nodeToInsert;
}

void removeSNode(sNode **head, sNode **tail, sNode *nodeToRemove) {
    if (*head == nodeToRemove) {
        *head = nodeToRemove->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(nodeToRemove);
        return;
    } else if (*tail == nodeToRemove) {
        *tail = nodeToRemove->prev;
        if (*tail != NULL) {
            (*tail)->next = NULL;
        }
        free(nodeToRemove);
        return;
    }else {
        nodeToRemove->prev->next = nodeToRemove->next;
        if (nodeToRemove->next != NULL) {
            nodeToRemove->next->prev = nodeToRemove->prev;
        }
        nodeToRemove->next = NULL;
        nodeToRemove->prev = NULL;
    }
    free(nodeToRemove);
    return;
}

sNode *getSNodeAtIndex(sNode *head, int index) {
    sNode *temp = head;
    int i = 0;
    while (temp != NULL) {
        if (i == index) return temp;
        temp = temp->next;
        i++;
    }
    return NULL;
}

sNode *getSNodeWithValue(sNode *head, char str[]) {
    sNode *temp = head;
    while (temp != NULL) {
        if (strcmp(temp->str, str) == 0) return temp;
        temp = temp->next;
    }
    return NULL;
}

void printSNodeList(sNode *head) {
    sNode *temp = head;
    while (temp != NULL) {
        printf("%s, ", temp->str);
        temp = temp->next;
    }
    printf("\n");
}
