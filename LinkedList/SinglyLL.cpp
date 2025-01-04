#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;


class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new node();

            newn -> data = no;
            newn -> next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            iCount ++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new node();

            newn -> data = no;
            newn -> next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;

                while(temp->next != NULL)
                {
                    temp = temp ->next ;
                }

                temp->next = newn;
            }
            iCount++;
        }
        
        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(head == NULL)
            {
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                head = head->next;
                delete temp;
            }
            iCount --;
        }
        
        void DeleteLast()
        {
            PNODE temp = NULL;

            if(head == NULL)
            {
                return;
            }
            else if(head -> next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                while(temp->next->next != NULL)
                {
                    temp = temp -> next;   
                }

                delete temp -> next;
                temp -> next = NULL;
            }
            iCount --;
        }
        
        void Display()
        {
            PNODE temp = NULL;
            temp = head;

            cout<<"Elements of Singly Linked List : ";
            while(temp != NULL)
            {
                cout<<"|"<<temp->data<<"| -> ";
                temp = temp -> next;
            }
            cout<<"NULL\n";
        }
        
        int Count(){ return iCount; }
        
        void InsertAtPos(int no, int iPos)
        {
            int CountNode = 0;
            int iCnt = 0;
            PNODE newn = NULL;
            PNODE temp = NULL;

            CountNode = Count();
            
            if((iPos < 1) || (iPos > CountNode + 1))
            {
                cout<<"Invalid Position \n";
                return ;
            }

            if(iPos == 1)
            {
                InsertFirst(no);
            }
            else if(iPos == CountNode + 1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new node();

                temp = head;
                newn -> data = no;
                newn-> next  = NULL;

                for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt ++)
                {
                    temp = temp -> next;
                }

                newn -> next = temp -> next;
                temp -> next = newn;
                iCount ++;
            }
        }
        
        void DeleteAtPos(int iPos)
        {
            int CountNode = 0;
            int iCnt = 0;
            PNODE temp = NULL;
            PNODE target = NULL;

            CountNode = Count();

            if((iPos < 1) || (iPos > CountNode))
            {
                cout<<"Invalid Position\n";
                return;
            }

            if(iPos == 1)
            {
                DeleteFirst();
            }
            else if(iPos == CountNode)
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
                temp -> next = target -> next;
                delete target;
                target = NULL;
                iCount --;
            }
        }
};

int main()
{
    SinglyLL sObj;
    int iRet = 0;

    sObj.InsertFirst(51);
    sObj.InsertFirst(21);
    sObj.InsertFirst(11);

    sObj.Display();
    iRet = sObj.Count();
    cout<<"Count of element of Singly LinkedList : "<<iRet<<"\n";

    
    sObj.InsertLast(101);
    sObj.InsertLast(111);
    sObj.InsertLast(121);

    sObj.Display();
    iRet = sObj.Count();
    cout<<"Count of element of Singly LinkedList : "<<iRet<<"\n";

    sObj.DeleteFirst();
    sObj.Display();
    iRet = sObj.Count();
    cout<<"Count of element of Singly LinkedList : "<<iRet<<"\n";

    sObj.DeleteLast();
    sObj.Display();
    iRet = sObj.Count();
    cout<<"Count of element of Singly LinkedList : "<<iRet<<"\n";

    sObj.DeleteAtPos(3);
    sObj.Display();
    iRet = sObj.Count();
    cout<<"Count of element of Singly LinkedList : "<<iRet<<"\n";

    sObj.InsertAtPos(31,3);
    sObj.Display();
    iRet = sObj.Count();
    cout<<"Count of element of Singly LinkedList : "<<iRet<<"\n";

    return 0;
}