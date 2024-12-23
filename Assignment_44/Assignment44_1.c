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

int SearchFirstOcc(PNODE head, int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while(head != NULL)
    {
        if(head->data == iNo)
        {
            return iCnt;
        }
        head = head->next;
        iCnt ++;
    }

    return -1;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    int iElement = 0;

    InsertFirst(&first, 70);
    InsertFirst(&first, 60);
    InsertFirst(&first, 50);
    InsertFirst(&first, 40);
    InsertFirst(&first, 30);
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);

    Display(first);

    printf("Input element : ");
    scanf("%d",&iElement);

    iRet = SearchFirstOcc(first,iElement);
    printf("Output : %d\n",iRet);

    return 0;
}

/*
C:\Users\Lenovo\Desktop\Assign_LB\Assignment_44>gcc Assignment44_1.c -o Myexe

C:\Users\Lenovo\Desktop\Assign_LB\Assignment_44>Myexe
Input Linked list : | 10 | -> | 20 | -> | 30 | -> | 40 | -> | 50 | -> | 60 | -> | 70 | -> NULL
Input element : 30
Output : 3
*/