#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* merge(struct Node *L1, struct Node *L2)
{
    struct Node *result = NULL;
    struct Node *temp = NULL;

    while (L1 != NULL && L2 != NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

        if (L1->data < L2->data)
        {
            newNode->data = L1->data;
            L1 = L1->next;
        }
        else
        {
            newNode->data = L2->data;
            L2 = L2->next;
        }

        newNode->next = NULL;

        if (result == NULL)
        {
            result = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    while (L1 != NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = L1->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
        L1 = L1->next;
    }

    while (L2 != NULL)
    {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = L2->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
        L2 = L2->next;
    }

    return result;
}
