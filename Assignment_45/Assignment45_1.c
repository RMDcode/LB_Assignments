#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Input LinkedList :");
    while(head != NULL)
    {
        printf("| %d | ->",head -> data);
        head = head -> next;
    }
    printf("NULL \n");
}

void DisplayPerfect(PNODE head)
{
    int iCnt = 0, iSum = 0;
    PNODE temp = head;
    printf("Output : ");
    
    while(temp != NULL)
    {   
        iSum = 0;

        for(iCnt = 1 ; iCnt <= temp->data / 2 ; iCnt ++)
        {
            if(temp->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == temp->data && temp->data > 0)
        {
            printf("%d\t",temp->data);
        }

        temp = temp -> next;
    }
    printf("\n");
}

int main()
{   
    PNODE first = NULL;
    InsertFirst(&first, 89);
    InsertFirst(&first, 6);
    InsertFirst(&first, 41);
    InsertFirst(&first, 17);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);

    Display(first);

    DisplayPerfect(first);

    return 0;
}

