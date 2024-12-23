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

    newn->data = iNo;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Input Linked list : ");
    while(head != NULL)
    {
        printf("| %d | -> ",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Maximum(PNODE head)
{
    int iMax = 0;
    while(head != NULL)
    {
        while(iMax < head->data)
        {
            iMax = head->data;
        } 
        head = head->next;
    }

    return iMax;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 240);
    InsertFirst(&first, 320);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    Display(first);

    iRet = Maximum(first);
    printf("Output : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_44>gcc Assignment44_4.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_44>Myexe
Input Linked list : | 110 | -> | 230 | -> | 320 | -> | 240 | -> NULL
Output : 320
*/