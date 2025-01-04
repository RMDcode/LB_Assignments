#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE; 

class DoublyLL
{  
    public:
        PNODE head;
        int iCount;

        DoublyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL;
            newn = new node();

            newn->data = iNo;
            newn->next = NULL;
            newn->prev = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                newn->prev = newn;
                head = newn; 
            }
            iCount ++;
        }

        void InsertLast(int iNo)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            newn = new node();

            newn->data = iNo;
            newn->next = NULL;
            newn->prev = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;

                while(temp->next != NULL)
                {
                    temp = temp->next;
                }

                newn->prev = temp;
                temp->next = newn;
            }
            iCount ++;
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;
            temp = head;

            if(temp == NULL)
            {
                cout<<"There is no elements in LinkedList";
                return; 
            }
            if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                head = head->next;
                head->prev = NULL;
                delete temp;
            }   
            iCount --;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;
            temp = head;

            if(temp == NULL)
            {
                cout<<"There is no elements in LinkedList";
                return; 
            }
            if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                while(temp->next->next != NULL)
                {
                    temp = temp->next;
                }

                delete(temp->next);
                temp->next = NULL; 
            }   
            iCount --;
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = head;
            cout<<"NULL <=> ";
            while(temp != NULL)
            {
                cout<<"|"<<temp->data<<"| <=> ";
                temp = temp -> next;
            }
            cout<<"NULL\n";
        }

        int Count(){return iCount;}

        void InsertAtPos(int iNo, int iPos)
        {
            int iCountNode = 0;
            int iCnt = 0;
            PNODE newn = NULL;
            PNODE temp = NULL;
            
            iCountNode = Count();

            if((iPos < 1) || (iPos > iCountNode + 1))
            {
                cout<<"Invalid position\n";
            }

            if(iPos == 1)
            {
                InsertFirst(iNo);
            }
            else if(iPos == iCountNode + 1)
            {
                InsertLast(iNo);
            }
            else
            {
                newn = new node();
                temp = head;
                newn -> data = iNo;
                newn -> next = NULL;
                newn -> prev = NULL;

                for(iCnt = 1 ; iCnt < iPos - 1 ; iCnt ++)
                {
                    temp = temp -> next;
                } 
                newn->next = temp->next;
                temp->next->prev = newn;
                temp->next = newn;
                newn->prev = temp;

                iCount++;
            }
        }

        void DeleteAtPos(int iPos)
        {
            int iCountNode = 0;
            int iCnt = 0;
            PNODE target = NULL;
            PNODE temp = NULL;
            
            iCountNode = Count();

            if((iPos < 1) || (iPos > iCountNode ))
            {
                cout<<"Invalid position\n";
            }

            if(iPos == 1)
            {
                DeleteFirst();
            }
            else if(iPos == iCountNode)
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
                temp->next->prev = temp;
                iCount --;                
                
            }
        }
};  

int main()
{   
    DoublyLL dObj;
    int iRet = 0;

    dObj.InsertFirst(51);
    dObj.InsertFirst(21);
    dObj.InsertFirst(11);

    dObj.Display();
    iRet = dObj.Count();
    cout<<"Number of elements of LinkedList : "<<iRet<<"\n";

    dObj.InsertLast(101);
    dObj.InsertLast(111);
    dObj.InsertLast(121);

    dObj.Display();
    iRet = dObj.Count();
    cout<<"Number of elements of LinkedList : "<<iRet<<"\n";

    dObj.DeleteFirst();
    dObj.Display();
    iRet = dObj.Count();
    cout<<"Number of elements of LinkedList : "<<iRet<<"\n";
    
    dObj.DeleteLast();
    dObj.Display();
    iRet = dObj.Count();
    cout<<"Number of elements of LinkedList : "<<iRet<<"\n";

    dObj.InsertAtPos(31,2);
    dObj.Display();
    iRet = dObj.Count();
    cout<<"Number of elements of LinkedList : "<<iRet<<"\n";
    
    dObj.DeleteAtPos(2);
    dObj.Display();
    iRet = dObj.Count();
    cout<<"Number of elements of LinkedList : "<<iRet<<"\n";
    
    return 0;
}