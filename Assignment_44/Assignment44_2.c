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

int SearchLastOcc(PNODE head, int iNo)
{
    int iCnt = 0;
    int iLastOcc = -1;

    iCnt = 1;
    while(head != NULL)
    {
        if(head->data == iNo)
        {
            iLastOcc = iCnt;
        }
        head = head->next;
        iCnt ++;
    }

    return iLastOcc;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;
    int iElement = 0;

    InsertFirst(&first, 70);
    InsertFirst(&first, 30);
    InsertFirst(&first, 50);
    InsertFirst(&first, 40);
    InsertFirst(&first, 30);
    InsertFirst(&first, 20);
    InsertFirst(&first, 10);

    Display(first);

    printf("Input element : ");
    scanf("%d",&iElement);

    iRet = SearchLastOcc(first,iElement);
    printf("Output : %d\n",iRet);

    return 0;
}
