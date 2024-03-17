/*************************************************
 *File----------linkedlist
 *Project-------Learn-C
 *Author--------Justin Kachele
 *Created-------Monday Mar 11, 2024 10:45:46 EDT
 *License-------GNU GPL-3.0
 ************************************************/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#define BUFFER_SIZE 256

struct stringNode {
    char str[BUFFER_SIZE];
    struct stringNode *prev;
    struct stringNode *next;
};
typedef struct stringNode sNode;

sNode *createSNode(char str[]);
sNode *insertSNodeAtHead(sNode **head, sNode **tail, sNode *nodeToInsert);
sNode *insertSNodeAtTail(sNode **head, sNode **tail, sNode *nodeToInsert);
void insertSNodeAfterNode(sNode **tail, sNode *nodeToInsertAfter, sNode *nodeToInsert);
void insertSNodeBeforeNode(sNode **head, sNode *nodeToInsertBefore, sNode *nodeToInsert);
void removeSNode(sNode **head, sNode **tail, sNode *nodeToRemove);
sNode *getSNodeAtIndex(sNode *head, int index);
sNode *getSNodeWithValue(sNode *head, char str[]);
void printSNodeList(sNode *head);

#endif
