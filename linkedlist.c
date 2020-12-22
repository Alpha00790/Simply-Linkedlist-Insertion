#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int number;
    struct node *next;
}
node;

int main()
{
    node *list = NULL;

    node *n = malloc(sizeof(node));

    if(n == NULL)
    {
        return 1;
    }
    n -> number = 1;
    n -> next = NULL;
    list = n;

    n = malloc(sizeof(node));

    if(n == NULL)
    {
        return 1;
    }

    n -> number = 2;
    n -> next = NULL;
    list -> next = n;

    n = malloc(sizeof(node));

    if(n == NULL)
    {
        return 1;
    }

    n -> number = 4;
    n -> next = NULL;
    list -> next -> next = n;

    n = malloc(sizeof(node));

    if(n == NULL)
    {
        return 1;
    }

    n -> number = 100;
    n -> next = NULL;
    list->next->next->next = n;

    for(node *temp = list; temp != NULL; temp =  temp -> next)
    {
        printf("%i ",temp -> number);
    }

    while(list!=NULL)
    {
        node*temp = list -> next;
        free(list);
        list = temp;
    }
}
