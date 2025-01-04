#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

    SinglyCL()
    {
        head = NULL;
        tail = NULL;
        iCount = 0;
    }

    void InsertFirst(int iNo)
    {
        PNODE newn = NULL;
        newn = new node();

        newn->data = iNo;
        newn->next = NULL;

        if((head == NULL) && (tail == NULL))
        {
            head = newn;
            tail = newn;
        }
        else
        {
            newn->next = head;
            head = newn;
        }
        tail->next = head;
        iCount++;
    }
    
    void InsertLast(int iNo)
    {
        PNODE newn = NULL;
        newn = new node();

        newn->data = iNo;
        newn->next = NULL;

        if((head == NULL) && (tail == NULL))
        {
            head = newn;
            tail = newn;
        }
        else
        {
            tail->next = newn;
            tail = newn;
        }
        tail->next = head;
        iCount++;
    }
    
    void DeleteFirst()
    {
        PNODE temp = NULL;

        if((head == NULL) && (tail == NULL))
        {
            return;
        }
        else if(head == tail)
        {
            delete head;
            head == NULL;
            tail == NULL;
        }
        else
        {
            temp = head;
            head = head->next;
            tail->next = head;
            delete temp;
        }
        iCount --;
    }
    
    void DeleteLast()
    {
        PNODE temp = NULL;

        if((head == NULL) && (tail == NULL))
        {
            return;
        }
        else if(head == tail)
        {
            delete head;
            head == NULL;
            tail == NULL;
        }
        else
        {
            PNODE temp = head;

            while(temp->next != tail)
            {
                temp = temp->next;
            }

            delete (temp -> next);              //delete tail
            tail = temp;
            tail->next = head;    
        }
        
        iCount --;
    }
    
    void Display()
    {
        PNODE temp = NULL;
        temp = head;
        if((head == NULL) && (tail == NULL))
        {
            cout<<"Linked List is empty !!!\n";
            return;
        }
        cout<<"Elements of LinkedList are : \n";

        do
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp -> next;
        }
        while(temp != tail -> next);                        //while(temp != head)

        cout<<"|\n";
    }
    
    int Count(){return iCount;}
    
    void DeleteAtPos(int iPos)
    {
        PNODE target = NULL;
        PNODE temp = NULL;

        int iCnt = 0;
        int iCounts = 0;

        iCounts = Count();

        if((iPos < 1) || (iPos > iCounts))
        {
            cout<<"Invalid position\n";
            return;
        }

        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == iCounts)
        {
            DeleteLast();
        }
        else
        {
            temp = head;

            for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt ++)
            {
                temp = temp -> next;
            }
            target = temp -> next;

            temp->next = target->next;
            delete (target);
            iCount--;
        }
    }
    
    void InsertAtPos(int iPos, int iNo)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;

        int iCnt = 0;
        int iCounts = 0;

        iCounts = Count();

        if((iPos < 1) || (iPos > iCounts + 1))
        {
            cout<<"Invalid position\n";
            return;
        }

        if(iPos == 1)
        {
            InsertFirst(iNo);
        }
        else if(iPos == iCount + 1)
        {
            InsertLast(iNo);
        }
        else
        {
            newn = new node();

            newn -> data = iNo;
            newn -> next = NULL;

            temp = head;

            for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt ++)
            {
                temp = temp -> next;
            }
            newn -> next = temp -> next;
            temp -> next = newn;
            iCount++;
        }
    }
};

int main()
{
    SinglyCL sObj;
    int iRet = 0;

    sObj.InsertFirst(51);
    sObj.InsertFirst(21);
    sObj.InsertFirst(11);

    sObj.InsertLast(101);
    sObj.InsertLast(111);
    sObj.InsertLast(121);

    sObj.InsertAtPos(75,4);

    sObj.Display();
    iRet = sObj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sObj.DeleteAtPos(4);

    sObj.Display();
    iRet = sObj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sObj.DeleteFirst();
    sObj.Display();
    iRet = sObj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sObj.DeleteLast();    
    sObj.Display();
    iRet = sObj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}