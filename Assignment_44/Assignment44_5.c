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

int Minimum(PNODE head)
{
    int iMin = head->data;
    while(head != NULL)
    {
        while(iMin > head->data)
        {
            iMin = head->data;
        } 
        head = head->next;
    }

    return iMin;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 640);
    InsertFirst(&first, 240);
    InsertFirst(&first, 20);
    InsertFirst(&first, 230);
    InsertFirst(&first, 110);

    Display(first);

    iRet = Minimum(first);
    printf("Output : %d\n",iRet);

    return 0;
}
/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_44>gcc Assignment44_5.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_44>Myexe
Input Linked list : | 110 | -> | 230 | -> | 20 | -> | 240 | -> | 640 | -> NULL
Output : 20
*/